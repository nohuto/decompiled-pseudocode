/*
 * XREFs of ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800D3010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM@@@details@wil@@QEAA_NXZ @ 0x180065734 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViol.c)
 *     ??1?$ComPtr@VCDrawBitmapInstruction@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B490 (--1-$ComPtr@VCDrawBitmapInstruction@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800ACD64 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800D42A0 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D4A80 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D4D6C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D4E70 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D4F90 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::UpdateProxyWindowForCapture(
        CProjectionBorderManager *this,
        HWND a2,
        HWND a3,
        HWND a4)
{
  struct _RTL_GENERIC_TABLE *v8; // r12
  HWND *v9; // rax
  HWND v10; // rsi
  CProjectionBorderManager *v11; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v13; // ebx
  CCaptureControllerProxy **v14; // rax
  CCaptureControllerProxy **v15; // rdi
  CProjectionBorderManager *v16; // rcx
  __int64 v17; // rdx
  CProjectionBorderManager *v18; // rcx
  CProjectionBorderManager *v19; // rcx
  PVOID RestartKey; // [rsp+20h] [rbp-20h] BYREF
  struct CVisualProxy *v22; // [rsp+28h] [rbp-18h] BYREF
  PVOID v23; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v8 = (struct _RTL_GENERIC_TABLE *)((char *)this + 432);
  do
  {
    v9 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(v8, &RestartKey);
    if ( !v9 )
      goto LABEL_45;
  }
  while ( v9[2] != a2 );
  v22 = 0LL;
  RestartKey = 0LL;
  v10 = a2;
  if ( a3 )
    v10 = a3;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)&RestartKey);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(
                             v11,
                             v10,
                             &v22,
                             (struct CapturedWindowSWRVisual **)&RestartKey);
  v13 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v14 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(v8, &v23);
      v15 = v14;
      if ( !v14 )
        goto LABEL_44;
      if ( v14[2] == (CCaptureControllerProxy *)a2 )
      {
        CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual(v14[1], v22);
        v13 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 682LL;
          goto LABEL_43;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(this, v10, v15[1]);
        v13 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 683LL;
          goto LABEL_43;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(this, v10);
        v13 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 684LL;
          goto LABEL_43;
        }
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::GetImpl'::`2'::impl) )
        {
          if ( a4 )
          {
            if ( *((_BYTE *)v15 + 32) )
            {
              CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v16, a4, 0);
              v13 = CapturedItemRootVisual;
              if ( CapturedItemRootVisual < 0 )
              {
                v17 = 693LL;
                goto LABEL_43;
              }
            }
            CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v16, a4, 0);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 695LL;
              goto LABEL_43;
            }
          }
          if ( v10 == a3 )
          {
            if ( *((_BYTE *)v15 + 32) )
            {
              CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v16, v10, 1);
              v13 = CapturedItemRootVisual;
              if ( CapturedItemRootVisual < 0 )
              {
                v17 = 703LL;
                goto LABEL_43;
              }
            }
            CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v16, v10, 1);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 705LL;
              goto LABEL_43;
            }
          }
        }
        else if ( *((_BYTE *)v15 + 32) )
        {
          if ( a4 )
          {
            CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v16, a4, 0);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 715LL;
              goto LABEL_43;
            }
            CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v18, a4, 0);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 716LL;
              goto LABEL_43;
            }
          }
          if ( v10 == a3 )
          {
            CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v16, v10, 1);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 722LL;
              goto LABEL_43;
            }
            CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v19, v10, 1);
            v13 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 723LL;
              goto LABEL_43;
            }
          }
        }
      }
    }
  }
  if ( CapturedItemRootVisual == -2147467261 )
  {
LABEL_44:
    Microsoft::WRL::ComPtr<CDrawBitmapInstruction>::~ComPtr<CDrawBitmapInstruction>((CBaseObject **)&RestartKey);
LABEL_45:
    v13 = 0;
    goto LABEL_46;
  }
  v17 = 733LL;
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)CapturedItemRootVisual);
  Microsoft::WRL::ComPtr<CDrawBitmapInstruction>::~ComPtr<CDrawBitmapInstruction>((CBaseObject **)&RestartKey);
LABEL_46:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v13;
}
