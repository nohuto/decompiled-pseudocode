/*
 * XREFs of MmStealTopLevelPage @ 0x1403F4960
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1403F4770 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x14020BEF8 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 */

__int64 __fastcall MmStealTopLevelPage(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r15
  unsigned int v5; // ebp
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  bool v14; // zf
  ULONG_PTR *BugCheckParameter2; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  MiLockWorkingSetExclusiveAtDpc((__int64)&Process[2].ReadyListHead.Blink);
  MiReplacePageTablePage(a1);
  v5 = 0;
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    ++dword_140EF4FA8;
    v7 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 32), 0LL, 0x80000000);
    BugCheckParameter2 = (ULONG_PTR *)(v7
                                     + 8
                                     * (((((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL) >> 3) & 0x1FF));
    v8 = (v6 << 12) ^ ((v6 << 12) ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2)) & 0xFFF0000000000FFFuLL;
    *BugCheckParameter2 = CLFS_LSN_NULL_EXT;
    if ( _bittest64(&MiFlags, 0x24u)
      && (v8 & 0x20) == 0
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v8, 128LL);
    }
    *BugCheckParameter2 = v8;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    if ( *(_DWORD *)(a1 + 64) )
    {
      v10 = ((Process[2].KernelWaitTime >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = MI_READ_PTE_LOCK_FREE(v10);
      *(_QWORD *)v10 = CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v10 << 25) >> 16, 2, 1);
      v12 = (v6 << 12) ^ (v11 ^ (v6 << 12)) & 0xFFF0000000000FFFuLL;
      if ( _bittest64(&MiFlags, 0x24u) && (v11 & 0x20) == 0 && v10 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v10, (v6 << 12) ^ (v11 ^ (v6 << 12)) & 0xFFF0000000000FFFuLL, 128LL);
      v13 = v6 << 12;
      v14 = KiFlushPcid == 0;
      *(_QWORD *)v10 = v12;
      if ( !v14 )
        v13 |= 1uLL;
      Process->UserDirectoryTableBase = v13;
    }
    else
    {
      v9 = v6 << 12;
      if ( KiFlushPcid )
        v9 |= 2uLL;
      Process->DirectoryTableBase = v9;
    }
    v5 = 1;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, 0x11u);
  return v5;
}
