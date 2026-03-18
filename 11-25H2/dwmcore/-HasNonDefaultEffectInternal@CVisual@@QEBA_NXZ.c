/*
 * XREFs of ?HasNonDefaultEffectInternal@CVisual@@QEBA_NXZ @ 0x1801962D0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasNonDefaultEffectInternal(CVisual *this)
{
  return (**((_DWORD **)this + 29) & 0x800000) != 0;
}
