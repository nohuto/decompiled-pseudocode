/*
 * XREFs of DlrmCheckAndScheduleScaleUp @ 0x140138994
 * Callers:
 *     DlrmProcessReadWriteRequest @ 0x140138EE0 (DlrmProcessReadWriteRequest.c)
 * Callees:
 *     DlrmFetchOrAllocateWorkItem @ 0x140138B64 (DlrmFetchOrAllocateWorkItem.c)
 *     DlrmGetScaleThreshold @ 0x140138BF4 (DlrmGetScaleThreshold.c)
 *     DlrmQueueWorkItemAndSignalEvent @ 0x140138FDC (DlrmQueueWorkItemAndSignalEvent.c)
 */

char __fastcall DlrmCheckAndScheduleScaleUp(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  int v4; // ebp
  unsigned __int64 ScaleThreshold; // r8
  unsigned __int64 v8; // r11
  __int64 WorkItem; // rax

  v3 = 0;
  v4 = a3;
  if ( a1 )
  {
    LOBYTE(a3) = 1;
    ScaleThreshold = DlrmGetScaleThreshold(a2, *(unsigned __int16 *)(a1 + 4), a3);
    if ( v4 <= (int)a2 || *(_QWORD *)(a1 + 24) / 1024LL < ScaleThreshold )
    {
      if ( v8 >= g_DlrmScaleUpTimeWindow100ns )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
        *(_QWORD *)(a1 + 40) = KeQueryUnbiasedInterruptTime();
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
        _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
      }
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
        *(_DWORD *)(WorkItem + 16) = 1;
        DlrmQueueWorkItemAndSignalEvent(a1, WorkItem);
        v3 = 1;
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 224));
      }
    }
  }
  return v3;
}
