/*
 * XREFs of ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800AD280 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180021F0C (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x18003EF18 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18003EF24 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800B409C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAA_NXZ @ 0x1800B530C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindo.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800B5650 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800B56F8 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
        CCaptureManager *this,
        CRedirectVisualProxy *a2,
        bool a3,
        struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r12
  HWND *v10; // r9
  unsigned __int64 v11; // r10
  CCaptureManager *v12; // rcx
  bool v13; // r8
  struct CVisualProxy *v14; // rdi
  CCompositor *v16; // rsi
  int WindowRootVisual; // ebx
  __int64 v18; // rdx
  CVisualProxy *v19; // rsi
  __int64 v20; // rax
  struct CVisualProxy *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  char *v24; // rsi
  __int64 v25; // r15
  int v26; // eax
  unsigned int v27; // esi
  __int64 v28; // rdx
  CRedirectVisualProxy *v29; // [rsp+20h] [rbp-10h] BYREF
  CBaseObject *v30; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct CVisualProxy *v33; // [rsp+88h] [rbp+58h] BYREF

  v7 = -1;
  v8 = 0LL;
  v9 = (_QWORD *)((char *)a4 + 64);
  v10 = (HWND *)*((_QWORD *)a4 + 8);
  v11 = (__int64)(v9[1] - (_QWORD)v10) >> 4;
  if ( v11 )
  {
    while ( *v10 != (HWND)a2 )
    {
      ++v8;
      v10 += 2;
      if ( v8 >= v11 )
        goto LABEL_6;
    }
    v7 = v8;
  }
LABEL_6:
  v33 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    (HWND)a2,
    &v33);
  v14 = v33;
  if ( !v33 )
    return 2147942487LL;
  if ( a3 )
  {
    if ( v7 < 0 )
    {
      if ( (*((_BYTE *)v33 + 742) & 0x10) != 0 )
        return 0LL;
      v16 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
      v33 = 0LL;
      WindowRootVisual = CCaptureManager::_GetWindowRootVisual(v12, (HWND)a2, v13, &v33);
      if ( WindowRootVisual < 0 )
      {
        v18 = 2279LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)WindowRootVisual);
        return (unsigned int)WindowRootVisual;
      }
      v29 = 0LL;
      WindowRootVisual = CCompositor::CreateRedirectVisualProxy(v16, &v29);
      if ( WindowRootVisual < 0 )
      {
        v18 = 2282LL;
        goto LABEL_13;
      }
      v19 = v29;
      WindowRootVisual = CRedirectVisualProxy::SetRedirectedVisual(v29, v33);
      if ( WindowRootVisual < 0 )
      {
        v18 = 2283LL;
        goto LABEL_13;
      }
      v20 = *((_QWORD *)v14 + 55);
      if ( v20 )
      {
        v21 = *(struct CVisualProxy **)(v20 + 64);
      }
      else
      {
        v33 = (struct CVisualProxy *)*((_QWORD *)v14 + 6);
        v21 = v33;
      }
      WindowRootVisual = CVisualProxy::SetOffset(v19, (double)(int)v21, (double)SHIDWORD(v21), 0.0);
      if ( WindowRootVisual < 0 )
      {
        v18 = 2294LL;
        goto LABEL_13;
      }
      v30 = 0LL;
      v29 = a2;
      Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v30, v19);
      v23 = ((__int64 (__fastcall *)(__int64, struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *, CRedirectVisualProxy **, struct CVisualProxy *))CCaptureManager::_AddWindowToFilteredCapture)(
              v22,
              a4,
              &v29,
              v14);
      WindowRootVisual = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8FB,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v30);
        return (unsigned int)WindowRootVisual;
      }
      ++*((_DWORD *)v14 + 115);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v30);
      v24 = (char *)a4 + 88;
LABEL_31:
      WindowRootVisual = CCaptureControllerProxy::SetWindowInfos(
                           *((CCaptureControllerProxy **)a4 + 1),
                           *(const struct _DWMCaptureWindowInformation **)v24,
                           (__int64)(*((_QWORD *)v24 + 1) - *(_QWORD *)v24) >> 5);
      if ( WindowRootVisual >= 0 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetImpl'::`2'::impl) )
        {
          v28 = *((_QWORD *)v14 + 81);
          if ( v28 )
            CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(this, *(HWND *)(v28 + 40), a3, a4);
        }
        return 0LL;
      }
      v18 = 2318LL;
      goto LABEL_13;
    }
    return 2147942487LL;
  }
  if ( v7 < 0 )
    return 2147942487LL;
  v25 = 16LL * v7;
  v26 = CContainerVisualProxy::RemoveChild(
          *((CContainerVisualProxy **)a4 + 7),
          *(struct CVisualProxy **)(v25 + *v9 + 8));
  v27 = v26;
  if ( v26 >= 0 )
  {
    std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(v9, &v33, v25 + *v9);
    v24 = (char *)a4 + 88;
    std::vector<_DWMCaptureWindowInformation>::erase((char *)a4 + 88, &v33, *((_QWORD *)a4 + 11) + 32LL * v7);
    --*((_DWORD *)v14 + 115);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x907,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v26);
  return v27;
}
