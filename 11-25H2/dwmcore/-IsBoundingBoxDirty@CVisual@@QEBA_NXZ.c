/*
 * XREFs of ?IsBoundingBoxDirty@CVisual@@QEBA_NXZ @ 0x1801B3700
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsBoundingBoxDirty(CVisual *this)
{
  return *((_BYTE *)this + 96) & 1;
}
