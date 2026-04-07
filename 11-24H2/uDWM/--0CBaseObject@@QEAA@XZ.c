/*
 * XREFs of ??0CBaseObject@@QEAA@XZ @ 0x180026794
 * Callers:
 *     ??0CWindowIconic@@IEAA@XZ @ 0x1800067E8 (--0CWindowIconic@@IEAA@XZ.c)
 *     ??0CWindowSnapshot@@IEAA@XZ @ 0x180007220 (--0CWindowSnapshot@@IEAA@XZ.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015A64 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x18001F8CC (--0CRenderDataInstruction@@QEAA@XZ.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800225D0 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ??0CBitmapSource@@IEAA@XZ @ 0x180025BC4 (--0CBitmapSource@@IEAA@XZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800265DC (--0CVisual@@IEAA@XZ.c)
 *     ??0CResource@@IEAA@XZ @ 0x180026744 (--0CResource@@IEAA@XZ.c)
 *     ??0CResourceProxy@@IEAA@XZ @ 0x18002676C (--0CResourceProxy@@IEAA@XZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002BC00 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x18003CE68 (--0CSecondaryWindowRepresentation@@IEAA@XZ.c)
 *     ??0CImmersiveState@@AEAA@XZ @ 0x18004093C (--0CImmersiveState@@AEAA@XZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180042850 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ??0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z @ 0x18004647C (--0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x180046FCC (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x180059364 (--0CAnimationClock@@QEAA@XZ.c)
 *     ??0CCompositor@@IEAA@XZ @ 0x180066F6C (--0CCompositor@@IEAA@XZ.c)
 *     ??0CDesktopThumbnailCVI@@IEAA@XZ @ 0x18006DED8 (--0CDesktopThumbnailCVI@@IEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180075058 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18007BC00 (--0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z.c)
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x18008263C (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z @ 0x1800839B4 (-Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z.c)
 *     ??0CTimer@@QEAA@XZ @ 0x180083BA8 (--0CTimer@@QEAA@XZ.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x180085ED4 (--0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18008C900 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ??0CAccentTransition@@QEAA@XZ @ 0x1800A18FC (--0CAccentTransition@@QEAA@XZ.c)
 *     ??0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z @ 0x1800A1D48 (--0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A897C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x1800B82AC (--0CDesktopManager@@AEAA@XZ.c)
 *     ??0CHolographicSlate@@AEAA@XZ @ 0x1800C4610 (--0CHolographicSlate@@AEAA@XZ.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800C80BC (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z.c)
 *     ??0CProjectedShadowScene@@QEAA@XZ @ 0x1800CACC4 (--0CProjectedShadowScene@@QEAA@XZ.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800CAD04 (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     ??0CThumbnailTransition@@QEAA@XZ @ 0x1800D9F80 (--0CThumbnailTransition@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBaseObject *__fastcall CBaseObject::CBaseObject(CBaseObject *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CBaseObject::`vftable';
  return this;
}
