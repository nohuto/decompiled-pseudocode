/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x140003D50
 * Callers:
 *     CiTaskIndexDereference @ 0x140003CB0 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x140001480 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerRemoveDeadline @ 0x140001730 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x14000430C (CiSchedulerRefreshTaskIndexQosProperties.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  char v2; // di
  unsigned __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = 0;
  v3 = KeQueryInterruptTimePrecise(&v5);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  *(_DWORD *)(a1 + 184) &= ~8u;
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v2 = 1;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v2 )
  {
    goto LABEL_5;
  }
  CiSchedulerUpdateTimer(v3);
LABEL_5:
  *(_DWORD *)(a1 + 184) &= ~2u;
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 0x20) != 0 )
  {
    v4 &= ~0x20u;
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v4;
  }
  if ( (v4 & 0x10) != 0 )
    *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFEF;
  CiSchedulerRefreshTaskIndexQosProperties(a1);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
