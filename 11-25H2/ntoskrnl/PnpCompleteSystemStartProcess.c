/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1405A260C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x140463F4C (PnpDiagnosticTrace.c)
 *     PiInitReleaseCachedGroupInformation @ 0x14070DC18 (PiInitReleaseCachedGroupInformation.c)
 *     PpReleaseBootDDB @ 0x140718F48 (PpReleaseBootDDB.c)
 *     EtwWriteEndScenario @ 0x140A42A90 (EtwWriteEndScenario.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A74500 (IopCallDriverReinitializationRoutines.c)
 *     KseShimDatabaseBootRelease @ 0x140AA9AE4 (KseShimDatabaseBootRelease.c)
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
