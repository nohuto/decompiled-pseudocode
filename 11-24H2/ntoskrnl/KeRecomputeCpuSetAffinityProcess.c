/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x1405BFCA8
 * Callers:
 *     PspAssignCpuPartitionsToProcess @ 0x140776964 (PspAssignCpuPartitionsToProcess.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiAcquireProcessLockExclusive @ 0x1403B3B60 (KiAcquireProcessLockExclusive.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405C0290 (KiUpdateThreadCpuSetAffinitiesProcess.c)
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
