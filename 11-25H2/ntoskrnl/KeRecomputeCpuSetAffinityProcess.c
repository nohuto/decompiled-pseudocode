/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x1405BBD78
 * Callers:
 *     PspAssignCpuPartitionsToProcess @ 0x140766F94 (PspAssignCpuPartitionsToProcess.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14026B2B4 (KiAcquireProcessLockExclusive.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405BC360 (KiUpdateThreadCpuSetAffinitiesProcess.c)
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
