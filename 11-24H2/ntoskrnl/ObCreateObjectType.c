/*
 * XREFs of ObCreateObjectType @ 0x1406FBAA0
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x14055103C (HalpDmaInitializeObjectType.c)
 *     DbgkpInitializePhase0 @ 0x140C160F8 (DbgkpInitializePhase0.c)
 *     IoCreateObjectTypes @ 0x140C1A624 (IoCreateObjectTypes.c)
 *     IopCreateIoRingObjectType @ 0x140C1E0A4 (IopCreateIoRingObjectType.c)
 *     PopPowerRequestInitialize @ 0x140C2DE8C (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140C32B60 (PopEtInit.c)
 *     PspInitializeSiloStructures @ 0x140C359B4 (PspInitializeSiloStructures.c)
 *     SepTokenInitialization @ 0x140C3A880 (SepTokenInitialization.c)
 *     WmipInitializeSecurity @ 0x140C3CD70 (WmipInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140C3E1E8 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140C3E9F8 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140C3EAD0 (EtwpInitializeCoverageSampler.c)
 *     ExpInitializeCallbacks @ 0x140C42828 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140C42A1C (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140C42C88 (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140C42E40 (ExpEventInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140C43244 (ExpSemaphoreInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140C436D8 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x140C438D0 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140C439BC (ExpProfileInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140C43A94 (ExpKeyedEventInitialization.c)
 *     CmpCreateObjectTypes @ 0x140C46C74 (CmpCreateObjectTypes.c)
 *     MiSectionInitialization @ 0x140C53724 (MiSectionInitialization.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, void *a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a2, a4);
}
