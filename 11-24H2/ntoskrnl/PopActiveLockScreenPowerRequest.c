/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x14075F100
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A30168 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0LL);
  byte_140F07342 = a3 != 0;
  return PopReleaseAdaptiveLock();
}
