/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x14074D860
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140A3D5E8 (PopPowerAggregatorScheduleWorker.c)
 *     PdcTaskClientRequest @ 0x140A86C44 (PdcTaskClientRequest.c)
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
  if ( byte_140F082D9 )
  {
    unk_140F082D8 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
  }
  else
  {
    byte_140F082D9 = 1;
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
    return KeSetTimer2((__int64)&unk_140F08300, (LARGE_INTEGER)-50000000LL, 0LL, (__int64)v4);
  }
  return result;
}
