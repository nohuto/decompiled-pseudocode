/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x140759CB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409BA5AC (PopPowerAggregatorScheduleWorker.c)
 *     PdcTaskClientRequest @ 0x140A8B894 (PdcTaskClientRequest.c)
 */

__int64 PopPowerAggregatorSessionSwitchWorker()
{
  char v0; // di
  char v1; // bl
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v1 = 0;
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  if ( byte_140F08959 )
  {
    unk_140F08958 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  }
  else
  {
    byte_140F08959 = 1;
    v1 = 1;
  }
  result = PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  if ( v0 )
    return PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 0LL);
  if ( v1 )
  {
    LOBYTE(v3) = 1;
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, v3);
    v4[0] = 0LL;
    v4[1] = -1LL;
    return KeSetTimer2((__int64)&unk_140F08980, -50000000LL, 0LL, (__int64)v4);
  }
  return result;
}
