/*
 * XREFs of RtlRandom @ 0x140A46340
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1403EE7EC (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140C372AC (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG result; // eax

  result = ExGenRandom(1, v1, v2, v3) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
