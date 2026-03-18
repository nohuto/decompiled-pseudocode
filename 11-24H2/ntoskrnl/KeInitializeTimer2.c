/*
 * XREFs of KeInitializeTimer2 @ 0x1403BF2C0
 * Callers:
 *     PopInitializeTimer @ 0x140749388 (PopInitializeTimer.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14074C630 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x1407548C0 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C021C (ExpWorkQueueManagerInitialize.c)
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140A20AE0 (NtCreateTimer2.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
