/*
 * XREFs of ??0CIndirectTouchVisual@@IEAA@_K@Z @ 0x1800C6E24
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180097258 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180011D98 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CIndirectTouchVisual *__fastcall CIndirectTouchVisual::CIndirectTouchVisual(CIndirectTouchVisual *this, __int64 a2)
{
  CTouchVisual::CTouchVisual(this, a2);
  *(_QWORD *)this = &CIndirectTouchVisual::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CIndirectTouchVisual *)((char *)this + 344));
  *((_QWORD *)this + 42) = 0LL;
  return this;
}
