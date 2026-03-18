/*
 * XREFs of MiGetNextPageTablePte @ 0x1402B4B60
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiIsPdeOrAboveAccessible @ 0x14040AE10 (MiIsPdeOrAboveAccessible.c)
 *     MiIsLazyStampedPte @ 0x14040AF1C (MiIsLazyStampedPte.c)
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiGetNextPageTablePte(int *a1, unsigned __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 i; // rax
  int v16; // eax
  ULONG_PTR v17; // rbx
  unsigned __int64 j; // rdx
  __int64 result; // rax
  int v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // r14
  unsigned __int64 v27; // rdi
  __int64 v28; // r10
  __int64 v29; // rdx

  v4 = (int)a3;
  v6 = (unsigned __int64)a2;
  if ( (_DWORD)a3 == 3 )
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  else
    v8 = *a2;
  if ( !v8 )
  {
    if ( (_DWORD)v4 || (*a1 & 1) == 0 )
      return 1LL;
    return 2LL;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (int)v4 < 1 )
    {
      if ( (_DWORD)v4 )
        goto LABEL_7;
      return 2LL;
    }
    if ( (unsigned int)MiIsPdeOrAboveAccessible(v6) )
    {
LABEL_7:
      if ( (*a1 & 0x80u) == 0 )
      {
        v9 = *((_QWORD *)a1 + 3);
        if ( v9 )
          MiFlushTbList(v9, a2, a3);
        if ( *((_QWORD *)a1 + 22) )
          guard_dispatch_icall_no_overrides(a1, a2);
        v10 = a1[1];
        if ( (v10 & 0x1C) == 0 && a4 != 3 )
        {
          *((_QWORD *)a1 + 9) = v6;
          v21 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(4 * v4)) & 0x1C;
          LOBYTE(v10) = v10 ^ (v10 ^ (4 * v4)) & 0x1C;
          a1[1] = v21;
        }
        if ( (v10 & 1) != 0 )
          goto LABEL_18;
        v11 = *((_QWORD *)a1 + 7);
        v12 = *((_QWORD *)a1 + 4);
        if ( !v11 )
        {
LABEL_15:
          v13 = *((unsigned __int8 *)a1 + 9);
          if ( (*a1 & 4) != 0 )
            MiUnlockWorkingSetShared(v12, v13);
          else
            MiUnlockWorkingSetExclusive(v12, v13);
          a1[1] |= 1u;
LABEL_18:
          BugCheckParameter4 = (__int64)(v6 << 25) >> 16;
          for ( i = BugCheckParameter4; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
          {
            if ( i > 0xFFFFF6FFFFFFFFFFuLL )
              break;
          }
          v16 = MmAccessFault(2uLL, BugCheckParameter4);
          v17 = v16;
          if ( v16 < 0 )
          {
            for ( j = BugCheckParameter4; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
            {
              if ( j > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
            MiFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v17, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
          }
          return 2LL;
        }
        if ( (*a1 & 0x1000) != 0 )
        {
          if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
          {
LABEL_36:
            *((_QWORD *)a1 + 7) = 0LL;
            goto LABEL_15;
          }
        }
        else if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = *(_DWORD *)(v12 + 184) & 0xF;
          if ( v24 )
          {
            if ( v24 == 7 )
            {
              v25 = 1LL;
            }
            else
            {
              v25 = 3LL;
              if ( v24 == 5 )
                v25 = 0LL;
            }
          }
          else
          {
            v25 = 2LL;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v25]);
          *((_QWORD *)a1 + 7) = 0LL;
          goto LABEL_15;
        }
        if ( (*(_DWORD *)(v12 + 184) & 0xF) == 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v22 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
          if ( v22 )
          {
            ExReleaseSpinLockRegardlessFromDpcLevel(v22 + 4 * ((v11 >> 3) & 0x1FF));
            *((_QWORD *)a1 + 7) = 0LL;
            goto LABEL_15;
          }
        }
        if ( (*(_DWORD *)(v12 + 184) & 0xF) != 0 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState
          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v11 + 0x90482413000LL) >> 3)) >> 5)
          + 2459,
            ~(2 << ((2 * ((__int64)(v11 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                    * ((__int64)(v11 + 0x90482413000LL) >> 3)) & 0x1F)));
          *((_QWORD *)a1 + 7) = 0LL;
          goto LABEL_15;
        }
        _InterlockedAnd64((volatile signed __int64 *)v11, 0xCFFFFFFFFFFFFFFFuLL);
        goto LABEL_36;
      }
      return 1LL;
    }
    if ( (unsigned int)MiIsLazyStampedPte(v28) )
      return 2LL;
    goto LABEL_70;
  }
  if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
    return 1LL;
  if ( (v8 & 0x80u) != 0LL )
  {
LABEL_70:
    if ( (*a1 & 0x40) == 0 )
      return 2LL;
    v29 = *((_QWORD *)a1 + 23);
    for ( *(_DWORD *)v29 = v4; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
      v6 = (__int64)(v6 << 25) >> 16;
    result = 4LL;
    if ( v6 < ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v6 = ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v29 + 8) = v6;
    return result;
  }
  v20 = *a1;
  if ( (*a1 & 0x200) != 0
    && qword_140E37100[0] != (PVOID)qword_140E37118
    && ((v8 >> 12) & 0xFFFFFFFFFFLL) == *((_QWORD *)&MiState + v4 + 5408) )
  {
    return 1LL;
  }
  if ( (int)v4 > (int)(((unsigned int)a1[1] >> 6) & 7) )
    return a4;
  if ( (v20 & 0x40) == 0 )
    return 2LL;
  v26 = *((_QWORD *)a1 + 23);
  if ( (v20 & 4) != 0 )
  {
    MiLockNestedPageTable(*((_QWORD *)a1 + 4), v6);
    MiUnlockPageTable(*((_QWORD *)a1 + 4), ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *((_QWORD *)a1 + 7) = v6;
  }
  v27 = (__int64)(v6 << 25) >> 16;
  result = 4LL;
  if ( v27 < ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    v27 = ((*((_QWORD *)a1 + 5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(v26 + 8) = v27;
  return result;
}
