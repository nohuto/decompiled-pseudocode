/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180036E6C
 * Callers:
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180005C00 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x18000E934 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ??0CAccent@@IEAA@XZ @ 0x180019220 (--0CAccent@@IEAA@XZ.c)
 *     ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x18001C5D0 (--0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z.c)
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180020A70 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x1800277F8 (--0CLivePreview@@IEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x18002BC30 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180033F9C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180053EA8 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x1800540EC (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054B7C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180055640 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18009E748 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x1800A223C (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800C1CAC (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800C4554 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800CFCAC (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x1800F4A68 (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CScreenRotation@@IEAA@XZ @ 0x1800F6DAC (--0CScreenRotation@@IEAA@XZ.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x18010116C (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180039B40 (--0CVisual@@IEAA@XZ.c)
 */

CRenderDataVisual *__fastcall CRenderDataVisual::CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CRenderDataVisual::`vftable';
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_DWORD *)(v1 + 280) = 0;
  *(_QWORD *)(v1 + 248) = 0LL;
  return (CRenderDataVisual *)v1;
}
