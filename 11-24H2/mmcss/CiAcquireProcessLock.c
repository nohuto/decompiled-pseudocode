/*
 * XREFs of CiAcquireProcessLock @ 0x14000EC70
 * Callers:
 *     CiProcessSuspend @ 0x1400011E0 (CiProcessSuspend.c)
 *     CiThreadReferenceTaskIndex @ 0x140003F90 (CiThreadReferenceTaskIndex.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F6C0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiAcquireProcessLock(__int64 a1)
{
  return CiSystemAcquirePushLock(a1 + 16);
}
