/*
 * XREFs of PopRecordDisplayState @ 0x140A1E668
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A1DEFC (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordDisplayState(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  BYTE14(PopBsdPowerTransition) = BYTE14(PopBsdPowerTransition) & 0x3F | ((a1 + 1) << 6);
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
