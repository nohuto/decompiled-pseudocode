/*
 * XREFs of ??0CContainerVisual@@IEAA@XZ @ 0x18002659C
 * Callers:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ??0CWindowBorder@@IEAA@XZ @ 0x18002E62C (--0CWindowBorder@@IEAA@XZ.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x18002E688 (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18002ED5C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x18002F138 (--0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x18006DE94 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800265DC (--0CVisual@@IEAA@XZ.c)
 *     ??0VisualCollection@@QEAA@XZ @ 0x180026654 (--0VisualCollection@@QEAA@XZ.c)
 */

CContainerVisual *__fastcall CContainerVisual::CContainerVisual(CContainerVisual *this)
{
  _QWORD *v1; // r11
  CContainerVisual *v2; // r11
  CContainerVisual *result; // rax
  CContainerVisual **v4; // r10

  CVisual::CVisual(this);
  *v1 = &CContainerVisual::`vftable';
  VisualCollection::VisualCollection((VisualCollection *)(v1 + 18));
  *((_QWORD *)v2 + 24) = 0LL;
  result = v2;
  *v4 = v2;
  return result;
}
