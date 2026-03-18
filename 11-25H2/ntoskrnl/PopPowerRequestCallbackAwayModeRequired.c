/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140A90A90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x140B5D144 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140B5D474 (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140F0B710 = a3;
  return PopReleaseAwaymodeLock();
}
