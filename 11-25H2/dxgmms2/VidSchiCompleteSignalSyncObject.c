/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x14001AD20
 * Callers:
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x14000FF50 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x140019130 (VidSchiCompleteSignalCommmand.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14001B090 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140030520 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x140030434 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003DA1C (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400476A8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x1400478D4 (VidSchiUpdateNativeFenceCurrentValue.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(
        HwQueueStagingList *this,
        __int64 a2,
        char a3,
        unsigned __int64 *a4,
        char a5)
{
  __int64 v5; // rbp
  int v7; // edx
  unsigned int *v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  _DWORD *v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 *v21; // rdi
  _QWORD *v22; // r15
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 == 6 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a2 + 29) )
    {
      v11 = *(unsigned int **)(a2 + 72);
      if ( v7 == 6 )
      {
        v12 = *(_QWORD *)v11;
      }
      else if ( *(_BYTE *)(a2 + 30) )
      {
        v12 = *(_QWORD *)v11;
      }
      else
      {
        v12 = *v11;
      }
      WdLogSingleEntry3(4LL, a2, v12, *a4);
      v13 = *(_DWORD *)(a2 + 48) == 6;
      v14 = *a4;
      WdLogGlobalForLineNumber = 27664;
      if ( v13 )
      {
        if ( a3 || v14 > **(_QWORD **)(a2 + 72) )
        {
          if ( g_NativeFenceDebugTest )
          {
            **(_QWORD **)(a2 + 72) = v14;
          }
          else
          {
            v27 = *(_QWORD *)(a2 + 160);
            v29 = 0;
            VidSchiUpdateNativeFenceCurrentValue(*(_QWORD *)(a2 + 8), v27, v14, &v29);
          }
        }
      }
      else if ( *(_BYTE *)(a2 + 30) )
      {
        v15 = *(unsigned __int64 **)(a2 + 72);
        if ( a3 || v14 > *v15 )
          *v15 = v14;
      }
      else
      {
        v16 = *(_DWORD **)(a2 + 72);
        if ( a3 || *v16 - (int)v14 < 0 )
          *v16 = v14;
      }
      if ( *(_DWORD *)(a2 + 48) == 6 )
        VidSchiUnwaitNativeFenceWaiters(this, a2, 0LL, 0LL, LockHandle.LockQueue.Next);
      else
        VidSchiUnwaitMonitoredFences(this, v5);
    }
  }
  else
  {
    switch ( v7 )
    {
      case 0:
        *(_QWORD *)(a2 + 64) = 0LL;
        v18 = *(_QWORD *)(a2 + 176);
        if ( v18 != a2 + 176 )
        {
          v19 = v18 - 768;
          v20 = *(_QWORD *)(v19 + 88);
          if ( !v20 )
            v20 = *(_QWORD *)(v19 + 96);
          *(_QWORD *)(a2 + 64) = v20;
          VidSchiUnwaitWaitQueuePacket(this);
        }
        break;
      case 1:
        v17 = *(_DWORD *)(a2 + 64);
        if ( v17 < *(_DWORD *)(a2 + 68) )
        {
          *(_DWORD *)(a2 + 64) = v17 + 1;
          if ( *(_QWORD *)(a2 + 176) != a2 + 176 )
          {
            *(_DWORD *)(a2 + 64) = v17;
            VidSchiUnwaitWaitQueuePacket(this);
          }
        }
        break;
      case 2:
        if ( *(_BYTE *)(a2 + 28) )
        {
          v26 = *(_QWORD *)(a2 + 304);
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v26 + 8), &LockHandle);
          if ( *(_QWORD *)(v26 + 32) < *a4 )
            *(_QWORD *)(v26 + 32) = *a4;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v21 = (unsigned __int64 *)(a2 + 80);
        }
        else
        {
          v21 = (unsigned __int64 *)(a2 + 80);
          if ( *(_QWORD *)(a2 + 80) < *a4 )
            *v21 = *a4;
        }
        if ( *(_DWORD *)(a2 + 40) )
          VidSchiUnblockUnorderedWaiter(this, a2, 0LL);
        v22 = *(_QWORD **)(a2 + 176);
        while ( v22 != (_QWORD *)(a2 + 176) )
        {
          v23 = v22 - 96;
          v22 = (_QWORD *)*v22;
          if ( *(_BYTE *)(a2 + 28) )
            v24 = *(_QWORD *)(*(_QWORD *)(a2 + 304) + 32LL);
          else
            v24 = *v21;
          if ( v23[100] <= v24 )
            VidSchiUnwaitWaitQueuePacket(this);
        }
        break;
      case 3:
        if ( *(_BYTE *)(a2 + 32) )
          ((void (__fastcall *)(_QWORD))DxgCoreInterface[72])(*(_QWORD *)(a2 + 72));
        else
          KeSetEvent(*(PRKEVENT *)(a2 + 64), 0, 0);
        break;
      case 4:
      case 5:
        goto LABEL_2;
      default:
        break;
    }
  }
  if ( *(_BYTE *)(a2 + 28) )
  {
    if ( a5 )
    {
      v25 = *(_DWORD *)(a2 + 48);
      if ( v25 == 2 || (unsigned int)(v25 - 4) <= 2 )
        VidSchiPropagateCrossAdapterSignal(v5, a2);
    }
  }
}
