/*
 * XREFs of ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0
 * Callers:
 *     ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF0B0 (-OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??4?$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A8740 (--4-$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800B3D2C (-_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCaptur.c)
 *     ?_HasOngoingCapture@CCaptureManager@@AEAA_NPEAUHWND__@@@Z @ 0x1800B4160 (-_HasOngoingCapture@CCaptureManager@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B4330 (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B46CC (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4D6C (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B50E4 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAA_NXZ @ 0x1800B530C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::UpdateProxyWindowForCapture(CBaseObject ****this, HWND a2, HWND a3, HWND a4)
{
  HWND v6; // rsi
  HWND v8; // r14
  CBaseObject ***v9; // rdi
  CBaseObject **i; // rbx
  CCaptureManager *v11; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v13; // esi
  CCaptureManager *v14; // rcx
  bool v15; // r8
  CCaptureManager *v16; // rcx
  bool v17; // r8
  CProjectionBorderManager *v18; // rcx
  __int64 v19; // rdx
  CBaseObject **v20; // rcx
  HWND v21; // r14
  CCaptureManager *v22; // rcx
  int updated; // eax
  __int64 **v24; // rdi
  __int64 *j; // rbx
  CCaptureManager *v26; // rcx
  bool v27; // r8
  CCaptureManager *v28; // rcx
  bool v29; // r8
  CProjectionBorderManager *v30; // rcx
  __int64 v31; // rdx
  CBaseObject ***v32; // rdi
  CBaseObject ***k; // rbx
  struct CVisualProxy *v35; // [rsp+30h] [rbp-20h] BYREF
  struct CVisualProxy *v36; // [rsp+38h] [rbp-18h] BYREF
  struct CVisualProxy *v37; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v6 = a2;
  v38 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !CCaptureManager::_HasOngoingCapture((CCaptureManager *)this, v6) )
    goto LABEL_74;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl) )
  {
    v8 = v6;
    if ( a3 )
      v8 = a3;
    v9 = this[2];
    for ( i = *v9; ; i = (CBaseObject **)*i )
    {
      if ( i == (CBaseObject **)v9 )
        goto LABEL_74;
      if ( i[5] == (CBaseObject *)v6 )
      {
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v36);
        CapturedItemRootVisual = CCaptureManager::_GetCapturedItemRootVisual(v11, v8, &v35, &v36, &v37);
        v13 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          if ( CapturedItemRootVisual != -2147467261 )
          {
            v19 = 341LL;
            goto LABEL_37;
          }
        }
        else
        {
          CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual(i[4], v35);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v19 = 311LL;
            goto LABEL_37;
          }
          CapturedItemRootVisual = CCaptureControllerProxy::SetReferenceVisual(i[4], v37);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v19 = 312LL;
            goto LABEL_37;
          }
          CapturedItemRootVisual = CCaptureManager::_SendBoundsToCaptureControllerFromWindow(v14, v8, v15, i[4]);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v19 = 313LL;
            goto LABEL_37;
          }
          CapturedItemRootVisual = CCaptureManager::_UpdateCaptureControllerTransformFromWindow(v16, v8, v17, i[4]);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v19 = 314LL;
            goto LABEL_37;
          }
          CapturedItemRootVisual = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost((CCaptureManager *)this, v8);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v19 = 315LL;
            goto LABEL_37;
          }
          Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=(i + 6, &v36);
          if ( a4 )
          {
            if ( *((_BYTE *)i + 56) )
            {
              if ( *((_BYTE *)i + 57) )
              {
                CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v18, a4, 0);
                v13 = CapturedItemRootVisual;
                if ( CapturedItemRootVisual < 0 )
                {
                  v19 = 323LL;
                  goto LABEL_37;
                }
              }
            }
            CapturedItemRootVisual = CCaptureManager::_SetScreenCaptureForWindow(v18, a4, 0);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v19 = 325LL;
              goto LABEL_37;
            }
          }
          if ( v8 == a3 )
          {
            if ( *((_BYTE *)i + 56) )
            {
              if ( *((_BYTE *)i + 57) )
              {
                CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v18, v8, 1);
                v13 = CapturedItemRootVisual;
                if ( CapturedItemRootVisual < 0 )
                {
                  v19 = 333LL;
                  goto LABEL_37;
                }
              }
            }
            CapturedItemRootVisual = CCaptureManager::_SetScreenCaptureForWindow(v18, v8, 1);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v19 = 335LL;
LABEL_37:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v19,
                (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
                (const char *)(unsigned int)CapturedItemRootVisual);
              v20 = &v36;
              goto LABEL_70;
            }
          }
        }
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v36);
        v6 = a2;
      }
    }
  }
  v37 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v21 = v6;
  if ( a3 )
    v21 = a3;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v35);
  updated = CCaptureManager::_GetCapturedItemRootVisual(v22, v21, &v37, &v35, &v36);
  v13 = updated;
  if ( updated >= 0 )
  {
    v24 = (__int64 **)this[2];
    for ( j = *v24; j != (__int64 *)v24; j = (__int64 *)*j )
    {
      if ( (HWND)j[5] == a2 )
      {
        updated = CCaptureControllerProxy::SetRootVisual((CCaptureControllerProxy *)j[4], v37);
        v13 = updated;
        if ( updated < 0 )
        {
          v31 = 367LL;
          goto LABEL_69;
        }
        updated = CCaptureControllerProxy::SetReferenceVisual((CCaptureControllerProxy *)j[4], v36);
        v13 = updated;
        if ( updated < 0 )
        {
          v31 = 368LL;
          goto LABEL_69;
        }
        updated = CCaptureManager::_SendBoundsToCaptureControllerFromWindow(
                    v26,
                    v21,
                    v27,
                    (struct CCaptureControllerProxy *)j[4]);
        v13 = updated;
        if ( updated < 0 )
        {
          v31 = 369LL;
          goto LABEL_69;
        }
        updated = CCaptureManager::_UpdateCaptureControllerTransformFromWindow(
                    v28,
                    v21,
                    v29,
                    (struct CCaptureControllerProxy *)j[4]);
        v13 = updated;
        if ( updated < 0 )
        {
          v31 = 370LL;
          goto LABEL_69;
        }
        updated = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost((CCaptureManager *)this, v21);
        v13 = updated;
        if ( updated < 0 )
        {
          v31 = 371LL;
          goto LABEL_69;
        }
        if ( a4 )
        {
          if ( *((_BYTE *)j + 56) )
          {
            if ( *((_BYTE *)j + 57) )
            {
              updated = CProjectionBorderManager::_SetProjectionBorderForWindow(v30, a4, 0);
              v13 = updated;
              if ( updated < 0 )
              {
                v31 = 378LL;
                goto LABEL_69;
              }
            }
          }
          updated = CCaptureManager::_SetScreenCaptureForWindow(v30, a4, 0);
          v13 = updated;
          if ( updated < 0 )
          {
            v31 = 380LL;
            goto LABEL_69;
          }
        }
        if ( v21 == a3 )
        {
          if ( *((_BYTE *)j + 56) )
          {
            if ( *((_BYTE *)j + 57) )
            {
              updated = CProjectionBorderManager::_SetProjectionBorderForWindow(v30, v21, 1);
              v13 = updated;
              if ( updated < 0 )
              {
                v31 = 388LL;
                goto LABEL_69;
              }
            }
          }
          updated = CCaptureManager::_SetScreenCaptureForWindow(v30, v21, 1);
          v13 = updated;
          if ( updated < 0 )
          {
            v31 = 390LL;
            goto LABEL_69;
          }
        }
      }
    }
    goto LABEL_73;
  }
  if ( updated == -2147467261 )
  {
LABEL_73:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v35);
    v6 = a2;
LABEL_74:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetImpl'::`2'::impl) )
    {
      v37 = 0LL;
      CWindowList::GetSyncedWindowDataByHwnd(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
        v6,
        &v37);
      if ( v37 )
      {
        if ( *((_DWORD *)v37 + 115) )
        {
          v32 = this[18];
          for ( k = (CBaseObject ***)*v32; k != v32; k = (CBaseObject ***)*k )
          {
            if ( a4 )
              CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
                (CCaptureManager *)this,
                a4,
                0,
                (struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)(k + 3));
            if ( a3 )
              CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
                (CCaptureManager *)this,
                a3,
                1,
                (struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)(k + 3));
          }
        }
      }
    }
    v13 = 0;
    goto LABEL_85;
  }
  v31 = 398LL;
LABEL_69:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)updated);
  v20 = &v35;
LABEL_70:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v20);
LABEL_85:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v38);
  return v13;
}
