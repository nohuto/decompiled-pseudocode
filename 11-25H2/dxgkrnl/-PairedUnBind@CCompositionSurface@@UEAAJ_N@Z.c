/*
 * XREFs of ?PairedUnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x14009AD00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1400098CC (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CCompositionSurface::PairedUnBind(CCompositionSurface *this, char a2)
{
  return CCompositionSurface::UnBind(this, a2);
}
