/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x1402F2680
 * Callers:
 *     MiInitializeSystemWorkingSetList @ 0x1407EAE14 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnWsToExpansionList @ 0x1402F26D0 (MiReturnWsToExpansionList.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&SpinLock);
  MiReturnWsToExpansionList(a1, 0LL);
  return MiReleaseSpinLockExclusive(&SpinLock, v2);
}
