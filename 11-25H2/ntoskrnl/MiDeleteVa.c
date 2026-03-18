/*
 * XREFs of MiDeleteVa @ 0x1402B1A90
 * Callers:
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140382A54 (MiDecommitHandlePageFileFormatPte.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140382C60 (MiDecommitHandleProtoFormatPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140383A0C (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitHandleTransitionPte @ 0x140383AF4 (MiDecommitHandleTransitionPte.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiDeleteRotateVa @ 0x14039106C (MiDeleteRotateVa.c)
 *     MiDeleteLargeUserPde @ 0x1403FB6F0 (MiDeleteLargeUserPde.c)
 *     MiDeleteVadAwePtes @ 0x1403FB8D8 (MiDeleteVadAwePtes.c)
 *     MiIsLazyStampedPte @ 0x14040AF1C (MiIsLazyStampedPte.c)
 *     MiDecommitLargePte @ 0x1404C9F9C (MiDecommitLargePte.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7924 (MiDecommitAddTbFlushEntries.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int v5; // r15d
  __int64 v6; // rdi
  __int64 p_Blink; // rcx
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int64 Process; // rdx
  unsigned __int64 v13; // rbx
  unsigned int v15; // ebp
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbp
  int v19; // ebp
  __int64 ProcessorFlushList; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // eax
  int v27; // ebp
  int v28; // r12d
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r8
  unsigned int v35; // [rsp+78h] [rbp+10h]

  v3 = a1;
  v5 = 1;
  v6 = **(_QWORD **)(a1 + 184);
  p_Blink = *(unsigned int *)(v6 + 160);
  v35 = *(_DWORD *)(v6 + 160);
  *(_QWORD *)(v6 + 72) = a2;
  *(_QWORD *)(v6 + 88) = a2;
  v8 = 0;
  *(_DWORD *)(v6 + 96) = a3;
  v9 = (__int64)(a2 << 25) >> 16;
  *(_QWORD *)(v6 + 56) = v9;
  v10 = *(_QWORD *)(v3 + 32);
  v11 = v10 - 1024;
  if ( (*(_DWORD *)(v10 + 184) & 0xF) != 0 )
    v11 = 0LL;
  while ( 1 )
  {
    Process = 0xFFFFF6FB7DBED7F8uLL;
    v13 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v22 = *(_QWORD *)a2;
      if ( (v13 & 1) != 0 )
      {
        LOBYTE(Process) = (v13 & 0x42) != 0;
        if ( ((unsigned __int8)Process & ((v13 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 352) != 1 )
          {
            v9 = *(_QWORD *)(Process + 1288);
            if ( v9 )
            {
              v23 = *(_QWORD *)(v9 + 8 * ((a2 >> 3) & 0x1FF));
              if ( (v23 & 0x20) != 0 )
                v22 = v13 | 0x20;
              v13 = v22 | 0x42;
              if ( (v23 & 0x42) == 0 )
                v13 = v22;
            }
          }
        }
        p_Blink = v35;
      }
    }
    if ( !v13 )
      goto LABEL_5;
    if ( (v13 & 1) != 0 )
      break;
    if ( (v13 & 0x400) != 0 )
    {
      MiDecommitHandleProtoFormatPte(v6, v13);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    v27 = p_Blink & 0x10;
    if ( (p_Blink & 0x10) != 0 )
    {
      if ( (unsigned int)MiIsLazyStampedPte(v13) )
      {
        v31 = MiDeleteVadAwePtes(a1, a2, a3);
        MiDecommitAddTbFlushEntries(v6, a2, a3, v31);
        *(_QWORD *)(v6 + 88) += 8LL * v5;
        return 0LL;
      }
      LOWORD(p_Blink) = v35;
    }
    if ( (v13 & 0x800) == 0 )
    {
      *(_QWORD *)(v6 + 88) += 8LL * (unsigned int)MiDecommitHandlePageFileFormatPte(v6, v13);
      return 0LL;
    }
    if ( (p_Blink & 0x800) != 0 )
    {
      v29 = MiDeleteLargeUserPde(a1, a2, a3);
      v5 = v29;
      if ( !v27 )
      {
        v28 = v29;
        if ( v29 )
          goto LABEL_83;
      }
      goto LABEL_26;
    }
    if ( v27 && (v13 & 0x3E0) == 0x300 )
    {
      MiDeleteVadAwePtes(a1, a2, a3);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    v5 = MiDecommitHandleTransitionPte(v6, v13);
    if ( v5 )
      goto LABEL_26;
    p_Blink = v35;
  }
  if ( !*(_QWORD *)(v6 + 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList(p_Blink, Process, v9, v3);
    v9 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 16) = ProcessorFlushList;
    Process = ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 1;
    *(_QWORD *)ProcessorFlushList = v9;
    p_Blink = *(_DWORD *)(v9 + 184) >> 8;
    LOBYTE(p_Blink) = (*(_DWORD *)(v9 + 184) & 0x800) != 0;
    *(_BYTE *)(ProcessorFlushList + 24) = p_Blink;
    if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0
      || (p_Blink = (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, v9 == p_Blink) )
    {
      if ( (*(_DWORD *)(v9 + 184) & 0xF) == 0 )
      {
        v21 = 1;
LABEL_46:
        *(_DWORD *)(Process + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(Process + 8) = v21;
        *(_WORD *)(Process + 25) = 0;
        *(_DWORD *)(Process + 28) = 0;
        *(_QWORD *)(Process + 32) = 0LL;
        *(_QWORD *)(Process + 40) = 0LL;
        goto LABEL_9;
      }
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
    }
    v21 = 0;
    goto LABEL_46;
  }
LABEL_9:
  v15 = a3;
  if ( (int)a3 >= 1 )
  {
    if ( ((v13 >> 7) & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiLockNestedPageTable(v10, a2);
      v16 = MI_READ_PTE_LOCK_FREE(a2);
      p_Blink = 0xFFFFFFFFFFLL;
      v17 = 48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v17 + 36) & 0x4000000) != 0 )
        v18 = HIDWORD(*(_QWORD *)v17);
      else
        v18 = *(_QWORD *)(v17 + 16) >> 16;
      v19 = v18 & 0x3FF;
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiUnlockPageTable(v10, a2);
      if ( v19 )
      {
LABEL_5:
        *(_QWORD *)(v6 + 88) += 8LL;
        return 0LL;
      }
      v15 = a3;
LABEL_11:
      if ( v11 && !v15 )
      {
        if ( (v35 & 8) != 0 && (unsigned int)MiDeleteRotateVa(a1, a2, 0LL) )
        {
          v28 = 1;
LABEL_83:
          if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v30 = *(_QWORD *)(v6 + 88);
            *(_DWORD *)(v6 + 112) += v28;
            *(_QWORD *)(v6 + 88) = v30 + 8LL * v5;
            return 0LL;
          }
LABEL_26:
          *(_QWORD *)(v6 + 88) += 8LL * v5;
          return 0LL;
        }
        if ( (v35 & 0x92) == 0x82
          && (*(_DWORD *)(v10 + 184) & 0x1000000) == 0
          && (unsigned int)MiVmAccessLoggingEnabled(v10) )
        {
          MI_WSLE_LOG_ACCESS(v10, a2, v9, v3);
        }
      }
LABEL_16:
      if ( (*(_DWORD *)(v6 + 156) & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(v6, v13);
        goto LABEL_24;
      }
      if ( *(_QWORD *)(v6 + 16) )
      {
LABEL_18:
        if ( ((v13 & 0x80u) == 0LL || !*(_DWORD *)(v6 + 96)) && (*(_QWORD *)(v6 + 192) == 1LL || *(_DWORD *)(v6 + 96)) )
        {
          LOBYTE(v8) = *(_DWORD *)(v6 + 96) != 0;
          ++v8;
        }
        if ( *(_DWORD *)(v6 + 136) )
        {
          if ( v8 == 2 )
            goto LABEL_23;
          v33 = *(_QWORD *)(v6 + 208);
          if ( !v33 )
          {
            v33 = *(_QWORD *)(v6 + 88);
            *(_QWORD *)(v6 + 208) = v33;
          }
          Process = (*(_QWORD *)(v6 + 88) + 8LL * *(_QWORD *)(v6 + 192) - v33) >> 3;
          *(_QWORD *)(v6 + 216) = Process;
        }
        if ( v8 )
        {
LABEL_23:
          MiDecommitAddToList(v6, *(_QWORD *)(v6 + 56));
          goto LABEL_24;
        }
        MiDecommitLargePte(v6, Process);
LABEL_24:
        if ( v15 )
          v5 = 1;
        else
          v5 = *(_DWORD *)(v6 + 192);
        goto LABEL_26;
      }
      v24 = MiGetProcessorFlushList(p_Blink, Process, v9, v3);
      v25 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 16) = v24;
      Process = v24;
      *(_DWORD *)(v24 + 16) = 0;
      *(_DWORD *)(v24 + 20) = 1;
      *(_QWORD *)v24 = v25;
      *(_BYTE *)(v24 + 24) = (*(_DWORD *)(v25 + 184) & 0x800) != 0;
      if ( (*(_DWORD *)(v25 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v25 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        if ( (*(_DWORD *)(v25 + 184) & 0xF) == 0 )
        {
          v26 = 1;
LABEL_63:
          *(_DWORD *)(Process + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(Process + 8) = v26;
          *(_WORD *)(Process + 25) = 0;
          *(_DWORD *)(Process + 28) = 0;
          *(_QWORD *)(Process + 32) = 0LL;
          *(_QWORD *)(Process + 40) = 0LL;
          goto LABEL_18;
        }
      }
      else
      {
        *(_DWORD *)(v24 + 16) |= 9u;
      }
      v26 = 0;
      goto LABEL_63;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 160) & 0x810) == 0 )
      goto LABEL_11;
    if ( !v11 )
      goto LABEL_16;
  }
  v32 = MiDeleteLargeUserPde(a1, a2, a3);
  if ( (v35 & 0x10) == 0 )
    *(_DWORD *)(v6 + 112) += v32;
  *(_QWORD *)(v6 + 88) += 8LL * v32;
  return 0LL;
}
