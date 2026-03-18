/*
 * XREFs of MiDeleteVa @ 0x1402DB780
 * Callers:
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiDecommitHandleTransitionPte @ 0x140286C5C (MiDecommitHandleTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140286EA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140289270 (MiDecommitHandlePageFileFormatPte.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140289580 (MiDecommitHandleProtoFormatPte.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiIsLazyStampedPte @ 0x1403114C0 (MiIsLazyStampedPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiDeleteRotateVa @ 0x1403CDA5C (MiDeleteRotateVa.c)
 *     MiDeleteLargeUserPde @ 0x1404B9CA4 (MiDeleteLargeUserPde.c)
 *     MiDeleteVadAwePtes @ 0x1404B9E8C (MiDeleteVadAwePtes.c)
 *     MiDecommitLargePte @ 0x1404C7F24 (MiDecommitLargePte.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404FA094 (MiDecommitAddTbFlushEntries.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v5; // r12d
  __int64 v6; // rdi
  int v7; // r14d
  int v8; // ebp
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  __int64 *ProcessorFlushList; // rax
  __int64 v22; // r8
  __int64 *v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // r14
  __int64 v26; // r14
  int v27; // r14d
  int v28; // r14d
  int v29; // r14d
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r8
  __int16 v36; // [rsp+80h] [rbp+18h]
  __int64 v37; // [rsp+88h] [rbp+20h]

  v5 = 1;
  v6 = **(_QWORD **)(a1 + 184);
  v7 = *(_DWORD *)(v6 + 160);
  v36 = v7;
  *(_QWORD *)(v6 + 72) = a2;
  *(_QWORD *)(v6 + 88) = a2;
  v8 = 0;
  *(_DWORD *)(v6 + 96) = a3;
  *(_QWORD *)(v6 + 56) = (__int64)(a2 << 25) >> 16;
  v37 = *(_QWORD *)(a1 + 32);
  v9 = v37 - 1024;
  if ( (*(_DWORD *)(v37 + 184) & 0xF) != 0 )
    v9 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v11 = *(_QWORD *)a2;
      if ( (v10 & 1) != 0 && ((v10 & 0x42) == 0 || (v10 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v15 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v11 = v10 | 0x20;
            v10 = v11 | 0x42;
            if ( (v15 & 0x42) == 0 )
              v10 = v11;
          }
        }
      }
    }
    if ( !v10 )
      goto LABEL_8;
    if ( (v10 & 1) != 0 )
      break;
    if ( (v10 & 0x400) != 0 )
    {
      MiDecommitHandleProtoFormatPte(v6, v10);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    v28 = v7 & 0x10;
    if ( v28 && (unsigned int)MiIsLazyStampedPte(v10) )
    {
      v32 = MiDeleteVadAwePtes(a1, a2, a3);
      MiDecommitAddTbFlushEntries(v6, a2, a3, v32);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    if ( (v10 & 0x800) == 0 )
    {
      *(_QWORD *)(v6 + 88) += 8LL * (unsigned int)MiDecommitHandlePageFileFormatPte(v6, v10);
      return 0LL;
    }
    if ( (v36 & 0x800) != 0 )
    {
      v30 = MiDeleteLargeUserPde(a1, a2, a3);
      v5 = v30;
      if ( !v28 )
      {
        v29 = v30;
        if ( v30 )
          goto LABEL_83;
      }
      goto LABEL_29;
    }
    if ( v28 && (v10 & 0x3E0) == 0x300 )
    {
      MiDeleteVadAwePtes(a1, a2, a3);
      *(_QWORD *)(v6 + 88) += 8LL * v5;
      return 0LL;
    }
    v5 = MiDecommitHandleTransitionPte(v6, v10);
    if ( v5 )
      goto LABEL_29;
    LOBYTE(v7) = v36;
  }
  if ( !*(_QWORD *)(v6 + 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    v22 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 16) = ProcessorFlushList;
    v23 = ProcessorFlushList;
    *((_DWORD *)ProcessorFlushList + 4) = 0;
    *((_DWORD *)ProcessorFlushList + 5) = 1;
    *ProcessorFlushList = v22;
    *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v22 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(v22 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v22 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      if ( (*(_DWORD *)(v22 + 184) & 0xF) == 0 )
      {
        v24 = 1;
LABEL_53:
        *((_DWORD *)v23 + 4) &= 0xFFFFFFDB;
        *((_DWORD *)v23 + 2) = v24;
        *(_WORD *)((char *)v23 + 25) = 0;
        *((_DWORD *)v23 + 7) = 0;
        v23[4] = 0LL;
        v23[5] = 0LL;
        goto LABEL_12;
      }
    }
    else
    {
      *((_DWORD *)ProcessorFlushList + 4) |= 9u;
    }
    v24 = 0;
    goto LABEL_53;
  }
LABEL_12:
  if ( (int)a3 >= 1 )
  {
    if ( ((v10 >> 7) & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiLockNestedPageTable(v37, a2);
      v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v25 + 36) & 0x4000000) != 0 )
        v26 = HIDWORD(*(_QWORD *)v25);
      else
        v26 = *(_QWORD *)(v25 + 16) >> 16;
      v27 = v26 & 0x3FF;
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiUnlockPageTableInternal(v37, a2);
      if ( v27 )
      {
LABEL_8:
        *(_QWORD *)(v6 + 88) += 8LL;
        return 0LL;
      }
      LOBYTE(v7) = v36;
LABEL_14:
      if ( v9 && !a3 )
      {
        if ( (v7 & 8) != 0 && (unsigned int)MiDeleteRotateVa(a1, a2, 0LL) )
        {
          v29 = 1;
LABEL_83:
          if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v31 = *(_QWORD *)(v6 + 88);
            *(_DWORD *)(v6 + 112) += v29;
            *(_QWORD *)(v6 + 88) = v31 + 8LL * v5;
            return 0LL;
          }
LABEL_29:
          *(_QWORD *)(v6 + 88) += 8LL * v5;
          return 0LL;
        }
        if ( (v7 & 0x92) == 0x82
          && (*(_DWORD *)(v37 + 184) & 0x1000000) == 0
          && (unsigned int)MiVmAccessLoggingEnabled(v37) )
        {
          MI_WSLE_LOG_ACCESS(v20, a2);
        }
      }
LABEL_19:
      if ( (*(_DWORD *)(v6 + 156) & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(v6, v10);
        goto LABEL_27;
      }
      if ( *(_QWORD *)(v6 + 16) )
      {
LABEL_21:
        if ( ((v10 & 0x80u) == 0LL || !*(_DWORD *)(v6 + 96)) && (*(_QWORD *)(v6 + 192) == 1LL || *(_DWORD *)(v6 + 96)) )
        {
          LOBYTE(v8) = *(_DWORD *)(v6 + 96) != 0;
          ++v8;
        }
        if ( *(_DWORD *)(v6 + 136) )
        {
          if ( v8 == 2 )
            goto LABEL_26;
          v34 = *(_QWORD *)(v6 + 208);
          if ( !v34 )
          {
            v34 = *(_QWORD *)(v6 + 88);
            *(_QWORD *)(v6 + 208) = v34;
          }
          *(_QWORD *)(v6 + 216) = (*(_QWORD *)(v6 + 88) + 8LL * *(_QWORD *)(v6 + 192) - v34) >> 3;
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
      v16 = MiGetProcessorFlushList();
      v17 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 16) = v16;
      v18 = v16;
      *((_DWORD *)v16 + 4) = 0;
      *((_DWORD *)v16 + 5) = 1;
      *v16 = v17;
      *((_BYTE *)v16 + 24) = (*(_DWORD *)(v17 + 184) & 0x800) != 0;
      if ( (*(_DWORD *)(v17 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v17 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        if ( (*(_DWORD *)(v17 + 184) & 0xF) == 0 )
        {
          v19 = 1;
LABEL_46:
          *((_DWORD *)v18 + 4) &= 0xFFFFFFDB;
          *((_DWORD *)v18 + 2) = v19;
          *(_WORD *)((char *)v18 + 25) = 0;
          *((_DWORD *)v18 + 7) = 0;
          v18[4] = 0LL;
          v18[5] = 0LL;
          goto LABEL_21;
        }
      }
      else
      {
        *((_DWORD *)v16 + 4) |= 9u;
      }
      v19 = 0;
      goto LABEL_46;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 160) & 0x810) == 0 )
      goto LABEL_14;
    if ( !v9 )
      goto LABEL_19;
  }
  v33 = MiDeleteLargeUserPde(a1, a2, a3);
  if ( (v7 & 0x10) == 0 )
    *(_DWORD *)(v6 + 112) += v33;
  *(_QWORD *)(v6 + 88) += 8LL * v33;
  return 0LL;
}
