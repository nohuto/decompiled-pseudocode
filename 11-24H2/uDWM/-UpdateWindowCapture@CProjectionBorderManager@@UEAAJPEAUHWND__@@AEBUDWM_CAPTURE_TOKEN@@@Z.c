/*
 * XREFs of ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CDC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180095908 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800990C0 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B3F60 (-_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B46CC (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ??1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CB4AC (--1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800CC558 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800CF28C (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_GetWindowFromCaptureToken@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@PEAPEAUHWND__@@@Z @ 0x1800CF41C (-_GetWindowFromCaptureToken@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@PEAPEAUHWND__@.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF6C0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFB14 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D0080 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProjectionBorderManager::UpdateWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  int v6; // edi
  int v7; // ebx
  CCaptureManager *v8; // rcx
  int HostWindowHandle; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  CCaptureManager *v12; // rcx
  HWND v13; // rdi
  HWND v14; // rbx
  CProjectionBorderManager *v15; // rcx
  int CapturedItemRootVisual; // esi
  __int64 v17; // rdx
  struct CapturedWindowRepresentation *v18; // r8
  CCaptureControllerProxy **Element; // rsi
  int v20; // r15d
  __int64 v21; // rdx
  CProjectionBorderManager *v22; // rcx
  CProjectionBorderManager *v23; // rcx
  int v24; // eax
  unsigned int v25; // edi
  struct CapturedWindowRepresentation *v27; // [rsp+30h] [rbp-D0h] BYREF
  HWND v28; // [rsp+38h] [rbp-C8h] BYREF
  HWND v29; // [rsp+40h] [rbp-C0h] BYREF
  struct CVisualProxy *v30; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualProxy *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33[42]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v30 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"UpdateWindowCapture");
  v33[0] = (__int64)&WindowFrameLoggingTelemetry::UpdateWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::UpdateWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::UpdateWindowCapture *)v33,
    a2,
    v7,
    v6);
  v28 = 0LL;
  HostWindowHandle = CCaptureManager::_GetHostWindowHandle(v8, a2, &v28);
  v10 = HostWindowHandle;
  if ( HostWindowHandle >= 0 )
  {
    v29 = 0LL;
    HostWindowHandle = CProjectionBorderManager::_GetWindowFromCaptureToken((CProjectionBorderManager *)this, a3, &v29);
    v10 = HostWindowHandle;
    if ( HostWindowHandle < 0 )
    {
      v11 = 406LL;
      goto LABEL_5;
    }
    if ( !v29 )
    {
      v10 = -2147024809;
      goto LABEL_39;
    }
    v13 = v28;
    if ( v29 != v28 )
    {
      v28 = 0LL;
      HostWindowHandle = CCaptureManager::_GetProxyWindowHandle(v12, v13, &v28);
      v10 = HostWindowHandle;
      if ( HostWindowHandle < 0 )
      {
        v11 = 419LL;
        goto LABEL_5;
      }
      v14 = v28;
      if ( !v28 )
        v14 = v13;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v27);
      CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v15, v14, &v30, &v27, &v31);
      if ( CapturedItemRootVisual < 0 )
      {
        v17 = 426LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)CapturedItemRootVisual);
        v10 = CapturedItemRootVisual;
        goto LABEL_39;
      }
      v18 = v27;
      v27 = 0LL;
      CapturedItemRootVisual = CProjectionBorderManager::_UpdateTabGroupMap(
                                 (CProjectionBorderManager *)this,
                                 v13,
                                 v18,
                                 a3);
      if ( CapturedItemRootVisual < 0 )
      {
        v17 = 427LL;
        goto LABEL_15;
      }
      Element = (CCaptureControllerProxy **)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                                              this + 6,
                                              *(_QWORD *)a3);
      v20 = CCaptureControllerProxy::SetRootVisual(Element[1], v30);
      if ( v20 < 0 )
      {
        v21 = 432LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v20);
        v10 = v20;
        goto LABEL_39;
      }
      v20 = CCaptureControllerProxy::SetReferenceVisual(Element[1], v31);
      if ( v20 < 0 )
      {
        v21 = 433LL;
        goto LABEL_20;
      }
      v20 = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
              (CProjectionBorderManager *)this,
              v14,
              Element[1]);
      if ( v20 < 0 )
      {
        v21 = 435LL;
        goto LABEL_20;
      }
      if ( *((_BYTE *)Element + 32) )
      {
        v20 = CProjectionBorderManager::_SetProjectionBorderForWindow(v22, v14, 1);
        if ( v20 < 0 )
        {
          v21 = 440LL;
          goto LABEL_20;
        }
      }
      v20 = CCaptureManager::_SetScreenCaptureForWindow(v22, v14, 1);
      if ( v20 < 0 )
      {
        v21 = 442LL;
        goto LABEL_20;
      }
      if ( v14 != v13 )
      {
        if ( *((_BYTE *)Element + 32) )
        {
          CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v23, v13, 1);
          if ( CapturedItemRootVisual < 0 )
          {
            v17 = 447LL;
            goto LABEL_15;
          }
        }
        v24 = CCaptureManager::_SetScreenCaptureForWindow(v23, v13, 1);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C1,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v24);
          v10 = v25;
          goto LABEL_39;
        }
      }
      HostWindowHandle = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
                           (CProjectionBorderManager *)this,
                           v14);
      v10 = HostWindowHandle;
      if ( HostWindowHandle < 0 )
      {
        v11 = 451LL;
        goto LABEL_5;
      }
    }
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v33, 0);
    v10 = 0;
    goto LABEL_39;
  }
  v11 = 403LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)HostWindowHandle);
LABEL_39:
  WindowFrameLoggingTelemetry::UpdateWindowCapture::~UpdateWindowCapture((WindowFrameLoggingTelemetry::UpdateWindowCapture *)v33);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v27);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return v10;
}
