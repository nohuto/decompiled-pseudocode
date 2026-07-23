/*
 * XREFs of HalpProcInitDiscard @ 0x140C114B0
 * Callers:
 *     HalpProcInitSystem @ 0x140B4F200 (HalpProcInitSystem.c)
 * Callees:
 *     HalpProcGetFeatureBits @ 0x14054AA20 (HalpProcGetFeatureBits.c)
 */

__int64 HalpProcInitDiscard()
{
  off_140E00890[0] = (__int64 (__fastcall *)())HalpLoadMicrocode;
  off_140E00898[0] = xHalGetInterruptTranslator;
  off_140E008A0[0] = HalpMcUpdatePostUpdate;
  off_140E00980[0] = (__int64 (__fastcall *)())HalpProcessorPrepareForIdle;
  off_140E00990 = (__int64 (__fastcall *)())HalpProcessorResumeFromIdle;
  HalpFeatureBits = HalpProcGetFeatureBits();
  return 0LL;
}
