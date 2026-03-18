/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x14000F6E0
 * Callers:
 *     VidSchiCompleteSignalCommmand @ 0x14000DCD0 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028748 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140029FAC (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14002C91C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140031EF0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003B460 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x140048284 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchDestroySyncObject @ 0x1400BAF10 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x14010207C (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     VidMmFreeFenceStorageSlot @ 0x14001CEF0 (VidMmFreeFenceStorageSlot.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiReleaseSyncObjectReference(char *P, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  KSPIN_LOCK *v5; // rcx
  __int64 v6; // rdx
  char **v7; // rcx
  char *v8; // rsi
  void *v9; // rcx
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // rcx
  char **v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+38h] [rbp-20h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 )
  {
    v3 = *((_DWORD *)P + 12);
    if ( v3 != 5 )
    {
      v4 = v3 - 3;
      if ( !v4 )
      {
        if ( P[32] )
        {
          if ( P[33] )
          {
            LOBYTE(a2) = 1;
            ((void (__fastcall *)(_QWORD, __int64))DxgCoreInterface[72])(*((_QWORD *)P + 9), a2);
          }
          ((void (__fastcall *)(_QWORD))DxgCoreInterface[94])(*((_QWORD *)P + 9));
          *((_QWORD *)P + 9) = 0LL;
        }
        else
        {
          ObfDereferenceObject(*((PVOID *)P + 8));
          *((_QWORD *)P + 8) = 0LL;
        }
LABEL_5:
        if ( !P[28] )
        {
LABEL_6:
          ExFreePoolWithTag(P, 0);
          return;
        }
        v5 = (KSPIN_LOCK *)(*((_QWORD *)P + 1) + 3416LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
        v6 = *((_QWORD *)P + 36);
        if ( *(char **)(v6 + 8) == P + 288 )
        {
          v7 = (char **)*((_QWORD *)P + 37);
          if ( *v7 == P + 288 )
          {
            *v7 = (char *)v6;
            *(_QWORD *)(v6 + 8) = v7;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v8 = P + 240;
            if ( !*((_QWORD *)P + 30) )
              goto LABEL_15;
            v10 = (KSPIN_LOCK *)(*((_QWORD *)P + 38) + 8LL);
            memset(&v14, 0, sizeof(v14));
            KeAcquireInStackQueuedSpinLock(v10, &v14);
            v11 = *(_QWORD *)v8;
            if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
            {
              v12 = (char **)*((_QWORD *)P + 31);
              if ( *v12 == v8 )
              {
                *v12 = (char *)v11;
                *(_QWORD *)(v11 + 8) = v12;
                KeReleaseInStackQueuedSpinLock(&v14);
LABEL_15:
                v9 = (void *)*((_QWORD *)P + 38);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
                  ExFreePoolWithTag(v9, 0);
                goto LABEL_6;
              }
            }
          }
        }
        __fastfail(3u);
      }
      if ( v4 != 1 )
        goto LABEL_5;
    }
    if ( !*((_QWORD *)P + 2) )
      VidMmFreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(P + 64));
    goto LABEL_5;
  }
}
