/*
 * XREFs of KeInitializeTimer2 @ 0x14036F140
 * Callers:
 *     PopInitializeTimer @ 0x14073D378 (PopInitializeTimer.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140740560 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x1407487F0 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407B0A4C (ExpWorkQueueManagerInitialize.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140A16540 (NtCreateTimer2.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
