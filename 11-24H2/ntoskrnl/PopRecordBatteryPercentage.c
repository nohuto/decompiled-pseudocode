/*
 * XREFs of PopRecordBatteryPercentage @ 0x140AADE44
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordBatteryPercentage(char a1)
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = a1 & 0x7F | HIBYTE(PopBsdPowerTransition) & 0x80;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
