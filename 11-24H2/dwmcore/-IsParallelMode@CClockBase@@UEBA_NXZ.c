/*
 * XREFs of ?IsParallelMode@CClockBase@@UEBA_NXZ @ 0x1800F2450
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClockBase::IsParallelMode(CClockBase *this)
{
  return *((_BYTE *)this + 72);
}
