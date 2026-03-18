/*
 * XREFs of PopRecordBatteryLevel @ 0x1407496CC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordBatteryLevel(char a1)
{
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  BYTE10(PopBsdPowerTransition) = (a1 << 6) | BYTE10(PopBsdPowerTransition) & 0x3F;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
