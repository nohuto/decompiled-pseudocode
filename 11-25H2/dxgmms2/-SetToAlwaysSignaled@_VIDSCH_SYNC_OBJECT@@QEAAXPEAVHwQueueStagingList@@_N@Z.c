/*
 * XREFs of ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003D844
 * Callers:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14002C1FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003D350 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003D658 (VidSchTimeoutSyncObject.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x14003D738 (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     McTemplateK0ppt_EtwWriteTransfer @ 0x14003D994 (McTemplateK0ppt_EtwWriteTransfer.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003DA1C (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x1400478D4 (VidSchiUpdateNativeFenceCurrentValue.c)
 */

void __fastcall _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(
        _VIDSCH_SYNC_OBJECT *this,
        struct HwQueueStagingList *a2,
        char a3)
{
  bool v6; // zf
  _BYTE *v7; // rbx
  volatile signed __int32 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 29) )
  {
    v6 = *((_DWORD *)this + 12) == 6;
    *((_BYTE *)this + 29) = 1;
    if ( v6 )
    {
      if ( g_NativeFenceDebugTest )
      {
        **((_QWORD **)this + 9) = -1LL;
      }
      else
      {
        v10 = *((_QWORD *)this + 20);
        v11 = *((_QWORD *)this + 1);
        v13 = 0;
        VidSchiUpdateNativeFenceCurrentValue(v11, v10, -1LL, &v13);
      }
      v7 = (char *)this + 28;
    }
    else
    {
      v7 = (char *)this + 28;
      if ( !*((_BYTE *)this + 28) || a3 )
      {
        v8 = (volatile signed __int32 *)*((_QWORD *)this + 9);
        if ( *((_BYTE *)this + 30) )
          *(_QWORD *)v8 = -1LL;
        else
          _InterlockedAdd(v8, 0x3FFFFFFFu);
      }
    }
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0ppt_EtwWriteTransfer(
        (_DWORD)this,
        (_DWORD)a2,
        a3,
        (_DWORD)this,
        *((_QWORD *)this + 2),
        *((_BYTE *)this + 29));
    VidSchiUnwaitMonitoredFences(a2, *((_QWORD *)this + 1));
    if ( *v7 )
    {
      if ( a3 )
      {
        v9 = *((_QWORD *)this + 38);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 8), &LockHandle);
        *(_BYTE *)(v9 + 48) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        VidSchiPropagateCrossAdapterSignal(*((_QWORD *)this + 1), this);
      }
    }
  }
}
