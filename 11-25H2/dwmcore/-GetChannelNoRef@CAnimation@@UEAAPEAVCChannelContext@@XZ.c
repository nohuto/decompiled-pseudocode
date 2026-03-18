/*
 * XREFs of ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x180030FE0
 * Callers:
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800309F0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

struct CChannelContext *__fastcall CAnimation::GetChannelNoRef(CAnimation *this)
{
  return (struct CChannelContext *)*((_QWORD *)this - 2);
}
