/*
 * XREFs of ObCreateObjectType @ 0x1406F96E0
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x14054E97C (HalpDmaInitializeObjectType.c)
 *     DbgkpInitializePhase0 @ 0x140C180F8 (DbgkpInitializePhase0.c)
 *     IoCreateObjectTypes @ 0x140C1C664 (IoCreateObjectTypes.c)
 *     IopCreateIoRingObjectType @ 0x140C200E4 (IopCreateIoRingObjectType.c)
 *     PopPowerRequestInitialize @ 0x140C2FFAC (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140C34CA0 (PopEtInit.c)
 *     PspInitializeSiloStructures @ 0x140C37AF4 (PspInitializeSiloStructures.c)
 *     SepTokenInitialization @ 0x140C3C9D8 (SepTokenInitialization.c)
 *     WmipInitializeSecurity @ 0x140C3EEC0 (WmipInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140C40338 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140C40B48 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140C40C20 (EtwpInitializeCoverageSampler.c)
 *     ExpInitializeCallbacks @ 0x140C44978 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140C44B6C (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140C44DD8 (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140C44F90 (ExpEventInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140C45394 (ExpSemaphoreInitialization.c)
 *     ExpProfileInitialization @ 0x140C45828 (ExpProfileInitialization.c)
 *     ExpMutantInitialization @ 0x140C45900 (ExpMutantInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140C459EC (ExpKeyedEventInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140C45D44 (ExpWorkerFactoryInitialization.c)
 *     CmpCreateObjectTypes @ 0x140C48DC4 (CmpCreateObjectTypes.c)
 *     MiSectionInitialization @ 0x140C558B4 (MiSectionInitialization.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, void *a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a2, a4);
}
