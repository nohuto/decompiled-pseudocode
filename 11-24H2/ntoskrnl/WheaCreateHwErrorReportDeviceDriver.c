/*
 * XREFs of WheaCreateHwErrorReportDeviceDriver @ 0x14065C0E0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x14065C3D0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14065C4F0 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapInitErrorReportDeviceDriver @ 0x14065C848 (WheapInitErrorReportDeviceDriver.c)
 */

__int64 __fastcall WheaCreateHwErrorReportDeviceDriver(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( (int)WheapInitErrorReportDeviceDriver(a1, &v3) >= 0 )
    return v3;
  return v1;
}
