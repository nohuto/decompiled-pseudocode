/*
 * XREFs of ?HasNonDefaultEffectInternal@CVisual@@QEBA_NXZ @ 0x18019CA00
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasNonDefaultEffectInternal(CVisual *this)
{
  return (**((_DWORD **)this + 29) & 0x800000) != 0;
}
