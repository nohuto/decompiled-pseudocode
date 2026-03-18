/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140456480
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusive(unsigned __int64 *a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, (__int64)a1);
}
