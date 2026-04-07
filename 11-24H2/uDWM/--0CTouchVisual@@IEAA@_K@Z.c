/*
 * XREFs of ??0CTouchVisual@@IEAA@_K@Z @ 0x180011D98
 * Callers:
 *     ??0CPenBarrelKeyVisual@@IEAA@_K@Z @ 0x18000D644 (--0CPenBarrelKeyVisual@@IEAA@_K@Z.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x18000DCD8 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x180011D60 (--0CDirectTouchVisual@@IEAA@_K@Z.c)
 *     ??0CContactStationaryVisual@@IEAA@_K@Z @ 0x18007501C (--0CContactStationaryVisual@@IEAA@_K@Z.c)
 *     ??0CFlickVisual@@IEAA@_K@Z @ 0x1800C2F5C (--0CFlickVisual@@IEAA@_K@Z.c)
 *     ??0CIndirectTouchVisual@@IEAA@_K@Z @ 0x1800C6E24 (--0CIndirectTouchVisual@@IEAA@_K@Z.c)
 *     ??0CPenPressHoldVisual@@IEAA@_K@Z @ 0x1800C9E90 (--0CPenPressHoldVisual@@IEAA@_K@Z.c)
 *     ??0CPressTapVisual@@IEAA@_K@Z @ 0x1800CA344 (--0CPressTapVisual@@IEAA@_K@Z.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800D9358 (--0CTetherVisual@@IEAA@_K@Z.c)
 *     ??0CTouchPressHoldVisual@@IEAA@_K@Z @ 0x1800DBC00 (--0CTouchPressHoldVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTouchVisual *__fastcall CTouchVisual::CTouchVisual(CTouchVisual *this, __int64 a2)
{
  CTouchVisual *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *((_QWORD *)this + 31) = a2;
  *(_QWORD *)this = &CTouchVisual::`vftable';
  result = this;
  *((_BYTE *)this + 240) = 0;
  return result;
}
