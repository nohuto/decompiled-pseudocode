/*
 * XREFs of ExfAcquirePushLockShared @ 0x140438000
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall ExfAcquirePushLockShared(signed __int64 *a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0, 0LL, (__int64)a1);
}
