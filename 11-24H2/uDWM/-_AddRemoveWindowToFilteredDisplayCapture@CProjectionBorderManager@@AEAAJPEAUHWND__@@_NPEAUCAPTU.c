/*
 * XREFs of ?_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CE538
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008EEC0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CB590 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CE538 (-_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTU.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180021F0C (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x18003EF18 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18003EF24 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x1800444CC (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A87B8 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAA_NXZ @ 0x1800B530C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindo.c)
 *     ?RemoveAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z @ 0x1800CC2B4 (-RemoveAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CE538 (-_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTU.c)
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800CE9A4 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800CF454 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddRemoveWindowToFilteredDisplayCapture(
        CProjectionBorderManager *this,
        HWND a2,
        bool a3,
        struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *a4)
{
  signed int v5; // edi
  __int64 v6; // r9
  CProjectionBorderManager *v10; // rcx
  struct CVisualProxy *v11; // rbx
  CCompositor *v13; // r14
  int WindowRootVisual; // edi
  __int64 v15; // rdx
  CVisualProxy *v16; // r14
  __int64 v17; // rax
  struct CVisualProxy *v18; // rax
  const struct std::nothrow_t *v19; // rdx
  CBaseObject **v20; // rax
  CBaseObject **v21; // rdi
  CProjectionBorderManager *v22; // rcx
  const struct _DWMCaptureWindowInformation **v23; // r14
  int v24; // ebx
  __int64 v25; // rdx
  CBaseObject **v26; // rcx
  __int64 v27; // rdx
  CRedirectVisualProxy *v28; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CVisualProxy *v30; // [rsp+78h] [rbp+48h] BYREF

  v5 = -1;
  v6 = 0LL;
  if ( *((_DWORD *)a4 + 24) )
  {
    while ( **(HWND **)(*((_QWORD *)a4 + 9) + 8 * v6) != a2 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a4 + 24) )
        goto LABEL_6;
    }
    v5 = v6;
  }
LABEL_6:
  v30 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v30);
  v11 = v30;
  if ( !v30 )
    return 2147942487LL;
  if ( a3 )
  {
    if ( v5 < 0 )
    {
      if ( (*((_BYTE *)v30 + 742) & 0x10) != 0 )
        return 0LL;
      v30 = 0LL;
      v13 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
      WindowRootVisual = CProjectionBorderManager::_GetWindowRootVisual(v10, a2, &v30);
      if ( WindowRootVisual < 0 )
      {
        v15 = 2784LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)WindowRootVisual);
        return (unsigned int)WindowRootVisual;
      }
      v28 = 0LL;
      WindowRootVisual = CCompositor::CreateRedirectVisualProxy(v13, &v28);
      if ( WindowRootVisual < 0 )
      {
        v15 = 2787LL;
        goto LABEL_13;
      }
      v16 = v28;
      WindowRootVisual = CRedirectVisualProxy::SetRedirectedVisual(v28, v30);
      if ( WindowRootVisual < 0 )
      {
        v15 = 2788LL;
        goto LABEL_13;
      }
      v17 = *((_QWORD *)v11 + 55);
      if ( v17 )
      {
        v18 = *(struct CVisualProxy **)(v17 + 64);
      }
      else
      {
        v30 = (struct CVisualProxy *)*((_QWORD *)v11 + 6);
        v18 = v30;
      }
      WindowRootVisual = CVisualProxy::SetOffset(v16, (double)(int)v18, (double)SHIDWORD(v18), 0.0);
      if ( WindowRootVisual < 0 )
      {
        v15 = 2799LL;
        goto LABEL_13;
      }
      v20 = (CBaseObject **)operator new[](0x10uLL, v19);
      v21 = v20;
      if ( v20 )
        v20[1] = 0LL;
      else
        v21 = 0LL;
      *v21 = (CBaseObject *)a2;
      Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(v21 + 1, v16);
      WindowRootVisual = CProjectionBorderManager::_AddWindowToFilteredCapture(
                           v22,
                           a4,
                           (struct CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *)v21,
                           v11);
      if ( WindowRootVisual < 0 )
      {
        v15 = 2804LL;
        goto LABEL_13;
      }
      ++*((_DWORD *)v11 + 115);
      v23 = (const struct _DWMCaptureWindowInformation **)((char *)a4 + 104);
LABEL_40:
      WindowRootVisual = CCaptureControllerProxy::SetWindowInfos(
                           *((CCaptureControllerProxy **)a4 + 1),
                           *v23,
                           *((_DWORD *)a4 + 32));
      if ( WindowRootVisual >= 0 )
      {
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetImpl'::`2'::impl) )
        {
          v27 = *((_QWORD *)v11 + 81);
          if ( v27 )
            CProjectionBorderManager::_AddRemoveWindowToFilteredDisplayCapture(this, *(HWND *)(v27 + 40), a3, a4);
        }
        return 0LL;
      }
      v15 = 2824LL;
      goto LABEL_13;
    }
    return 2147942487LL;
  }
  if ( v5 < 0 )
    return 2147942487LL;
  _mm_lfence();
  v24 = CContainerVisualProxy::RemoveChild(
          *((CContainerVisualProxy **)a4 + 8),
          *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)a4 + 9) + 8LL * (unsigned int)v5) + 8LL));
  if ( v24 >= 0 )
  {
    v26 = *(CBaseObject ***)(*((_QWORD *)a4 + 9) + 8LL * (unsigned int)v5);
    if ( v26 )
      CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v26);
    v24 = DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)a4 + 9, v5);
    if ( v24 >= 0 )
    {
      v23 = (const struct _DWMCaptureWindowInformation **)((char *)a4 + 104);
      v24 = DynArray<_DWMCaptureWindowInformation,0>::RemoveAt((__int64 *)a4 + 13, v5);
      if ( v24 >= 0 )
      {
        v11 = v30;
        --*((_DWORD *)v30 + 115);
        goto LABEL_40;
      }
      v25 = 2819LL;
    }
    else
    {
      v25 = 2818LL;
    }
  }
  else
  {
    v25 = 2816LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v24);
  return (unsigned int)v24;
}
