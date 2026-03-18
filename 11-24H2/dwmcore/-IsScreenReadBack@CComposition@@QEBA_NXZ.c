/*
 * XREFs of ?IsScreenReadBack@CComposition@@QEBA_NXZ @ 0x1802176F8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::IsScreenReadBack(CComposition *this)
{
  return *((_BYTE *)this + 6466);
}
