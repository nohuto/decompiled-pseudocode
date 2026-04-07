/*
 * XREFs of ??0CPressTapVisual@@IEAA@_K@Z @ 0x1800CA344
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800B6440 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180011D98 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CPressTapVisual *__fastcall CPressTapVisual::CPressTapVisual(CPressTapVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CPressTapVisual::`vftable';
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  return this;
}
