/*
 * XREFs of CiAcquireProcessLock @ 0x1C000D6E0
 * Callers:
 *     CiProcessSuspend @ 0x1C00011E0 (CiProcessSuspend.c)
 *     CiThreadReferenceTaskIndex @ 0x1C0003F90 (CiThreadReferenceTaskIndex.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiAcquireProcessLock(__int64 a1)
{
  return CiSystemAcquirePushLock(a1 + 16);
}
