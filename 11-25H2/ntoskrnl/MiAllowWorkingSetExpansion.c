/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x14048E998
 * Callers:
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140A47A3C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14027FC50 (MiReturnWsToExpansionList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&dword_140E37180);
  MiReturnWsToExpansionList(a1, 0);
  return MiReleaseSpinLockExclusive(&dword_140E37180, v2);
}
