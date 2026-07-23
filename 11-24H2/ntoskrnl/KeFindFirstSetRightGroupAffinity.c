/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x140371000
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     MiSetIdealProcessorThread @ 0x140370F20 (MiSetIdealProcessorThread.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpIommuConfigureInterrupt @ 0x14054F964 (HalpIommuConfigureInterrupt.c)
 *     KiGetNextClockOwner @ 0x1405B781C (KiGetNextClockOwner.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1406947C4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140694BD4 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     MiInitializeZeroingDomains @ 0x1407FFCC4 (MiInitializeZeroingDomains.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140C5A9A0 (MiFindProcessorsForMemoryOnlyNode.c)
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
  return *((unsigned int *)qword_140F22998 + 64 * *(unsigned __int16 *)(a1 + 8) + (int)v2);
}
