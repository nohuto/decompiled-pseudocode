/*
 * XREFs of Controller_GetPreProcessedSystemPowerAction @ 0x1400400E0
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140037740 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140037D50 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x140040F58 (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x1400410B4 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1400828FC (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_GetPreProcessedSystemPowerAction(__int64 a1)
{
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3104))(
         WdfDriverGlobals,
         *(_QWORD *)a1) )
  {
    return *(unsigned int *)(a1 + 820);
  }
  else
  {
    return 7LL;
  }
}
