/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC
 * Callers:
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180003824 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180006C2C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180011D98 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x180027DCC (--0CCanvasVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18002F8E4 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18003E3A0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180040080 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CThumbnailAnimatedVisual@@QEAA@XZ @ 0x180061B40 (--0CThumbnailAnimatedVisual@@QEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18006BD98 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18006D77C (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x18007C560 (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18007C9C4 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180083EBC (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x1800851C4 (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18008B0E4 (--0CLivePreview@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800AD7CC (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800C4AF8 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800C6674 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ??0CGlobalTimeTrackVisual@@IEAA@XZ @ 0x1800EC14C (--0CGlobalTimeTrackVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x18002659C (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CRenderDataVisual *__fastcall CRenderDataVisual::CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v2; // rdx

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CRenderDataVisual::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 208, 0LL, 0);
  *((_QWORD *)this + 25) &= v2;
  return this;
}
