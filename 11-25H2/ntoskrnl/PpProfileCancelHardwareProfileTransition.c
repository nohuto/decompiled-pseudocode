/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x140721668
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase2 @ 0x140A6C1C8 (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407148F8 (PnpRequestHwProfileChangeNotification.c)
 */

LONG PpProfileCancelHardwareProfileTransition()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
    {
      _InterlockedDecrement(&PiProfileDevicesInTransition);
      *((_DWORD *)i - 2) = 1;
    }
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( PiProfileChangeCancelRequired )
    PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
  return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
}
