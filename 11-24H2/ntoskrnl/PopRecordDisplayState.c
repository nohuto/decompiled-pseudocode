/*
 * XREFs of PopRecordDisplayState @ 0x140A27608
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A26E9C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordDisplayState(char a1)
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  BYTE14(PopBsdPowerTransition) = BYTE14(PopBsdPowerTransition) & 0x3F | ((a1 + 1) << 6);
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
