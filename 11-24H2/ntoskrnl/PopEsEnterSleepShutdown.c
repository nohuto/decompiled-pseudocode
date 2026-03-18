/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140AB82C4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEsSnapTelemetry @ 0x14075D6C8 (PopEsSnapTelemetry.c)
 */

__int64 PopEsEnterSleepShutdown()
{
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0B050);
  v1[0] = xmmword_140F0B060;
  v1[1] = xmmword_140F0B070;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0B050);
  PopAcquireRwLockExclusive(&PopEsLock);
  PopEsSnapTelemetry((__int64)v1);
  PopEsLastStateChangeTimeStamp = 0LL;
  return PopReleaseRwLock((signed __int64 *)&PopEsLock);
}
