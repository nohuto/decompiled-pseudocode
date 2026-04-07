/*
 * XREFs of ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCC70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800990C0 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$Start@AEAPEAUHWND__@@II@StartWindowCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHWND__@@$$QEAI1@Z @ 0x1800AB738 (--$Start@AEAPEAUHWND__@@II@StartWindowCapture@WindowFrameLoggingTelemetry@@SA-AV01@AEAPEAUHWND__.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD138 (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B3F60 (-_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B46CC (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800B61BC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CE81C (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresent.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800CF28C (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFB14 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::StartWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  CCaptureControllerProxy *v7; // rdi
  int v8; // ebx
  int v9; // r9d
  int v10; // eax
  CCaptureManager *v11; // rcx
  int HostWindowHandle; // eax
  CCaptureManager *v13; // rcx
  int ProxyWindowHandle; // eax
  HWND v15; // rsi
  CProjectionBorderManager *v16; // rcx
  int CapturedItemRootVisual; // eax
  int updated; // eax
  struct CapturedWindowRepresentation *v19; // r8
  CProjectionBorderManager *v20; // rcx
  CCaptureManager *v21; // rcx
  CProjectionBorderManager *v22; // rcx
  CCaptureManager *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  HWND v26; // [rsp+30h] [rbp-D0h] BYREF
  CCaptureControllerProxy *v27; // [rsp+38h] [rbp-C8h] BYREF
  struct CapturedWindowRepresentation *v28; // [rsp+40h] [rbp-C0h] BYREF
  HWND v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  struct CVisualProxy *v31; // [rsp+58h] [rbp-A8h] BYREF
  struct CVisualProxy *v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34[42]; // [rsp+70h] [rbp-90h] BYREF

  v29 = a2;
  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v31 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  v30 = *(_DWORD *)a4;
  LODWORD(v26) = *((_DWORD *)a4 + 1);
  WindowFrameLoggingTelemetry::StartWindowCapture::Start<HWND__ * &,unsigned int,unsigned int>(
    (WindowFrameLoggingTelemetry::StartWindowCapture *)v34,
    &v29,
    (unsigned int *)&v26,
    &v30);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         this + 6,
         *(_QWORD *)a4) )
  {
    v8 = -2147418113;
    v25 = 328;
    v9 = -2147418113;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v25, 0LL);
    goto LABEL_33;
  }
  v10 = CCompositor::CreateCaptureControllerProxyFromSharedHandle(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          (__int64)a3,
          &v27);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x14Bu, 0LL);
    goto LABEL_32;
  }
  v26 = 0LL;
  HostWindowHandle = CCaptureManager::_GetHostWindowHandle(v11, v29, &v26);
  v8 = HostWindowHandle;
  if ( HostWindowHandle < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, HostWindowHandle, 0x152u, 0LL);
    goto LABEL_32;
  }
  v29 = 0LL;
  ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v13, v26, &v29);
  v8 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyWindowHandle, 0x156u, 0LL);
    goto LABEL_32;
  }
  v15 = v29;
  if ( !v29 )
    v15 = v26;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v28);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v16, v15, &v31, &v28, &v32);
  v8 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CapturedItemRootVisual, 0x15Eu, 0LL);
LABEL_32:
    v7 = v27;
    goto LABEL_33;
  }
  v7 = v27;
  updated = CCaptureControllerProxy::SetRootVisual(v27, v31);
  v8 = updated;
  if ( updated < 0 )
  {
    v25 = 352;
    goto LABEL_27;
  }
  updated = CCaptureControllerProxy::SetReferenceVisual(v7, v32);
  v8 = updated;
  if ( updated < 0 )
  {
    v25 = 353;
    goto LABEL_27;
  }
  v19 = v28;
  v28 = 0LL;
  updated = CProjectionBorderManager::_AddTabGroupCaptureEntry((CProjectionBorderManager *)this, v26, v19, v7, a4);
  v8 = updated;
  if ( updated < 0 )
  {
    v25 = 356;
    goto LABEL_27;
  }
  updated = CProjectionBorderManager::_SetProjectionBorderForWindow(v20, v15, 1);
  v8 = updated;
  if ( updated < 0 )
  {
    v25 = 358;
    goto LABEL_27;
  }
  updated = CCaptureManager::_SetScreenCaptureForWindow(v21, v15, 1);
  v8 = updated;
  if ( updated < 0 )
  {
    v25 = 359;
    goto LABEL_27;
  }
  if ( v15 != v26 )
  {
    updated = CProjectionBorderManager::_SetProjectionBorderForWindow(v22, v26, 1);
    v8 = updated;
    if ( updated < 0 )
    {
      v25 = 362;
      goto LABEL_27;
    }
    updated = CCaptureManager::_SetScreenCaptureForWindow(v23, v26, 1);
    v8 = updated;
    if ( updated < 0 )
    {
      v25 = 363;
LABEL_27:
      v9 = updated;
      goto LABEL_3;
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost((CProjectionBorderManager *)this, v15);
  v8 = updated;
  if ( updated < 0 )
  {
    v25 = 365;
    goto LABEL_27;
  }
LABEL_33:
  if ( a3 )
    CloseHandle(a3);
  if ( v7 && v8 < 0 )
    CBaseObject::Release(v7);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v34, v8);
  WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v34);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v28);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return (unsigned int)v8;
}
