/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140AB3EFC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopEsSnapTelemetry @ 0x1406EC300 (PopEsSnapTelemetry.c)
 */

__int64 PopEsEnterSleepShutdown()
{
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
  v1[0] = xmmword_140F0ACC0;
  v1[1] = xmmword_140F0ACD0;
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsSnapTelemetry((__int64)v1);
  PopEsLastStateChangeTimeStamp = 0LL;
  return PopReleaseRwLock(&PopEsLock);
}
