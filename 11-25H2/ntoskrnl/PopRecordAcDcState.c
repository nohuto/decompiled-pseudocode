/*
 * XREFs of PopRecordAcDcState @ 0x140A9CA7C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopRecordAcDcState(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  HIBYTE(PopBsdPowerTransition) = (a1 << 7) | HIBYTE(PopBsdPowerTransition) & 0x7F;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock(&PopBsdUpdateLock);
}
