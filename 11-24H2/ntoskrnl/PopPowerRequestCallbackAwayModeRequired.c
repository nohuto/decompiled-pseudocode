/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140A91380
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x140B6DAC8 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140B6DDF8 (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140F0B390 = a3;
  return PopReleaseAwaymodeLock();
}
