/*
 * XREFs of WheaHwErrorReportSetSeverityDeviceDriver @ 0x14065C270
 * Callers:
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x14065C1C0 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14065C4F0 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x14065C6FC (WheapErrorHandleIsValid.c)
 */

__int64 WheaHwErrorReportSetSeverityDeviceDriver()
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 v3; // rax

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  v3 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 52) = v0;
  *(_DWORD *)(v3 + 20) = v0;
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 20LL) &= ~0x40000000u;
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 20LL) |= 0x80000000;
  return 0LL;
}
