/*
 * XREFs of KeBugCheck @ 0x1404F9230
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiDetachFromWorkingSet @ 0x1403E1C30 (MiDetachFromWorkingSet.c)
 *     PspSystemThreadStartup @ 0x1404820D0 (PspSystemThreadStartup.c)
 *     EtwpFreeApcPool @ 0x140495034 (EtwpFreeApcPool.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x1406ACD60 (KxStartSystemThread.c)
 *     EtwCleanupSiloState @ 0x1407A63FC (EtwCleanupSiloState.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D5208 (CmpAddProcessorConfigurationEntry.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 *     KeWriteProtectProcessorState @ 0x140B587C0 (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140B5B7B0 (KiSetCacheInformation.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     BvgaSaveResources @ 0x140C1C478 (BvgaSaveResources.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 *     PspInitPhase1 @ 0x140C37000 (PspInitPhase1.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 *     KiFatalExceptionFilter @ 0x140C5E818 (KiFatalExceptionFilter.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
