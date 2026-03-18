/*
 * XREFs of PoFxCompleteIdleCondition @ 0x1404592B0
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x1405487C0 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x140557310 (HalpInterruptPowerComponentIdleCallback.c)
 *     DifPoFxCompleteIdleConditionWrapper @ 0x1406370E0 (DifPoFxCompleteIdleConditionWrapper.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2
                                                                                                 + 872)
                                                                                     + 8LL
                                                                                     * (unsigned int)BugCheckParameter3)
                                                                         + 136LL));
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      PopFxBugCheck(0x613uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), BugCheckParameter3, 13, 1LL);
    return PopFxIdleWorkerTail(BugCheckParameter2);
  }
  return result;
}
