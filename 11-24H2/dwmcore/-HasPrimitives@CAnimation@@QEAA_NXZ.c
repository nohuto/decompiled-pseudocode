/*
 * XREFs of ?HasPrimitives@CAnimation@@QEAA_NXZ @ 0x1800F2B0C
 * Callers:
 *     ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x1800F2640 (-IsAnimate@CAnimation@@UEAA_NXZ.c)
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800F26C0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::HasPrimitives(CAnimation *this)
{
  return *((_QWORD *)this + 16) != 0LL;
}
