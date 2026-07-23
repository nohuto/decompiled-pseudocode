/*
 * XREFs of KeInitializeTimer2 @ 0x1403ADE80
 * Callers:
 *     PopInitializeTimer @ 0x1407476B8 (PopInitializeTimer.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14074A960 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x140752BE0 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C066C (ExpWorkQueueManagerInitialize.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140A16910 (NtCreateTimer2.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
