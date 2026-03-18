/*
 * XREFs of MiMarkBootGuardPage @ 0x1406746AC
 * Callers:
 *     MmAllocateIsrStack @ 0x1407E6CD8 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140C46178 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 */

char __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  struct _LIST_ENTRY **v3; // rbp
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  ULONG *v7; // rax
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rdi
  ULONG *v10; // r15
  unsigned __int8 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0;
  v2 = (__int64)(a1 << 25) >> 16;
  v3 = MiVaToFlushVm(v2);
  v5 = MiLockWorkingSetOptimal((__int64)v3, a1, &v12, v4);
  v6 = v5;
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
    v8 = 48 * ((*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v9 = 48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
    *(_QWORD *)a1 = CLFS_LSN_NULL_EXT;
    MiDecreaseUsedPtes(0xFFFFDE0000000000uLL, v5, 1u);
    LODWORD(v8) = MiLockAndDecrementShareCount(v8, 1);
    MiLockAndDecrementShareCount(v9, 0);
    MiUnlockWorkingSetOptimal((__int64)v3, v6, v12);
    MiFlushSingleTbEntry(v2, 2, 1);
    MiReturnResident((__int64)v10, 1uLL);
    if ( (_DWORD)v8 != 3 )
      MiReturnCommit((__int64)v10, 1LL, 0);
    v7 = &MiSystemPartition;
    if ( v10 == &MiSystemPartition )
    {
      LODWORD(v7) = MiGetSystemRegionType(v2);
      if ( (_DWORD)v7 == 13 )
        _InterlockedDecrement64(&qword_140E373A8);
      else
        _InterlockedDecrement64(&qword_140E37398);
    }
  }
  else
  {
    LOBYTE(v7) = MiUnlockWorkingSetOptimal((__int64)v3, v5, v12);
  }
  return (char)v7;
}
