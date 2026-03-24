/*
 * XREFs of __security_check_cookie @ 0x1C0006AE0
 * Callers:
 *     MouseStart @ 0x1C00034B0 (MouseStart.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0005770 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     __GSHandlerCheckCommon @ 0x1C000699C (__GSHandlerCheckCommon.c)
 *     MouseClassFindMorePorts @ 0x1C000E190 (MouseClassFindMorePorts.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C000E690 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     MouCreateClassObject @ 0x1C000F950 (MouCreateClassObject.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C0010360 (MouseClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
