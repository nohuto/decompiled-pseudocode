/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x14075E0A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A24C58 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0LL);
  byte_140F07662 = a3 != 0;
  return PopReleaseAdaptiveLock();
}
