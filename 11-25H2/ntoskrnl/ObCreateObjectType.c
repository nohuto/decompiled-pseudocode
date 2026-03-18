/*
 * XREFs of ObCreateObjectType @ 0x1406EFC30
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x14054E6DC (HalpDmaInitializeObjectType.c)
 *     DbgkpInitializePhase0 @ 0x140C05058 (DbgkpInitializePhase0.c)
 *     IoCreateObjectTypes @ 0x140C09584 (IoCreateObjectTypes.c)
 *     IopCreateIoRingObjectType @ 0x140C0CED4 (IopCreateIoRingObjectType.c)
 *     PopPowerRequestInitialize @ 0x140C1CD8C (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
 *     PspInitializeSiloStructures @ 0x140C246E8 (PspInitializeSiloStructures.c)
 *     SepTokenInitialization @ 0x140C295B0 (SepTokenInitialization.c)
 *     WmipInitializeSecurity @ 0x140C2BA90 (WmipInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140C2CF08 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140C2D71C (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140C2D7F4 (EtwpInitializeCoverageSampler.c)
 *     ExpInitializeCallbacks @ 0x140C31518 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140C31750 (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140C319BC (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140C31B74 (ExpEventInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140C31F78 (ExpSemaphoreInitialization.c)
 *     ExpProfileInitialization @ 0x140C3240C (ExpProfileInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140C324E4 (ExpWorkerFactoryInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140C326DC (ExpKeyedEventInitialization.c)
 *     ExpMutantInitialization @ 0x140C32A34 (ExpMutantInitialization.c)
 *     CmpCreateObjectTypes @ 0x140C359B8 (CmpCreateObjectTypes.c)
 *     MiSectionInitialization @ 0x140C424F4 (MiSectionInitialization.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140A97FF0 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, void *a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a2, a4);
}
