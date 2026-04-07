/*
 * XREFs of ??0CTetherVisual@@IEAA@_K@Z @ 0x1800E3368
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800AEB1C (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180053EA8 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTetherVisual *__fastcall CTetherVisual::CTetherVisual(CTetherVisual *this)
{
  CTetherVisual *v1; // rcx
  CTetherVisual *result; // rax

  CTouchVisual::CTouchVisual(this);
  *((_QWORD *)v1 + 52) = 1034147594LL;
  *((_QWORD *)v1 + 44) = 0LL;
  *((_QWORD *)v1 + 47) = 0LL;
  *((_QWORD *)v1 + 48) = 0LL;
  *((_QWORD *)v1 + 49) = 0LL;
  *((_QWORD *)v1 + 50) = 0LL;
  *((_QWORD *)v1 + 51) = 0LL;
  result = v1;
  *(_QWORD *)v1 = &CTetherVisual::`vftable';
  return result;
}
