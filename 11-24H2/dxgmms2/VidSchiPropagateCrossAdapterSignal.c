/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x14003BB2C
 * Callers:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000EF50 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003B954 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400518DC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiPropagateCrossAdapterSignal(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD **v7; // rsi
  _QWORD *j; // rbx
  _QWORD **v9; // r14
  _QWORD *k; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-40h] BYREF

  if ( a2 )
  {
    v4 = a2[38];
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 8), &LockHandle);
    v5 = (_QWORD **)(a2[38] + 16LL);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( i - 30 != a2 )
        ((void (__fastcall *)(_QWORD, _QWORD *))i[9])(*(i - 29), i - 30);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v12, (unsigned __int64 *)(a1 + 3416), 1, 0);
    v7 = (_QWORD **)(a1 + 1960);
    for ( j = *v7; j != v7; j = (_QWORD *)*j )
    {
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)&LockHandle, (unsigned __int64 *)(j[2] + 8LL), 1, 0);
      v9 = (_QWORD **)(j[2] + 16LL);
      for ( k = *v9; k != v9; k = (_QWORD *)*k )
      {
        if ( j - 36 != k - 30 )
          ((void (__fastcall *)(_QWORD, _QWORD))k[9])(*(k - 29), 0LL);
      }
      AcquireSpinLock::Release((AcquireSpinLock *)&LockHandle);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v12);
  }
}
