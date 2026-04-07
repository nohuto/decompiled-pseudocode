/*
 * XREFs of ??0CTetherVisual@@IEAA@_K@Z @ 0x1800D9358
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800B6508 (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180011D98 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTetherVisual *__fastcall CTetherVisual::CTetherVisual(CTetherVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *((_QWORD *)this + 46) = 1034147594LL;
  *(_QWORD *)this = &CTetherVisual::`vftable';
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  return this;
}
