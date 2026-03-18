/*
 * XREFs of ?HasNonDefaultWindowBackgroundTreatmentInternal@CVisual@@QEBA_NXZ @ 0x18019D470
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasNonDefaultWindowBackgroundTreatmentInternal(CVisual *this)
{
  return (**((_DWORD **)this + 29) & 0x400000) != 0;
}
