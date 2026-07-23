/*
 * XREFs of KiFindBiasedProcessorIndex @ 0x14032AD94
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x1403293B4 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x14032AF90 (-KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041592C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x1404E0130 (KiHeteroSelectIdleProcessorFromSubNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindBiasedProcessorIndex(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  int i; // edx
  unsigned __int64 v5; // rax

  v3 = 0;
  for ( i = a2 % (unsigned int)__popcnt(a3) + 1; i; --i )
  {
    _BitScanForward64(&v5, a3);
    v3 += v5 + 1;
    a3 >>= (unsigned __int8)v5 + 1;
  }
  return *((unsigned int *)qword_140F22998 + (unsigned int)(v3 + (a1 << 6) - 1));
}
