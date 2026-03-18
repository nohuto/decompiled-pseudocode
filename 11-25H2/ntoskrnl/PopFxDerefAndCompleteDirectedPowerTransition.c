/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x14035610C
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x140356360 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x14035871C (PopFxNotifyPreDIrpCompletion.c)
 *     PoFxCompleteDirectedPowerDown @ 0x1405CBAC0 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F73C4 (PopFxCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PopFxDerefAndCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 864), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 1200));
  if ( !(_DWORD)result )
    return PopFxCompleteDirectedPowerTransition(BugCheckParameter3);
  if ( (int)result < 0 )
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}
