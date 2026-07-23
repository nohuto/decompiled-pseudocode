/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x1402B4970
 * Callers:
 *     HalpInterruptGenerateMessage @ 0x14053E5D0 (HalpInterruptGenerateMessage.c)
 *     PnprIsProcessorDevice @ 0x14072DB88 (PnprIsProcessorDevice.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073A200 (KeRegisterProcessorChangeCallback.c)
 *     HalpDpStartProcessor @ 0x140B51F84 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 *     HalpInterruptReinitialize @ 0x140B6C0DC (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x1402B49A8 (HalpGetProcessorStateByNtIndex.c)
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
