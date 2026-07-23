/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x14044B450
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusive(unsigned __int64 *a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, (__int64)a1);
}
