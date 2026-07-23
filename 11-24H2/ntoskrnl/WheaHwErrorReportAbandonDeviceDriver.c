/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x14065A830
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x14065AAF0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14065AC10 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x14065AE1C (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x14065AE38 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
