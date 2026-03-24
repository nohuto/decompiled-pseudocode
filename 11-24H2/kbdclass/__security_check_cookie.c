/*
 * XREFs of __security_check_cookie @ 0x1C0007290
 * Callers:
 *     KeyboardStart @ 0x1C0001F70 (KeyboardStart.c)
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0005A40 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     __GSHandlerCheckCommon @ 0x1C000714C (__GSHandlerCheckCommon.c)
 *     KeyboardClassFindMorePorts @ 0x1C000E010 (KeyboardClassFindMorePorts.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C000EA78 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KbdCreateClassObject @ 0x1C000FD50 (KbdCreateClassObject.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C00102E0 (KeyboardClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C00119A0 (KbdConfiguration.c)
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
