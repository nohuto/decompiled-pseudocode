/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x1402B49A8
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x1402B4240 (HalGetMessageRoutingInfo.c)
 *     HalGetProcessorIdByNtNumber @ 0x1402B4970 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptStartBlockedProcessors @ 0x140554E14 (HalpInterruptStartBlockedProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProcessorStateByNtIndex(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 < (unsigned int)HalpInterruptProcessorCount )
    return *(_QWORD *)(HalpInterruptProcessorStateByNtIndex + 8LL * a1);
  return result;
}
