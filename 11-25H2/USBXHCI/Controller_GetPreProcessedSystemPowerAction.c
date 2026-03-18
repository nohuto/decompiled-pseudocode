/*
 * XREFs of Controller_GetPreProcessedSystemPowerAction @ 0x140040790
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140038940 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x140038BB0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140038F50 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_LogDiagnosticsOnD0Entry @ 0x140041608 (Controller_LogDiagnosticsOnD0Entry.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x140041764 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x140082BD8 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
