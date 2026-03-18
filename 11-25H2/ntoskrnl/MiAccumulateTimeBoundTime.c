/*
 * XREFs of MiAccumulateTimeBoundTime @ 0x1404CD478
 * Callers:
 *     MiPerformOnDemandLargePageCoalesce @ 0x140223AC0 (MiPerformOnDemandLargePageCoalesce.c)
 *     MiProcessLargeCoalesceCandidates @ 0x14034F1EC (MiProcessLargeCoalesceCandidates.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14034FFA0 (KeQueryUnbiasedInterruptTimePrecise.c)
 */

bool __fastcall MiAccumulateTimeBoundTime(ULONG64 *a1, int a2)
{
  ULONG64 v4; // r10
  ULONG64 v5; // r9
  bool v6; // cf
  unsigned __int64 QpcTimeStamp; // [rsp+30h] [rbp+8h] BYREF

  v4 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  v5 = v4 + a1[1] - a1[2];
  a1[1] = v5;
  if ( a2 )
    v4 = 0LL;
  v6 = v5 < *a1;
  a1[2] = v4;
  return !v6;
}
