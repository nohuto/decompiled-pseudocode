/*
 * XREFs of ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008EEC0
 * Callers:
 *     ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18008EC60 (-OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HasOngoingCapture@CProjectionBorderManager@@AEAA_NPEAUHWND__@@@Z @ 0x180099064 (-_HasOngoingCapture@CProjectionBorderManager@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??4?$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A8740 (--4-$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B46CC (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAA_NXZ @ 0x1800B530C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindo.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CE538 (-_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTU.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800CF28C (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF6C0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFB14 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::UpdateProxyWindowForCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        HWND a3,
        HWND a4)
{
  HWND v6; // r13
  HWND v8; // rsi
  CProjectionBorderManager *v9; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v11; // ebx
  CProjectionBorderManager *v12; // rcx
  __int64 v13; // rdx
  HWND *v14; // rax
  HWND *v15; // rdi
  CBaseObject **v16; // rcx
  HWND v17; // rsi
  CProjectionBorderManager *v18; // rcx
  int v19; // eax
  int updated; // edi
  CProjectionBorderManager *v21; // rcx
  PVOID v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *v25; // rax
  struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *v26; // rbx
  int v28; // [rsp+20h] [rbp-40h]
  int v29; // [rsp+20h] [rbp-40h]
  struct CVisualProxy *v30; // [rsp+30h] [rbp-30h] BYREF
  struct CapturedWindowRepresentation *v31; // [rsp+38h] [rbp-28h] BYREF
  PVOID v32; // [rsp+40h] [rbp-20h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp-18h] BYREF
  PVOID v34; // [rsp+50h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v6 = a2;
  v35 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !CProjectionBorderManager::_HasOngoingCapture((CProjectionBorderManager *)this, v6) )
    goto LABEL_54;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl) )
  {
    v8 = v6;
    if ( a3 )
      v8 = a3;
    RestartKey = 0LL;
    while ( 1 )
    {
      do
      {
        v14 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
        v15 = v14;
        if ( !v14 )
          goto LABEL_54;
      }
      while ( v14[2] != v6 );
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
      CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(
                                 v9,
                                 v8,
                                 &v30,
                                 &v31,
                                 (struct CVisualProxy **)&v32);
      v11 = CapturedItemRootVisual;
      if ( CapturedItemRootVisual < 0 )
      {
        if ( CapturedItemRootVisual != -2147467261 )
        {
          v13 = 723LL;
          goto LABEL_33;
        }
      }
      else
      {
        CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual((CCaptureControllerProxy *)v15[1], v30);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v13 = 694LL;
          goto LABEL_33;
        }
        CapturedItemRootVisual = CCaptureControllerProxy::SetReferenceVisual(
                                   (CCaptureControllerProxy *)v15[1],
                                   (struct CVisualProxy *)v32);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v13 = 695LL;
          goto LABEL_33;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
                                   (CProjectionBorderManager *)this,
                                   v8,
                                   (struct CCaptureControllerProxy *)v15[1]);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v13 = 696LL;
          goto LABEL_33;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
                                   (CProjectionBorderManager *)this,
                                   v8);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v13 = 697LL;
          goto LABEL_33;
        }
        Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=(v15 + 3, &v31);
        if ( a4 )
        {
          if ( *((_BYTE *)v15 + 32) )
          {
            CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v12, a4, 0);
            v11 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v13 = 705LL;
              goto LABEL_33;
            }
          }
          CapturedItemRootVisual = CCaptureManager::_SetScreenCaptureForWindow(v12, a4, 0);
          v11 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v13 = 707LL;
            goto LABEL_33;
          }
        }
        if ( v8 == a3 )
        {
          if ( *((_BYTE *)v15 + 32) )
          {
            CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v12, v8, 1);
            v11 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v13 = 715LL;
              goto LABEL_33;
            }
          }
          CapturedItemRootVisual = CCaptureManager::_SetScreenCaptureForWindow(v12, v8, 1);
          v11 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v13 = 717LL;
LABEL_33:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v13,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
              (const char *)(unsigned int)CapturedItemRootVisual,
              v28);
            v16 = &v31;
            goto LABEL_62;
          }
        }
      }
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
    }
  }
  RestartKey = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v17 = v6;
  if ( a3 )
    v17 = a3;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v30);
  v19 = CProjectionBorderManager::_GetCapturedItemRootVisual(
          v18,
          v17,
          (struct CVisualProxy **)&RestartKey,
          &v30,
          (struct CVisualProxy **)&v32);
  v11 = v19;
  if ( v19 < 0 )
  {
    if ( v19 != -2147467261 )
    {
      v24 = 781LL;
LABEL_61:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v19,
        v29);
      v16 = &v30;
LABEL_62:
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v16);
      goto LABEL_77;
    }
LABEL_53:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v30);
LABEL_54:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetImpl'::`2'::impl) )
    {
      v32 = 0LL;
      CWindowList::GetSyncedWindowDataByHwnd(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
        v6,
        (struct CWindowData **)&v32);
      if ( v32 )
      {
        if ( *((_DWORD *)v32 + 115) )
        {
          v32 = 0LL;
          while ( 1 )
          {
            v25 = (struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)RtlEnumerateGenericTableWithoutSplaying(
                                                                                           this + 8,
                                                                                           &v32);
            v26 = v25;
            if ( !v25 )
              break;
            if ( a4 )
              CProjectionBorderManager::_AddRemoveWindowToFilteredDisplayCapture(
                (CProjectionBorderManager *)this,
                a4,
                0,
                v25);
            if ( a3 )
              CProjectionBorderManager::_AddRemoveWindowToFilteredDisplayCapture(
                (CProjectionBorderManager *)this,
                a3,
                1,
                v26);
          }
        }
      }
    }
    v11 = 0;
    goto LABEL_77;
  }
  v34 = 0LL;
  while ( 1 )
  {
    do
    {
      v22 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &v34);
      if ( !v22 )
      {
        v6 = a2;
        goto LABEL_53;
      }
    }
    while ( *((HWND *)v22 + 2) != a2 );
    updated = CCaptureControllerProxy::SetRootVisual(
                *((CCaptureControllerProxy **)v22 + 1),
                (struct CVisualProxy *)RestartKey);
    if ( updated < 0 )
      break;
    updated = CCaptureControllerProxy::SetReferenceVisual(
                *((CCaptureControllerProxy **)v22 + 1),
                (struct CVisualProxy *)v32);
    if ( updated < 0 )
    {
      v23 = 752LL;
      goto LABEL_68;
    }
    updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
                (CProjectionBorderManager *)this,
                v17,
                *((struct CCaptureControllerProxy **)v22 + 1));
    if ( updated < 0 )
    {
      v23 = 753LL;
      goto LABEL_68;
    }
    updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost((CProjectionBorderManager *)this, v17);
    if ( updated < 0 )
    {
      v23 = 754LL;
      goto LABEL_68;
    }
    if ( a4 )
    {
      if ( *((_BYTE *)v22 + 32) )
      {
        updated = CProjectionBorderManager::_SetProjectionBorderForWindow(v21, a4, 0);
        if ( updated < 0 )
        {
          v23 = 761LL;
          goto LABEL_68;
        }
      }
      updated = CCaptureManager::_SetScreenCaptureForWindow(v21, a4, 0);
      if ( updated < 0 )
      {
        v23 = 763LL;
        goto LABEL_68;
      }
    }
    if ( v17 == a3 )
    {
      if ( *((_BYTE *)v22 + 32) )
      {
        v19 = CProjectionBorderManager::_SetProjectionBorderForWindow(v21, v17, 1);
        v11 = v19;
        if ( v19 < 0 )
        {
          v24 = 771LL;
          goto LABEL_61;
        }
      }
      v19 = CCaptureManager::_SetScreenCaptureForWindow(v21, v17, 1);
      v11 = v19;
      if ( v19 < 0 )
      {
        v24 = 773LL;
        goto LABEL_61;
      }
    }
  }
  v23 = 751LL;
LABEL_68:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v29);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v30);
  v11 = updated;
LABEL_77:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v35);
  return v11;
}
