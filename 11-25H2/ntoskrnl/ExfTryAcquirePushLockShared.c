/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x14064A210
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x1403F5B90 (ExfTryAcquirePushLockSharedEx.c)
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  return ExfTryAcquirePushLockSharedEx(a1, 0);
}
