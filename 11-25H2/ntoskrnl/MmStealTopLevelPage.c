/*
 * XREFs of MmStealTopLevelPage @ 0x14040B140
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x14040AF50 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x14040B3D8 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r15
  unsigned int v8; // ebp
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  bool v17; // zf
  ULONG_PTR *BugCheckParameter2; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  MiLockWorkingSetExclusiveAtDpc(&Process[2].ReadyListHead.Blink, a2, a3, a4);
  MiReplacePageTablePage(a1);
  v8 = 0;
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    ++dword_140EF4AA8;
    v10 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 32), 0LL, 0x80000000);
    BugCheckParameter2 = (ULONG_PTR *)(v10
                                     + 8
                                     * (((((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL) >> 3) & 0x1FF));
    v11 = (v9 << 12) ^ ((v9 << 12) ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2)) & 0xFFF0000000000FFFuLL;
    *BugCheckParameter2 = CLFS_LSN_NULL_EXT;
    if ( _bittest64(&MiFlags, 0x24u)
      && (v11 & 0x20) == 0
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v11, 128);
    }
    *BugCheckParameter2 = v11;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    if ( *(_DWORD *)(a1 + 64) )
    {
      v13 = ((Process[2].KernelWaitTime >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = MI_READ_PTE_LOCK_FREE(v13);
      *(_QWORD *)v13 = CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v13 << 25) >> 16, 2, 1);
      v15 = (v9 << 12) ^ (v14 ^ (v9 << 12)) & 0xFFF0000000000FFFuLL;
      if ( _bittest64(&MiFlags, 0x24u) && (v14 & 0x20) == 0 && v13 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v13, (v9 << 12) ^ (v14 ^ (v9 << 12)) & 0xFFF0000000000FFFuLL, 128);
      v16 = v9 << 12;
      v17 = KiFlushPcid == 0;
      *(_QWORD *)v13 = v15;
      if ( !v17 )
        v16 |= 1uLL;
      Process->UserDirectoryTableBase = v16;
    }
    else
    {
      v12 = v9 << 12;
      if ( KiFlushPcid )
        v12 |= 2uLL;
      Process->DirectoryTableBase = v12;
    }
    v8 = 1;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, 0x11u);
  return v8;
}
