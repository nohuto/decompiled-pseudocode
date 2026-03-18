/*
 * XREFs of ExfAcquirePushLockShared @ 0x140441EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockShared(signed __int64 *a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0, 0LL, (unsigned __int64)a1);
}
