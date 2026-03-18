/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x1403D93B0
 * Callers:
 *     MiInitializeSystemWorkingSetList @ 0x1407EA844 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE66AC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReturnWsToExpansionList @ 0x1403D9400 (MiReturnWsToExpansionList.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&dword_140E373C0);
  MiReturnWsToExpansionList(a1, 0LL);
  return MiReleaseSpinLockExclusive(&dword_140E373C0, v2);
}
