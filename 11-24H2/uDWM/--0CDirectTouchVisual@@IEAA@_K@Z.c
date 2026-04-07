/*
 * XREFs of ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x180011D60
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800125FC (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180011D98 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CDirectTouchVisual *__fastcall CDirectTouchVisual::CDirectTouchVisual(CDirectTouchVisual *this, unsigned __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *(_QWORD *)this = &CDirectTouchVisual::`vftable';
  return this;
}
