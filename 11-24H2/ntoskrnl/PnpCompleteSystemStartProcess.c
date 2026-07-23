/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1405A2DCC
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x1402F0A44 (PnpDiagnosticTrace.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1407178A8 (PiInitReleaseCachedGroupInformation.c)
 *     PpReleaseBootDDB @ 0x140722A54 (PpReleaseBootDDB.c)
 *     KseShimDatabaseBootRelease @ 0x140942130 (KseShimDatabaseBootRelease.c)
 *     EtwWriteEndScenario @ 0x140A3D500 (EtwWriteEndScenario.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A706F4 (IopCallDriverReinitializationRoutines.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
