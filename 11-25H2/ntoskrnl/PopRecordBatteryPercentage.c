/*
 * XREFs of PopRecordBatteryPercentage @ 0x140AA8A90
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordBatteryPercentage(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = a1 & 0x7F | HIBYTE(PopBsdPowerTransition) & 0x80;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
