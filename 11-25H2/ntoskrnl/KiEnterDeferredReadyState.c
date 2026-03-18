/*
 * XREFs of KiEnterDeferredReadyState @ 0x1402F0680
 * Callers:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402F0F0C (KiPrepareReadyThreadForRescheduling.c)
 *     KiFastReadyThread @ 0x1402F12A8 (KiFastReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1403A9BE8 (KiSetThreadSchedulingGroup.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
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
