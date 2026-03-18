/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140A89870
 * Callers:
 *     ExpPrmTargetDeviceChangeCallback @ 0x1407AFD00 (ExpPrmTargetDeviceChangeCallback.c)
 *     SmKmFileInfoCleanup @ 0x140AAC740 (SmKmFileInfoCleanup.c)
 *     SbpWaitForVmbus @ 0x140C4DC78 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140205238 (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
