/*
 * XREFs of KiAddProcessorToGroupSchedulingDatabase @ 0x140B5CE04
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     ?KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z @ 0x1405C4A94 (-KiAddProcessorToGroupSchedulingList@@YAXPEAU_KPRCB@@PEAU_LIST_ENTRY@@K@Z.c)
 *     ?KiInitializeProcessorGroupSchedulingData@@YAXPEAU_KPRCB@@@Z @ 0x1405C4D30 (-KiInitializeProcessorGroupSchedulingData@@YAXPEAU_KPRCB@@@Z.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingDatabase(struct _KPRCB *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KiInitializeProcessorGroupSchedulingData(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( KiGroupSchedulingEnabled )
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( a1->PrcbLock );
    }
    KiAddProcessorToGroupSchedulingList(a1, &KiSchedulingGroupList, v3);
    _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
