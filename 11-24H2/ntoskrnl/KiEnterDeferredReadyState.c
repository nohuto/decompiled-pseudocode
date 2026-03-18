/*
 * XREFs of KiEnterDeferredReadyState @ 0x140337910
 * Callers:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     KiReadyOutSwappedThreads @ 0x140336F68 (KiReadyOutSwappedThreads.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KiAlertSingleThreadByThreadId @ 0x140337FDC (KiAlertSingleThreadByThreadId.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14033817C (KiPrepareReadyThreadForRescheduling.c)
 *     KiFastReadyThread @ 0x1403385A4 (KiFastReadyThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiSetThreadSchedulingGroup @ 0x14047C324 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiEnterDeferredReadyState(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = *(unsigned __int8 *)(a1 + 388);
  if ( (_BYTE)result == 1 )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
    *(_BYTE *)(a1 + 388) = 7;
  }
  else
  {
    if ( (_BYTE)result != 5 )
    {
LABEL_5:
      *(_BYTE *)(a1 + 388) = 7;
      return result;
    }
    result = 0xFFFFF78000000320uLL;
    v2 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
    if ( *(_BYTE *)(a1 + 391) )
    {
      *(_QWORD *)(a1 + 1000) += v2;
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 992) += v2;
    *(_BYTE *)(a1 + 388) = 7;
  }
  return result;
}
