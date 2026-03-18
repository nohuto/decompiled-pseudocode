/*
 * XREFs of ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x140034748
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x14032ACAC (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *((_QWORD *)this + 16) + 3984LL * a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 936), &LockHandle);
  KeResetEvent(*(PRKEVENT *)(v4 + 912));
  *(_DWORD *)(v4 + 920) = a3;
  if ( a3 <= *(_DWORD *)(v4 + 924) && a3 )
  {
    KeSetEvent(*(PRKEVENT *)(v4 + 912), 0, 0);
  }
  else if ( !*(_BYTE *)(v4 + 928) )
  {
    *(_BYTE *)(v4 + 928) = 1;
    *a4 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
