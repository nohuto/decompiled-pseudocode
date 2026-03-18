/*
 * XREFs of ?HasEffects@NodeEffects@CDrawingContext@@QEAA_NXZ @ 0x1801B4BC0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::NodeEffects::HasEffects(CDrawingContext::NodeEffects *this)
{
  return *((_QWORD *)this + 1)
      || *((_BYTE *)this + 185)
      || *((_BYTE *)this + 186)
      || *((_BYTE *)this + 187)
      || *((_BYTE *)this + 188)
      || *((_DWORD *)this + 8)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 9) - 1.0) & _xmm) >= 0.0000011920929;
}
