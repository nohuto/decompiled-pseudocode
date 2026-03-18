/*
 * XREFs of PoFxCompleteIdleCondition @ 0x140458A80
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x140545ED0 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x140554A10 (HalpInterruptPowerComponentIdleCallback.c)
 *     DifPoFxCompleteIdleConditionWrapper @ 0x14062B120 (DifPoFxCompleteIdleConditionWrapper.c)
 * Callees:
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = BugCheckParameter3;
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2[109]
                                                                                     + 8LL
                                                                                     * (unsigned int)BugCheckParameter3)
                                                                         + 136LL));
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  }
  else
  {
    PopFxAddLogEntry(BugCheckParameter2[6], BugCheckParameter3, 13, 1LL);
    return PopFxIdleWorkerTail(BugCheckParameter2, v3, 0LL);
  }
  return result;
}
