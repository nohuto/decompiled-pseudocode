/*
 * XREFs of DlrmProcessReadWriteRequest @ 0x140138EE0
 * Callers:
 *     RaidAdapterProcessRequestForDlrm @ 0x14005CEC0 (RaidAdapterProcessRequestForDlrm.c)
 * Callees:
 *     DlrmCheckAndScheduleScaleDown @ 0x1401388A8 (DlrmCheckAndScheduleScaleDown.c)
 *     DlrmCheckAndScheduleScaleUp @ 0x140138994 (DlrmCheckAndScheduleScaleUp.c)
 *     DlrmFetchOrAllocateWorkItem @ 0x140138B64 (DlrmFetchOrAllocateWorkItem.c)
 *     DlrmQueueWorkItemAndSignalEvent @ 0x140138FDC (DlrmQueueWorkItemAndSignalEvent.c)
 */

void __fastcall DlrmProcessReadWriteRequest(__int64 a1, unsigned int a2)
{
  ULONGLONG UnbiasedInterruptTime; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // edi
  __int64 WorkItem; // rax

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 && (*(_DWORD *)(a1 + 12) & 2) == 0 )
    {
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 112));
      v5 = *(_DWORD *)(a1 + 8);
      v6 = *(_DWORD *)(a1 + 60);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 112));
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 24), a2);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 32), a2);
      if ( !DlrmCheckAndScheduleScaleUp(a1, v5, v6)
        && !DlrmCheckAndScheduleScaleDown(a1, v5, UnbiasedInterruptTime)
        && UnbiasedInterruptTime - *(_QWORD *)(a1 + 168) >= 0x165A0BC00LL )
      {
        WorkItem = DlrmFetchOrAllocateWorkItem(a1);
        if ( WorkItem )
        {
          *(_DWORD *)(WorkItem + 16) = 6;
          DlrmQueueWorkItemAndSignalEvent(a1, WorkItem);
        }
      }
    }
  }
}
