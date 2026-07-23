/*
 * XREFs of PnpDiagnosticTrace @ 0x1402F0A44
 * Callers:
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402F0878 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1402F095C (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpCompleteSystemStartProcess @ 0x1405A2DCC (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1405A458C (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140721EC4 (PiProcessStartSystemDevices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140C1F800 (IopCallBootDriverReinitializationRoutines.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
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
