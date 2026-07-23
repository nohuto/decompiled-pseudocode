/*
 * XREFs of KiEnterDeferredReadyState @ 0x1402DFA30
 * Callers:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiSetThreadSchedulingGroup @ 0x1402D6FE8 (KiSetThreadSchedulingGroup.c)
 *     KiFastReadyThread @ 0x1402DE4A8 (KiFastReadyThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402DE7C8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiAlertSingleThreadByThreadId @ 0x1402DE880 (KiAlertSingleThreadByThreadId.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
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
