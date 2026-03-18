/*
 * XREFs of PnpDiagnosticTrace @ 0x140463F4C
 * Callers:
 *     PnpDiagnosticTraceDeviceOperation @ 0x140463D80 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140463E64 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpCompleteSystemStartProcess @ 0x1405A260C (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1405A3D8C (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140718234 (PiProcessStartSystemDevices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140C0C5F0 (IopCallBootDriverReinitializationRoutines.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
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
