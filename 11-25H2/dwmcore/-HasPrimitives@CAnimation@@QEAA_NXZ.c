/*
 * XREFs of ?HasPrimitives@CAnimation@@QEAA_NXZ @ 0x180030F98
 * Callers:
 *     ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x180030970 (-IsAnimate@CAnimation@@UEAA_NXZ.c)
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800309F0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::HasPrimitives(CAnimation *this)
{
  return *((_QWORD *)this + 16) != 0LL;
}
