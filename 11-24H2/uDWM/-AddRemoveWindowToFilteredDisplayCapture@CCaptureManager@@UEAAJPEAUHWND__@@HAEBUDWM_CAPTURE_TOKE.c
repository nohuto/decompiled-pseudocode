/*
 * XREFs of ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800AD280
 * Callers:
 *     ?OnAutoParentingChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AEDA0 (-OnAutoParentingChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180021F0C (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x18003EF18 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18003EF24 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??$_Find@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC1E0 (--$_Find@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CC.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800B409C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NXZ @ 0x1800B5388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapt_ea_1800B5388.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800B5650 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800B56F8 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::AddRemoveWindowToFilteredDisplayCapture(
        CCaptureManager *this,
        HWND a2,
        int a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rsi
  int WindowRootVisual; // eax
  int v15; // ebx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r15
  HWND *v18; // rdx
  unsigned __int64 v19; // rax
  CCaptureManager *v20; // rcx
  bool v21; // r8
  struct CVisualProxy *v22; // rbx
  CCompositor *v23; // r15
  CVisualProxy *v24; // r15
  __int64 v25; // rax
  struct CVisualProxy *v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdi
  __int64 v30; // r14
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+20h] [rbp-20h] BYREF
  HWND v33; // [rsp+28h] [rbp-18h] BYREF
  CBaseObject *v34[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct CVisualProxy *v36; // [rsp+70h] [rbp+30h] BYREF
  CRedirectVisualProxy *v37; // [rsp+88h] [rbp+48h] BYREF

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = std::_Hash_representation<__int64>((const unsigned __int8 *)a4);
  v9 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Find<_LARGE_INTEGER>(
         (__int64)this + 136,
         (__int64)a4,
         v8);
  if ( v9 != *((_QWORD *)this + 18) )
  {
    v13 = v9 + 24;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::GetImpl'::`2'::impl) )
    {
      WindowRootVisual = CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
                           this,
                           a2,
                           a3 != 0,
                           (struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)v13);
      v10 = WindowRootVisual;
      if ( WindowRootVisual < 0 )
      {
        v12 = 956LL;
LABEL_6:
        v11 = (unsigned int)WindowRootVisual;
        goto LABEL_7;
      }
LABEL_37:
      v10 = 0;
      goto LABEL_38;
    }
    v15 = -1;
    v16 = 0LL;
    v17 = (_QWORD *)(v13 + 64);
    v18 = *(HWND **)(v13 + 64);
    v19 = (__int64)(*(_QWORD *)(v13 + 72) - (_QWORD)v18) >> 4;
    if ( v19 )
    {
      while ( *v18 != a2 )
      {
        ++v16;
        v18 += 2;
        if ( v16 >= v19 )
          goto LABEL_13;
      }
      v15 = v16;
    }
LABEL_13:
    v36 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v36);
    if ( a3 )
    {
      if ( v15 < 0 )
      {
        v22 = v36;
        if ( (*((_BYTE *)v36 + 742) & 0x10) != 0 )
          goto LABEL_37;
        v23 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
        v36 = 0LL;
        WindowRootVisual = CCaptureManager::_GetWindowRootVisual(v20, a2, v21, &v36);
        v10 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v12 = 991LL;
          goto LABEL_6;
        }
        v37 = 0LL;
        WindowRootVisual = CCompositor::CreateRedirectVisualProxy(v23, &v37);
        v10 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v12 = 994LL;
          goto LABEL_6;
        }
        v24 = v37;
        WindowRootVisual = CRedirectVisualProxy::SetRedirectedVisual(v37, v36);
        v10 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v12 = 995LL;
          goto LABEL_6;
        }
        v25 = *((_QWORD *)v22 + 55);
        if ( v25 )
        {
          v26 = *(struct CVisualProxy **)(v25 + 64);
        }
        else
        {
          v36 = (struct CVisualProxy *)*((_QWORD *)v22 + 6);
          v26 = v36;
        }
        WindowRootVisual = CVisualProxy::SetOffset(v24, (double)(int)v26, (double)SHIDWORD(v26), 0.0);
        v10 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v12 = 1006LL;
          goto LABEL_6;
        }
        v34[0] = 0LL;
        v33 = a2;
        Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(v34, v24);
        v28 = ((__int64 (__fastcall *)(__int64, __int64, HWND *, struct CVisualProxy *, struct _RTL_CRITICAL_SECTION *))CCaptureManager::_AddWindowToFilteredCapture)(
                v27,
                v13,
                &v33,
                v22,
                v32);
        v10 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3F3,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v28);
          Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v34);
          goto LABEL_38;
        }
        ++*((_DWORD *)v22 + 115);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v34);
        v29 = v13 + 88;
        goto LABEL_35;
      }
    }
    else if ( v15 >= 0 )
    {
      v30 = 16LL * v15;
      WindowRootVisual = CContainerVisualProxy::RemoveChild(
                           *(CContainerVisualProxy **)(v13 + 56),
                           *(struct CVisualProxy **)(v30 + *v17 + 8));
      v10 = WindowRootVisual;
      if ( WindowRootVisual < 0 )
      {
        v12 = 1023LL;
        goto LABEL_6;
      }
      std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(v13 + 64, &v37, v30 + *v17);
      v29 = v13 + 88;
      std::vector<_DWMCaptureWindowInformation>::erase(v13 + 88, &v37, *(_QWORD *)(v13 + 88) + 32LL * v15);
      --*((_DWORD *)v36 + 115);
LABEL_35:
      WindowRootVisual = CCaptureControllerProxy::SetWindowInfos(
                           *(CCaptureControllerProxy **)(v13 + 8),
                           *(const struct _DWMCaptureWindowInformation **)v29,
                           (__int64)(*(_QWORD *)(v29 + 8) - *(_QWORD *)v29) >> 5);
      v10 = WindowRootVisual;
      if ( WindowRootVisual < 0 )
      {
        v12 = 1030LL;
        goto LABEL_6;
      }
      goto LABEL_37;
    }
    v10 = -2147024809;
    goto LABEL_38;
  }
  v10 = -2147024809;
  v11 = 2147942487LL;
  v12 = 951LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v11);
LABEL_38:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return v10;
}
