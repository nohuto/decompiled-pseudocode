/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1407526E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A22A64 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0LL);
  byte_140F06D42 = a3 != 0;
  return PopReleaseAdaptiveLock();
}
