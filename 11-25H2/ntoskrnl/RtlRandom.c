/*
 * XREFs of RtlRandom @ 0x140A4CA70
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404A08B8 (CcGetRandomVacbArrayWithReference.c)
 *     PspInitPhase2 @ 0x140C23EA0 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
