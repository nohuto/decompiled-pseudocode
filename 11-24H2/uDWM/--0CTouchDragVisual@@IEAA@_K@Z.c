/*
 * XREFs of ??0CTouchDragVisual@@IEAA@_K@Z @ 0x18000DCD8
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x18000DE08 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180011D98 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTouchDragVisual *__fastcall CTouchDragVisual::CTouchDragVisual(CTouchDragVisual *this, unsigned __int64 a2)
{
  CTouchDragVisual *result; // rax

  CTouchVisual::CTouchVisual(this, a2);
  *((_DWORD *)this + 64) = 200;
  *(_QWORD *)this = &CTouchDragVisual::`vftable';
  *((_DWORD *)this + 65) = 1088421888;
  *((_DWORD *)this + 66) = 939239554;
  *((_DWORD *)this + 67) = 1500;
  *((_DWORD *)this + 68) = 1058642330;
  CBitmapSourceArray::CBitmapSourceArray((CTouchDragVisual *)((char *)this + 280));
  CBitmapSourceArray::CBitmapSourceArray((CTouchDragVisual *)((char *)this + 312));
  result = this;
  *((_DWORD *)this + 104) = -1;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_WORD *)this + 200) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_QWORD *)this + 51) = 0LL;
  return result;
}
