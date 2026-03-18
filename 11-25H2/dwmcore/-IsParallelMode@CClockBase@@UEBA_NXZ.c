/*
 * XREFs of ?IsParallelMode@CClockBase@@UEBA_NXZ @ 0x180030740
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClockBase::IsParallelMode(CClockBase *this)
{
  return *((_BYTE *)this + 72);
}
