/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1403B4C70
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     MiSetIdealProcessorThread @ 0x1403B4508 (MiSetIdealProcessorThread.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x140552024 (HalpIommuConfigureInterrupt.c)
 *     KiGetNextClockOwner @ 0x1405BA1EC (KiGetNextClockOwner.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1406936F4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140693B04 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     MiInitializeZeroingDomains @ 0x1407FF580 (MiInitializeZeroingDomains.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C584A0 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140C58810 (MiFindProcessorsForMemoryOnlyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return *((unsigned int *)qword_140F21E78 + 64 * *(unsigned __int16 *)(a1 + 8) + (int)v2);
}
