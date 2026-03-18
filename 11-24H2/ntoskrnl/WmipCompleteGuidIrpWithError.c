/*
 * XREFs of WmipCompleteGuidIrpWithError @ 0x1404893F0
 * Callers:
 *     WmipReceiveNotifications @ 0x14047A844 (WmipReceiveNotifications.c)
 *     WmipDeleteMethod @ 0x1409CFC00 (WmipDeleteMethod.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x1403DC678 (WmipClearIrpObjectList.c)
 */

void __fastcall WmipCompleteGuidIrpWithError(__int64 a1)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    WmipClearIrpObjectList(v2);
    v2 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 48) = -1073741816;
    IofCompleteRequest((PIRP)v2, 0);
  }
}
