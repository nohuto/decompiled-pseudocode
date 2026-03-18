/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x140377510
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     MiSetIdealProcessorThread @ 0x140377430 (MiSetIdealProcessorThread.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x14054F724 (HalpIommuConfigureInterrupt.c)
 *     KiGetNextClockOwner @ 0x1405B63C8 (KiGetNextClockOwner.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x140688294 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x1406886A4 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     MiInitializeZeroingDomains @ 0x1407EF6CC (MiInitializeZeroingDomains.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C471C0 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140C47530 (MiFindProcessorsForMemoryOnlyNode.c)
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
  return *((unsigned int *)qword_140F216A8 + 64 * *(unsigned __int16 *)(a1 + 8) + (int)v2);
}
