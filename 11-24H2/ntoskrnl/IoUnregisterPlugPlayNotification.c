/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140A8E890
 * Callers:
 *     ExpPrmTargetDeviceChangeCallback @ 0x1407BF4D0 (ExpPrmTargetDeviceChangeCallback.c)
 *     SmKmFileInfoCleanup @ 0x140AB19B0 (SmKmFileInfoCleanup.c)
 *     SbpWaitForVmbus @ 0x140C5EFF8 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
