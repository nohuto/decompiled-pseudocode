/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x1402016B8
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x140200F50 (HalGetMessageRoutingInfo.c)
 *     HalGetProcessorIdByNtNumber @ 0x140201680 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptStartBlockedProcessors @ 0x140554BD4 (HalpInterruptStartBlockedProcessors.c)
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
