/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x140902F78
 * Callers:
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140902C54 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x140769F24 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x14076DC00 (TtmiLogSessionCsExitComplete.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 */

void __fastcall TtmNotifyLowPowerStateExited(unsigned int a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v1 = TtmpAcquireSessionById(&v3, a1);
  if ( v1 >= 0 )
  {
    TtmiLogSessionCsExitComplete();
    v2 = v3;
    *(_DWORD *)(v3 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v2, 4);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited", 3122LL, (unsigned int)v1, (unsigned int)v1);
  }
}
