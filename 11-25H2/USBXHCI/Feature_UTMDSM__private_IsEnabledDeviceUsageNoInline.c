/*
 * XREFs of Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline @ 0x14004DEE0
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x14003B5F0 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x14003B9C0 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_UpdateUsbDevice @ 0x14003BBF8 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     Feature_UTMDSM__private_IsEnabledFallback @ 0x14004DF18 (Feature_UTMDSM__private_IsEnabledFallback.c)
 */

__int64 Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink & 1;
  else
    return Feature_UTMDSM__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink), 3LL);
}
