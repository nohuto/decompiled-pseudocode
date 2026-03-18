/*
 * XREFs of ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x140008FCC (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x14001D230 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140027BAC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiClearFlipDevice @ 0x140028164 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1400287EC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x14002A61C (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14002AEC0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14002B2D4 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x14002B380 (VidSchiSuspendResumeHwContext.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x14002B6D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchHasReadyPackets @ 0x14002B810 (VidSchHasReadyPackets.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14002B914 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14002BFA8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14002C1FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x14002E16C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchExitIndependentFlip @ 0x14002E990 (VidSchExitIndependentFlip.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14002EFEC (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchConfirmToken @ 0x14002F410 (VidSchConfirmToken.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x14002F548 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003B290 (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003CAE0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003D350 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003D658 (VidSchTimeoutSyncObject.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003DA1C (VidSchiPropagateCrossAdapterSignal.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140040D24 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140041928 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchSetMonitorPowerState @ 0x140041A20 (VidSchSetMonitorPowerState.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x14004316C (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x1400469A0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048BCC (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     VidSchCancelPresentAtFlips @ 0x140049030 (VidSchCancelPresentAtFlips.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140049CC8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004A6A4 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004B694 (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004B75C (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessAsyncLiveDump @ 0x14004FE90 (VidSchiProcessAsyncLiveDump.c)
 *     VidSchiQueueAsyncLiveDump @ 0x140050348 (VidSchiQueueAsyncLiveDump.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140050B38 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140050EF8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140050FC0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchEscape @ 0x140051360 (VidSchEscape.c)
 *     VidSchInsertNativeFenceUmdHandle @ 0x140051760 (VidSchInsertNativeFenceUmdHandle.c)
 *     VidSchPresentDurationPlane @ 0x1400518B0 (VidSchPresentDurationPlane.c)
 *     VidSchRemoveNativeFenceUmdHandle @ 0x140051C20 (VidSchRemoveNativeFenceUmdHandle.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140051FA0 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 *     VidSchCreateDoorbell @ 0x1400525C0 (VidSchCreateDoorbell.c)
 *     VidSchTerminateDoorbell @ 0x140052820 (VidSchTerminateDoorbell.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x140052888 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiResetHwEngine @ 0x140052D48 (VidSchiResetHwEngine.c)
 *     VidSchiCleanupQueuedCommand @ 0x1400534C0 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140053568 (VidSchiCompleteAllPendingCommand.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x140054774 (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x140054BE4 (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Release(AcquireSpinLock *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
    if ( *((_BYTE *)this + 33) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v2);
      *((_BYTE *)this + 32) = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(v2);
      *((_BYTE *)this + 32) = 0;
    }
  }
}
