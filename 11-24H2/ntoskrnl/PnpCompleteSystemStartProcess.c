/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1405A5EEC
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x14043B7C4 (PnpDiagnosticTrace.c)
 *     PiInitReleaseCachedGroupInformation @ 0x140719D18 (PiInitReleaseCachedGroupInformation.c)
 *     PpReleaseBootDDB @ 0x140724EC4 (PpReleaseBootDDB.c)
 *     KseShimDatabaseBootRelease @ 0x14095A670 (KseShimDatabaseBootRelease.c)
 *     EtwWriteEndScenario @ 0x140A476E0 (EtwWriteEndScenario.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A765D4 (IopCallDriverReinitializationRoutines.c)
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
