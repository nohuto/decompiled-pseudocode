/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x14065C110
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x14065C3D0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14065C4F0 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x14065C6FC (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x14065C718 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
