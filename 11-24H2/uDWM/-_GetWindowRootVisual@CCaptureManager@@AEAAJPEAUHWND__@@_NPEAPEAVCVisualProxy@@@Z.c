/*
 * XREFs of ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800B409C
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800AD280 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800AD5A0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800B3D2C (-_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCaptur.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAA_NXZ @ 0x1800B53C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scope.c)
 *     ?GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800DB188 (-GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_GetWindowRootVisual(
        CCaptureManager *this,
        HWND a2,
        __int64 a3,
        struct CVisualProxy **a4)
{
  unsigned int v6; // edi
  struct CWindowData *v7; // rbx
  struct CVisualProxy *WindowBorderVisualProxy; // rax
  struct CWindowData *v10; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = this;
  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  *a4 = 0LL;
  v10 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v10);
  v7 = v10;
  if ( v10 && *((_QWORD *)v10 + 55) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::GetImpl'::`2'::impl) )
      WindowBorderVisualProxy = *(struct CVisualProxy **)(*((_QWORD *)v7 + 55) + 16LL);
    else
      WindowBorderVisualProxy = CTopLevelWindow::GetWindowBorderVisualProxy(*((CTopLevelWindow **)v7 + 55));
    *a4 = WindowBorderVisualProxy;
  }
  if ( !*a4 )
    v6 = -2147467261;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v6;
}
