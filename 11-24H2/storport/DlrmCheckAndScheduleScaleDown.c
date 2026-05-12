/*
 * XREFs of DlrmCheckAndScheduleScaleDown @ 0x1401388A8
 * Callers:
 *     DlrmProcessReadWriteRequest @ 0x140138EE0 (DlrmProcessReadWriteRequest.c)
 * Callees:
 *     DlrmFetchOrAllocateWorkItem @ 0x140138B64 (DlrmFetchOrAllocateWorkItem.c)
 *     DlrmGetScaleThreshold @ 0x140138BF4 (DlrmGetScaleThreshold.c)
 *     DlrmQueueWorkItemAndSignalEvent @ 0x140138FDC (DlrmQueueWorkItemAndSignalEvent.c)
 */

char __fastcall DlrmCheckAndScheduleScaleDown(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  unsigned __int64 ScaleThreshold; // r8
  int v6; // r11d
  __int64 WorkItem; // rax

  v3 = 0;
  if ( a1 && a3 - *(_QWORD *)(a1 + 48) >= (unsigned __int64)g_DlrmScaleDownTimeWindow100ns )
  {
    ScaleThreshold = DlrmGetScaleThreshold(a2, *(unsigned __int16 *)(a1 + 4), 0LL);
    if ( v6 <= 1 || *(_QWORD *)(a1 + 32) / 1024LL > ScaleThreshold )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
      *(_QWORD *)(a1 + 48) = KeQueryUnbiasedInterruptTime();
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
      _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
    }
    else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 12), 1u) )
    {
      return 1;
    }
    else
    {
      WorkItem = DlrmFetchOrAllocateWorkItem(a1);
      if ( WorkItem )
      {
        *(_DWORD *)(WorkItem + 16) = 2;
        DlrmQueueWorkItemAndSignalEvent(a1, WorkItem);
        v3 = 1;
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 228));
      }
    }
  }
  return v3;
}
