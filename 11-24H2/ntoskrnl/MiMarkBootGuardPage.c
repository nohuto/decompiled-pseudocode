/*
 * XREFs of MiMarkBootGuardPage @ 0x14067FECC
 * Callers:
 *     MmAllocateIsrStack @ 0x1407F6B68 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140C57458 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 */

ULONG *__fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  __int64 v2; // rsi
  void *v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  ULONG *result; // rax
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // rdi
  ULONG *v9; // r15
  char v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  v2 = (__int64)(a1 << 25) >> 16;
  v3 = MiVaToFlushVm(v2);
  v4 = MiLockWorkingSetOptimal((__int64)v3, a1, (unsigned __int8 *)&v10);
  v5 = v4;
  if ( (*(_QWORD *)a1 & 1) == 0 )
    return (ULONG *)MiUnlockWorkingSetOptimal((__int64)v3, v4, v10);
  v7 = 48 * ((*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v8 = 48 * (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  *(_QWORD *)a1 = CLFS_LSN_NULL_EXT;
  MiDecreaseUsedPtes(0xFFFFDE0000000000uLL, v4, 1u);
  LODWORD(v7) = MiLockAndDecrementShareCount(v7, 1);
  MiLockAndDecrementShareCount(v8, 0);
  MiUnlockWorkingSetOptimal((__int64)v3, v5, v10);
  MiFlushSingleTbEntry(v2, 2, 1);
  MiReturnResident((__int64)v9, 1uLL);
  if ( (_DWORD)v7 != 3 )
    MiReturnCommit((__int64)v9, 1LL, 0);
  result = &MiSystemPartition;
  if ( v9 == &MiSystemPartition )
  {
    result = (ULONG *)MiGetSystemRegionType(v2);
    if ( (_DWORD)result == 13 )
      _InterlockedDecrement64(&qword_140E375E8);
    else
      _InterlockedDecrement64(&qword_140E375D8);
  }
  return result;
}
