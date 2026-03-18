/*
 * XREFs of Feature_UBCWF1__private_IsEnabledDeviceUsageNoInline @ 0x14004E720
 * Callers:
 *     UsbhAddDevice @ 0x14004EA90 (UsbhAddDevice.c)
 * Callees:
 *     Feature_UBCWF1__private_IsEnabledFallback @ 0x14004E758 (Feature_UBCWF1__private_IsEnabledFallback.c)
 */

__int64 Feature_UBCWF1__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.Dpc.SystemArgument2 & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 & 1;
  else
    return Feature_UBCWF1__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2), 3LL);
}
