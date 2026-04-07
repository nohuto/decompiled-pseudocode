/*
 * XREFs of ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CB590
 * Callers:
 *     ?OnAutoParentingChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800CC160 (-OnAutoParentingChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180021F0C (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x18003EF18 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18003EF24 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x1800444CC (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A87B8 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NXZ @ 0x1800B5388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapt_ea_1800B5388.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBADC (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 *     ?RemoveAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z @ 0x1800CC2B4 (-RemoveAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CE538 (-_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTU.c)
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800CE9A4 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800CF454 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::AddRemoveWindowToFilteredDisplayCapture(
        CProjectionBorderManager *this,
        CBaseObject *a2,
        int a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  __int64 Element; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  signed int v12; // ebx
  unsigned int v13; // ecx
  HWND **v14; // rdx
  CProjectionBorderManager *v15; // rcx
  struct CVisualProxy *v16; // rbx
  CCompositor *v17; // r15
  int WindowRootVisual; // esi
  __int64 v19; // rdx
  CVisualProxy *v20; // r15
  __int64 v21; // rax
  struct CVisualProxy *v22; // rax
  const struct std::nothrow_t *v23; // rdx
  CBaseObject **v24; // rax
  CBaseObject **v25; // rsi
  CProjectionBorderManager *v26; // rcx
  const struct _DWMCaptureWindowInformation **v27; // rsi
  CBaseObject **v28; // rcx
  CRedirectVisualProxy *v30; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CVisualProxy *v32; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+78h] [rbp+48h] BYREF

  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement(
              (char *)this + 576,
              *(_QWORD *)a4);
  if ( Element )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::GetImpl'::`2'::impl) )
    {
      v9 = CProjectionBorderManager::_AddRemoveWindowToFilteredDisplayCapture(
             this,
             (HWND)a2,
             a3 != 0,
             (struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)Element);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 1324LL;
LABEL_46:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_47;
      }
      goto LABEL_48;
    }
    v12 = -1;
    v13 = 0;
    if ( *(_DWORD *)(Element + 96) )
    {
      v14 = *(HWND ***)(Element + 72);
      while ( **v14 != (HWND)a2 )
      {
        ++v13;
        ++v14;
        if ( v13 >= *(_DWORD *)(Element + 96) )
          goto LABEL_11;
      }
      v12 = v13;
    }
LABEL_11:
    v32 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      (HWND)a2,
      &v32);
    if ( a3 )
    {
      if ( v12 < 0 )
      {
        v16 = v32;
        if ( (*((_BYTE *)v32 + 742) & 0x10) != 0 )
        {
          v10 = 0;
LABEL_47:
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
          return v10;
        }
        v17 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
        v32 = 0LL;
        WindowRootVisual = CProjectionBorderManager::_GetWindowRootVisual(v15, (HWND)a2, &v32);
        if ( WindowRootVisual < 0 )
        {
          v19 = 1359LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)WindowRootVisual);
          v10 = WindowRootVisual;
          goto LABEL_47;
        }
        v30 = 0LL;
        WindowRootVisual = CCompositor::CreateRedirectVisualProxy(v17, &v30);
        if ( WindowRootVisual < 0 )
        {
          v19 = 1362LL;
          goto LABEL_17;
        }
        v20 = v30;
        WindowRootVisual = CRedirectVisualProxy::SetRedirectedVisual(v30, v32);
        if ( WindowRootVisual < 0 )
        {
          v19 = 1363LL;
          goto LABEL_17;
        }
        v21 = *((_QWORD *)v16 + 55);
        if ( v21 )
        {
          v22 = *(struct CVisualProxy **)(v21 + 64);
        }
        else
        {
          v32 = (struct CVisualProxy *)*((_QWORD *)v16 + 6);
          v22 = v32;
        }
        WindowRootVisual = CVisualProxy::SetOffset(v20, (double)(int)v22, (double)SHIDWORD(v22), 0.0);
        if ( WindowRootVisual < 0 )
        {
          v19 = 1374LL;
          goto LABEL_17;
        }
        v24 = (CBaseObject **)operator new[](0x10uLL, v23);
        v25 = v24;
        if ( v24 )
          v24[1] = 0LL;
        else
          v25 = 0LL;
        *v25 = a2;
        Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(v25 + 1, v20);
        WindowRootVisual = CProjectionBorderManager::_AddWindowToFilteredCapture(
                             v26,
                             (struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)Element,
                             (struct CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *)v25,
                             v16);
        if ( WindowRootVisual < 0 )
        {
          v19 = 1379LL;
          goto LABEL_17;
        }
        ++*((_DWORD *)v16 + 115);
        v27 = (const struct _DWMCaptureWindowInformation **)(Element + 104);
LABEL_44:
        v9 = CCaptureControllerProxy::SetWindowInfos(
               *(CCaptureControllerProxy **)(Element + 8),
               *v27,
               *(_DWORD *)(Element + 128));
        v10 = v9;
        if ( v9 < 0 )
        {
          v11 = 1399LL;
          goto LABEL_46;
        }
LABEL_48:
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
        return 0LL;
      }
    }
    else if ( v12 >= 0 )
    {
      _mm_lfence();
      WindowRootVisual = CContainerVisualProxy::RemoveChild(
                           *(CContainerVisualProxy **)(Element + 64),
                           *(struct CVisualProxy **)(*(_QWORD *)(*(_QWORD *)(Element + 72) + 8LL * (unsigned int)v12)
                                                   + 8LL));
      if ( WindowRootVisual < 0 )
      {
        v19 = 1391LL;
        goto LABEL_17;
      }
      v28 = *(CBaseObject ***)(*(_QWORD *)(Element + 72) + 8LL * (unsigned int)v12);
      if ( v28 )
        CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v28);
      WindowRootVisual = DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)(Element + 72), v12);
      if ( WindowRootVisual < 0 )
      {
        v19 = 1393LL;
        goto LABEL_17;
      }
      v27 = (const struct _DWMCaptureWindowInformation **)(Element + 104);
      v9 = DynArray<_DWMCaptureWindowInformation,0>::RemoveAt(Element + 104, (unsigned int)v12);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 1394LL;
        goto LABEL_46;
      }
      --*((_DWORD *)v32 + 115);
      goto LABEL_44;
    }
    v10 = -2147024809;
    goto LABEL_47;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return 2147549183LL;
}
