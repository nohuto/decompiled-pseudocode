/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x1405BD2D8
 * Callers:
 *     PspAssignCpuPartitionsToProcess @ 0x140776B84 (PspAssignCpuPartitionsToProcess.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAcquireProcessLockExclusive @ 0x1403A2370 (KiAcquireProcessLockExclusive.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405BD8C0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 */

char __fastcall KeRecomputeCpuSetAffinityProcess(__int64 a1)
{
  unsigned __int8 v3; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0;
  KiAcquireProcessLockExclusive(a1, &v3);
  KiUpdateThreadCpuSetAffinitiesProcess(a1, &v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v4, v3);
}
