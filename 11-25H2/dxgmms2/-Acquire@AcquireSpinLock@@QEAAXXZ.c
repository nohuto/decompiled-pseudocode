/*
 * XREFs of ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140027BAC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
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
 *     VidSchiCleanupDeferredWaiterContext @ 0x14002E16C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchExitIndependentFlip @ 0x14002E990 (VidSchExitIndependentFlip.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x14002EFEC (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchConfirmToken @ 0x14002F410 (VidSchConfirmToken.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x14002F548 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x14003B290 (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003D350 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003D658 (VidSchTimeoutSyncObject.c)
 *     VidSchSetMonitorPowerState @ 0x140041A20 (VidSchSetMonitorPowerState.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x1400469A0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004A6A4 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x14004B75C (VidSchiProcessGpuEngineTimeoutDpc.c)
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
