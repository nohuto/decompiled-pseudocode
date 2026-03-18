/*
 * XREFs of ??1CBlurRenderingGraph@@EEAA@XZ @ 0x180216F4C
 * Callers:
 *     ??_ECBlurRenderingGraph@@EEAAPEAXI@Z @ 0x180216F10 (--_ECBlurRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CBlurRenderingGraph::~CBlurRenderingGraph(CBlurRenderingGraph *this)
{
  *(_QWORD *)this = &CBlurRenderingGraph::`vftable';
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 0x18u);
  *((_BYTE *)this + 200) = 1;
  CExternalEffectGraph::~CExternalEffectGraph(this);
}
