/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x1403B88E0
 * Callers:
 *     HalpInterruptGenerateMessage @ 0x140540CD0 (HalpInterruptGenerateMessage.c)
 *     PnprIsProcessorDevice @ 0x14072FB78 (PnprIsProcessorDevice.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073C2D0 (KeRegisterProcessorChangeCallback.c)
 *     HalpDpStartProcessor @ 0x140B4FF34 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 *     HalpInterruptReinitialize @ 0x140B6A818 (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x1403B8918 (HalpGetProcessorStateByNtIndex.c)
 */

__int64 __fastcall HalGetProcessorIdByNtNumber(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *ProcessorStateByNtIndex; // rax
  _DWORD *v5; // rdx

  if ( (unsigned int)a1 >= (unsigned int)HalpInterruptProcessorCount )
    return 3221225485LL;
  ProcessorStateByNtIndex = (_DWORD *)HalpGetProcessorStateByNtIndex(a1, a2, a3, a4);
  if ( !ProcessorStateByNtIndex )
    return 3221226021LL;
  *v5 = *ProcessorStateByNtIndex;
  return 0LL;
}
