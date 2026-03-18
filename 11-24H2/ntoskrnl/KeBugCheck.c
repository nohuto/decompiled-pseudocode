/*
 * XREFs of KeBugCheck @ 0x1404FB970
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     MiDetachFromWorkingSet @ 0x140379390 (MiDetachFromWorkingSet.c)
 *     PspSystemThreadStartup @ 0x140487060 (PspSystemThreadStartup.c)
 *     EtwpFreeApcPool @ 0x14049A610 (EtwpFreeApcPool.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     KiLockServiceTable @ 0x1406953D8 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x1406ABDC0 (KxStartSystemThread.c)
 *     EtwCleanupSiloState @ 0x1407A62BC (EtwCleanupSiloState.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D4D18 (CmpAddProcessorConfigurationEntry.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140AD1250 (PspThreadDelete.c)
 *     KeWriteProtectProcessorState @ 0x140B56770 (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140B59730 (KiSetCacheInformation.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     BvgaSaveResources @ 0x140C1A438 (BvgaSaveResources.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 *     PspInitPhase1 @ 0x140C34EC0 (PspInitPhase1.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 *     KiFatalExceptionFilter @ 0x140C5C688 (KiFatalExceptionFilter.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 *     VslRegisterBootDrivers @ 0x140C6397C (VslRegisterBootDrivers.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
