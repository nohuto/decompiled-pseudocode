/*
 * XREFs of _anonymous_namespace_::clampFloat @ 0x180088E1C
 * Callers:
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800C9044 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall anonymous_namespace_::clampFloat(float a1, float a2, float a3)
{
  return fminf(fmaxf(a1, a2), a3);
}
