/*
 * XREFs of MiDeleteVa @ 0x14023D060
 * Callers:
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140296AA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140298E70 (MiDecommitHandlePageFileFormatPte.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140299180 (MiDecommitHandleProtoFormatPte.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiDeleteRotateVa @ 0x14038DD68 (MiDeleteRotateVa.c)
 *     MiIsLazyStampedPte @ 0x1403F4D00 (MiIsLazyStampedPte.c)
 *     MiDeleteLargeUserPde @ 0x1404B4B44 (MiDeleteLargeUserPde.c)
 *     MiDeleteVadAwePtes @ 0x1404B4D2C (MiDeleteVadAwePtes.c)
 *     MiDecommitLargePte @ 0x1404C1658 (MiDecommitLargePte.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7974 (MiDecommitAddTbFlushEntries.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v4; // rsi
  unsigned int v5; // r12d
  __int64 v6; // rdi
  int v7; // r14d
  int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned __int64 CurrentThread; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 ProcessorFlushList; // rax
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r14
  int v24; // r14d
  int v25; // r14d
  int v26; // r14d
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // r8
  __int16 v33; // [rsp+80h] [rbp+18h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v5 = 1;
  v6 = **(_QWORD **)(a1 + 184);
  v7 = *(_DWORD *)(v6 + 160);
  v33 = v7;
  *(_QWORD *)(v6 + 72) = a2;
  *(_QWORD *)(v6 + 88) = a2;
  v8 = 0;
  *(_DWORD *)(v6 + 96) = a3;
  v9 = (__int64)(a2 << 25) >> 16;
  *(_QWORD *)(v6 + 56) = v9;
  v34 = *(_QWORD *)(a1 + 32);
  v10 = v34 - 1024;
  if ( (*(_DWORD *)(v34 + 184) & 0xF) != 0 )
    v10 = 0LL;
  while ( 1 )
  {
    CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
    v12 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v13 = *(_QWORD *)v4;
      if ( (v12 & 1) != 0 )
      {
        LOBYTE(a2) = (v12 & 0x42) != 0;
        LOBYTE(CurrentThread) = (v12 & 0x20) != 0;
        if ( ((unsigned __int8)a2 & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
        {
          CurrentThread = (unsigned __int64)KeGetCurrentThread();
          a2 = *(_QWORD *)(CurrentThread + 184);
          if ( *(_BYTE *)(a2 + 352) != 1 )
          {
            v9 = *(_QWORD *)(a2 + 1288);
            if ( v9 )
            {
              CurrentThread = *(_QWORD *)(v9 + 8 * ((v4 >> 3) & 0x1FF));
              if ( (CurrentThread & 0x20) != 0 )
                v13 = v12 | 0x20;
              v12 = v13 | 0x42;
              if ( (CurrentThread & 0x42) == 0 )
                v12 = v13;
            }
          }
        }
      }
    }
    if ( !v12 )
      goto LABEL_8;
    if ( (v12 & 1) != 0 )
      break;
    if ( (v12 & 0x400) != 0 )
    {
      MiDecommitHandleProtoFormatPte(v6, v12);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    v25 = v7 & 0x10;
    if ( v25 && (unsigned int)MiIsLazyStampedPte(v12) )
    {
      v29 = MiDeleteVadAwePtes(a1, v4, a3);
      MiDecommitAddTbFlushEntries(v6, v4, a3, v29);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    if ( (v12 & 0x800) == 0 )
    {
      *(_QWORD *)(v6 + 88) += 8LL * (unsigned int)MiDecommitHandlePageFileFormatPte(v6, v12);
      return 0LL;
    }
    if ( (v33 & 0x800) != 0 )
    {
      v27 = MiDeleteLargeUserPde(a1, v4, a3);
      v5 = v27;
      if ( !v25 )
      {
        v26 = v27;
        if ( v27 )
          goto LABEL_83;
      }
      goto LABEL_29;
    }
    if ( v25 && (v12 & 0x3E0) == 0x300 )
    {
      MiDeleteVadAwePtes(a1, v4, a3);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    v5 = MiDecommitHandleTransitionPte(v6, v12);
    if ( v5 )
      goto LABEL_29;
    LOBYTE(v7) = v33;
  }
  if ( !*(_QWORD *)(v6 + 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList(CurrentThread, a2, v9);
    v9 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 16) = ProcessorFlushList;
    a2 = ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 1;
    *(_QWORD *)ProcessorFlushList = v9;
    CurrentThread = *(_DWORD *)(v9 + 184) >> 8;
    LOBYTE(CurrentThread) = (*(_DWORD *)(v9 + 184) & 0x800) != 0;
    *(_BYTE *)(ProcessorFlushList + 24) = CurrentThread;
    if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0
      || (CurrentThread = (unsigned __int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
          v9 == CurrentThread) )
    {
      if ( (*(_DWORD *)(v9 + 184) & 0xF) == 0 )
      {
        v20 = 1;
LABEL_53:
        *(_DWORD *)(a2 + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(a2 + 8) = v20;
        *(_WORD *)(a2 + 25) = 0;
        *(_DWORD *)(a2 + 28) = 0;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_QWORD *)(a2 + 40) = 0LL;
        goto LABEL_12;
      }
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
    }
    v20 = 0;
    goto LABEL_53;
  }
LABEL_12:
  if ( (int)a3 >= 1 )
  {
    if ( ((v12 >> 7) & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiLockNestedPageTable(v34, v4);
      v21 = MI_READ_PTE_LOCK_FREE(v4, a2, v9);
      CurrentThread = 0xFFFFFFFFFFLL;
      v22 = 48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v22 + 36) & 0x4000000) != 0 )
        v23 = HIDWORD(*(_QWORD *)v22);
      else
        v23 = *(_QWORD *)(v22 + 16) >> 16;
      v24 = v23 & 0x3FF;
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiUnlockPageTableInternal(v34, v4);
      if ( v24 )
      {
LABEL_8:
        *(_QWORD *)(v6 + 88) += 8LL;
        return 0LL;
      }
      LOBYTE(v7) = v33;
LABEL_14:
      if ( v10 && !a3 )
      {
        if ( (v7 & 8) != 0 && (unsigned int)MiDeleteRotateVa(a1, v4, 0LL) )
        {
          v26 = 1;
LABEL_83:
          if ( v4 < 0xFFFFF6FB7DBED000uLL || v4 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v28 = *(_QWORD *)(v6 + 88);
            *(_DWORD *)(v6 + 112) += v26;
            *(_QWORD *)(v6 + 88) = v28 + 8LL * v5;
            return 0LL;
          }
LABEL_29:
          *(_QWORD *)(v6 + 88) += 8LL * v5;
          return 0LL;
        }
        if ( (v7 & 0x92) == 0x82 )
        {
          v9 = v34;
          if ( (*(_DWORD *)(v34 + 184) & 0x1000000) == 0 )
          {
            if ( (unsigned int)MiVmAccessLoggingEnabled(v34) )
              MI_WSLE_LOG_ACCESS(v9, v4);
          }
        }
      }
LABEL_19:
      if ( (*(_DWORD *)(v6 + 156) & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(v6, v12);
        goto LABEL_27;
      }
      if ( *(_QWORD *)(v6 + 16) )
      {
LABEL_21:
        if ( ((v12 & 0x80u) == 0LL || !*(_DWORD *)(v6 + 96)) && (*(_QWORD *)(v6 + 192) == 1LL || *(_DWORD *)(v6 + 96)) )
        {
          LOBYTE(v8) = *(_DWORD *)(v6 + 96) != 0;
          ++v8;
        }
        if ( *(_DWORD *)(v6 + 136) )
        {
          if ( v8 == 2 )
            goto LABEL_26;
          v31 = *(_QWORD *)(v6 + 208);
          if ( !v31 )
          {
            v31 = *(_QWORD *)(v6 + 88);
            *(_QWORD *)(v6 + 208) = v31;
          }
          *(_QWORD *)(v6 + 216) = (*(_QWORD *)(v6 + 88) + 8LL * *(_QWORD *)(v6 + 192) - v31) >> 3;
        }
        if ( v8 )
        {
LABEL_26:
          MiDecommitAddToList(v6, *(_QWORD *)(v6 + 56));
          goto LABEL_27;
        }
        MiDecommitLargePte(v6);
LABEL_27:
        if ( a3 )
          v5 = 1;
        else
          v5 = *(_DWORD *)(v6 + 192);
        goto LABEL_29;
      }
      v15 = MiGetProcessorFlushList(CurrentThread, a2, v9);
      v16 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 16) = v15;
      v17 = v15;
      *(_DWORD *)(v15 + 16) = 0;
      *(_DWORD *)(v15 + 20) = 1;
      *(_QWORD *)v15 = v16;
      *(_BYTE *)(v15 + 24) = (*(_DWORD *)(v16 + 184) & 0x800) != 0;
      if ( (*(_DWORD *)(v16 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v16 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        if ( (*(_DWORD *)(v16 + 184) & 0xF) == 0 )
        {
          v18 = 1;
LABEL_46:
          *(_DWORD *)(v17 + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(v17 + 8) = v18;
          *(_WORD *)(v17 + 25) = 0;
          *(_DWORD *)(v17 + 28) = 0;
          *(_QWORD *)(v17 + 32) = 0LL;
          *(_QWORD *)(v17 + 40) = 0LL;
          goto LABEL_21;
        }
      }
      else
      {
        *(_DWORD *)(v15 + 16) |= 9u;
      }
      v18 = 0;
      goto LABEL_46;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 160) & 0x810) == 0 )
      goto LABEL_14;
    if ( !v10 )
      goto LABEL_19;
  }
  v30 = MiDeleteLargeUserPde(a1, v4, a3);
  if ( (v7 & 0x10) == 0 )
    *(_DWORD *)(v6 + 112) += v30;
  *(_QWORD *)(v6 + 88) += 8LL * v30;
  return 0LL;
}
