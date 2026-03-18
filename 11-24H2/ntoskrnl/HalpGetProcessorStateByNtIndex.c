/*
 * XREFs of HalpGetProcessorStateByNtIndex @ 0x1403B8918
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x1403B81B0 (HalGetMessageRoutingInfo.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B88E0 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405574D4 (HalpInterruptStartBlockedProcessors.c)
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
