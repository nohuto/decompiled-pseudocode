/*
 * XREFs of KeBugCheck @ 0x1404F9260
 * Callers:
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140347C90 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     PspSystemThreadStartup @ 0x140487BD0 (PspSystemThreadStartup.c)
 *     EtwpFreeApcPool @ 0x14049A350 (EtwpFreeApcPool.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     KiLockServiceTable @ 0x140689F88 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x1406A0AF0 (KxStartSystemThread.c)
 *     EtwCleanupSiloState @ 0x140796EEC (EtwCleanupSiloState.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407C55D4 (CmpAddProcessorConfigurationEntry.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 *     KeWriteProtectProcessorState @ 0x140B467CC (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140B4970C (KiSetCacheInformation.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     BvgaSaveResources @ 0x140C09398 (BvgaSaveResources.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 *     PspInitPhase1 @ 0x140C23BF4 (PspInitPhase1.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     KiFatalExceptionFilter @ 0x140C4B308 (KiFatalExceptionFilter.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 *     VslRegisterBootDrivers @ 0x140C52668 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
