/*
 * XREFs of ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140009AFC (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchSubmitWaitFromCpu @ 0x14000DF30 (VidSchSubmitWaitFromCpu.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011A80 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x140011DD0 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x140013940 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x140013B40 (VidSchiSubmitSignalCommand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x14001C74C (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x14001D38C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x14001E89C (VidSchiUpdatePresentParameters.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14001EFE0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x14001F4A0 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x14001F580 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14001F7C4 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     VidSchExitIndependentFlip @ 0x1400214E0 (VidSchExitIndependentFlip.c)
 *     VidSchConfirmToken @ 0x140021CA0 (VidSchConfirmToken.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140031EF0 (VidSchSubmitSignalToHwQueue.c)
 *     ?UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140039290 (-UnwaitCpuWaitersHelper@@YAXPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x140039330 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003B460 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003B768 (VidSchTimeoutSyncObject.c)
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x14003F754 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140044BE0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchSetNodePowerState @ 0x140048AD0 (VidSchSetNodePowerState.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140049DB4 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400112F0 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueues(HwQueueStagingList *this, struct _KLOCK_QUEUE_HANDLE *a2)
{
  __int64 v4; // r9
  char v5; // r8
  int v6; // eax
  __int64 v7; // r10
  _QWORD **v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rax
  char *v13; // r9
  __int64 v14; // rcx
  __int64 **v15; // rdx
  __int64 v16; // rdx
  __int64 **v17; // r8
  HwQueueStagingList *v18; // rbx
  HwQueueStagingList **v19; // rsi
  HwQueueStagingList *v20; // rcx
  HwQueueStagingList **v21; // rax

  if ( *((_DWORD *)this + 7) == 1 )
  {
    v4 = *(_QWORD *)this;
    v5 = 0;
    v6 = *(_DWORD *)(*(_QWORD *)this + 304LL);
    if ( v6 == 1 )
    {
      v7 = *((_QWORD *)this + 1);
      v8 = (_QWORD **)((char *)this + 8);
      if ( (_QWORD **)v7 == v8 )
        goto LABEL_21;
      v9 = v4 + 280;
      v10 = *(_QWORD **)(v4 + 288);
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 280) + 8LL) != v4 + 280 )
        goto LABEL_26;
      if ( *v10 != v9 )
        goto LABEL_26;
      if ( *(_QWORD ***)(v7 + 8) != v8 )
        goto LABEL_26;
      if ( (_QWORD **)*v8[1] != v8 )
        goto LABEL_26;
      *v10 = v8;
      *(_QWORD *)(v4 + 288) = v8[1];
      *v8[1] = v9;
      v8[1] = v10;
      v11 = (__int64)*v8;
      if ( (_QWORD **)(*v8)[1] != v8 || (_QWORD **)*v10 != v8 )
        goto LABEL_26;
      *v10 = v11;
      *(_QWORD *)(v11 + 8) = v10;
      v8[1] = v8;
      *v8 = v8;
      goto LABEL_20;
    }
    if ( v6 == 2 )
    {
      v12 = (__int64 *)*((_QWORD *)this + 1);
      v13 = (char *)this + 8;
      if ( v12 != (__int64 *)((char *)this + 8) )
      {
        do
        {
          v14 = *v12;
          if ( *((_BYTE *)v12 - 30) )
          {
            if ( *(__int64 **)(v14 + 8) != v12 )
              goto LABEL_26;
            v15 = (__int64 **)v12[1];
            if ( *v15 != v12 )
              goto LABEL_26;
            *v15 = (__int64 *)v14;
            *(_QWORD *)(v14 + 8) = v15;
            v16 = *(_QWORD *)this + 280LL;
            v17 = *(__int64 ***)(*(_QWORD *)this + 288LL);
            if ( *v17 != (__int64 *)v16 )
              goto LABEL_26;
            v12[1] = (__int64)v17;
            *v12 = v16;
            *v17 = v12;
            v5 = 1;
            *(_QWORD *)(v16 + 8) = v12;
          }
          v12 = (__int64 *)v14;
        }
        while ( (char *)v14 != v13 );
        if ( v5 )
        {
LABEL_20:
          *(_BYTE *)(*(_QWORD *)this + 296LL) = 0;
          *(_QWORD *)(*(_QWORD *)this + 1480LL) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(*(_QWORD *)this + 1448LL), 0, 0);
        }
      }
    }
  }
LABEL_21:
  v18 = (HwQueueStagingList *)*((_QWORD *)this + 1);
  v19 = (HwQueueStagingList **)((char *)this + 8);
  if ( v18 != (HwQueueStagingList *)((char *)this + 8) )
  {
    while ( 1 )
    {
      HwQueueStagingList::ProcessHwQueue(this, (HwQueueStagingList *)((char *)v18 - 176), a2);
      v20 = *(HwQueueStagingList **)v18;
      if ( *(HwQueueStagingList **)(*(_QWORD *)v18 + 8LL) != v18 )
        break;
      v21 = (HwQueueStagingList **)*((_QWORD *)v18 + 1);
      if ( *v21 != v18 )
        break;
      *v21 = v20;
      *((_QWORD *)v20 + 1) = v21;
      *(_QWORD *)v18 = 0LL;
      *((_QWORD *)v18 + 1) = 0LL;
      v18 = *v19;
      if ( *v19 == (HwQueueStagingList *)v19 )
        goto LABEL_25;
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_25:
  *((_BYTE *)this + 24) = 1;
}
