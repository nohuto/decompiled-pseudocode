/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140A94BD0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x140B6C224 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140B6C554 (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140F0BA50 = a3;
  return PopReleaseAwaymodeLock();
}
