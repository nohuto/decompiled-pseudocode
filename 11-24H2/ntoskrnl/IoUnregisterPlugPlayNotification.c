/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140A8AF00
 * Callers:
 *     ExpPrmTargetDeviceChangeCallback @ 0x1407BF920 (ExpPrmTargetDeviceChangeCallback.c)
 *     SmKmFileInfoCleanup @ 0x140AAC920 (SmKmFileInfoCleanup.c)
 *     SbpWaitForVmbus @ 0x140C61148 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140469950 (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
