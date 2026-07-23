/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x140758100
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409A0BFC (PopPowerAggregatorScheduleWorker.c)
 *     PdcTaskClientRequest @ 0x140A87D84 (PdcTaskClientRequest.c)
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( byte_140F08CB9 )
  {
    unk_140F08CB8 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  }
  else
  {
    byte_140F08CB9 = 1;
    v1 = 1;
  }
  result = PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( v0 )
    return PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 0LL);
  if ( v1 )
  {
    LOBYTE(v3) = 1;
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, v3);
    v4[0] = 0LL;
    v4[1] = -1LL;
    return KeSetTimer2((__int64)&unk_140F08CE0, (LARGE_INTEGER)-50000000LL, 0LL, (__int64)v4);
  }
  return result;
}
