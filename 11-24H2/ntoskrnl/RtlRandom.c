/*
 * XREFs of RtlRandom @ 0x140A4F590
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1403F86DC (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140C3516C (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
