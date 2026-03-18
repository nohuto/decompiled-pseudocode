/*
 * XREFs of PnpDiagnosticTrace @ 0x14043B7C4
 * Callers:
 *     PnpDiagnosticTraceDeviceOperation @ 0x14043B5F8 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14043B6DC (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpCompleteSystemStartProcess @ 0x1405A5EEC (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1405A759C (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140724334 (PiProcessStartSystemDevices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140C1D7C0 (IopCallBootDriverReinitializationRoutines.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWriteEx(PnpEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  else
    return 0;
}
