/*
 * XREFs of HalStartNextProcessor @ 0x140543990
 * Callers:
 *     HalpInterruptReinitialize @ 0x140B5AD18 (HalpInterruptReinitialize.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x1404469AC (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F740 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpInterruptStartBlockedProcessors @ 0x140554BD4 (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptStartProcessor @ 0x140B3BED0 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartNextProcessor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int started; // eax
  unsigned int v7; // edi

  if ( (unsigned int)HalpInterruptModel() - 1 > 3 || a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount() )
    return 2LL;
  started = HalpInterruptStartProcessor(a2, a3, 0LL, a1);
  v7 = started;
  if ( HalpInterruptBlockedProcessors )
  {
    if ( started == 4 )
      HalpInterruptStartBlockedProcessors(a2);
  }
  return v7;
}
