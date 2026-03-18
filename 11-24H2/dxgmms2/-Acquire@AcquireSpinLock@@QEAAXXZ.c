/*
 * XREFs of ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x14001C74C (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x14001D38C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14001DD28 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x14001EEF8 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14001EFE0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001F3F4 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x14001F4A0 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x14001F580 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchHasReadyPackets @ 0x14001F6C0 (VidSchHasReadyPackets.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14001F7C4 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14001F968 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x140020730 (VidSchiSuspendResumeHwContext.c)
 *     VidSchExitIndependentFlip @ 0x1400214E0 (VidSchExitIndependentFlip.c)
 *     VidSchConfirmToken @ 0x140021CA0 (VidSchConfirmToken.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140039290 (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003B460 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003B768 (VidSchTimeoutSyncObject.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x14003E5B0 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     VidSchSetMonitorPowerState @ 0x140040420 (VidSchSetMonitorPowerState.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140044BE0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140049DB4 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004AE6C (VidSchiProcessGpuEngineTimeoutDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Acquire(Acquire *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rdx
  KSPIN_LOCK *v3; // rcx

  v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
  v3 = *(KSPIN_LOCK **)this;
  if ( *((_BYTE *)this + 33) )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v3, v2);
  else
    KeAcquireInStackQueuedSpinLock(v3, v2);
  *((_BYTE *)this + 32) = 1;
}
