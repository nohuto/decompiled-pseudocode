/*
 * XREFs of MiMarkBootGuardPage @ 0x1406810CC
 * Callers:
 *     MmAllocateIsrStack @ 0x1407F72DC (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140C595E8 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 */

ULONG *__fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  void *v3; // rbp
  __int64 v4; // r9
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // r12
  ULONG *result; // rax
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rdi
  ULONG *v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0;
  v2 = (__int64)(a1 << 25) >> 16;
  v3 = MiVaToFlushVm(v2);
  v5 = MiLockWorkingSetOptimal((__int64)v3, a1, (unsigned __int8 *)&v15, v4);
  v6 = v5;
  if ( (*(_QWORD *)a1 & 1) == 0 )
    return (ULONG *)MiUnlockWorkingSetOptimal((__int64)v3, v5, v15);
  v8 = 48 * ((*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = 48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v10 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  *(_QWORD *)a1 = CLFS_LSN_NULL_EXT;
  MiDecreaseUsedPtes(0xFFFFDE0000000000uLL, v5, 1LL);
  LODWORD(v8) = MiLockAndDecrementShareCount(v8, 1LL, v11, v12);
  MiLockAndDecrementShareCount(v9, 0LL, v13, v14);
  MiUnlockWorkingSetOptimal((__int64)v3, v6, v15);
  MiFlushSingleTbEntry(v2, 2, 1);
  MiReturnResident((__int64)v10, 1uLL);
  if ( (_DWORD)v8 != 3 )
    MiReturnCommit((__int64)v10, 1LL, 0);
  result = &MiSystemPartition;
  if ( v10 == &MiSystemPartition )
  {
    result = (ULONG *)MiGetSystemRegionType(v2);
    if ( (_DWORD)result == 13 )
      _InterlockedDecrement64(&qword_140E37728);
    else
      _InterlockedDecrement64(&qword_140E37718);
  }
  return result;
}
