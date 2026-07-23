/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140AB2788
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopEsSnapTelemetry @ 0x14075C668 (PopEsSnapTelemetry.c)
 */

__int64 PopEsEnterSleepShutdown()
{
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
  v1[0] = xmmword_140F0BEA0;
  v1[1] = xmmword_140F0BEB0;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsSnapTelemetry((__int64)v1);
  PopEsLastStateChangeTimeStamp = 0LL;
  return PopReleaseRwLock(&PopEsLock);
}
