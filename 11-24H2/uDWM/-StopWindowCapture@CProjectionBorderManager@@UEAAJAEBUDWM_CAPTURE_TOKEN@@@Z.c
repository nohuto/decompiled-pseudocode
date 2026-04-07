/*
 * XREFs of ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180076840
 * Callers:
 *     ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180076480 (-OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z.c)
 *     ?StopCapturesForWindow@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x1800CD230 (-StopCapturesForWindow@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032388 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180095908 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800959AC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180097C84 (--1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180097CB0 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180098640 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param_ea_180098640.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180098690 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180098690.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800990C0 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B46CC (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800BAD70 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorde.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CEEB0 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::StopWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 Element; // rax
  CProjectionBorderManager *v7; // rcx
  CCaptureControllerProxy **v8; // rsi
  char v9; // r14
  HWND *v10; // rdi
  int ProxyWindowHandle; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  CCaptureManager *v14; // rcx
  CProjectionBorderManager *v15; // rcx
  HWND v16; // rbx
  int v17; // eax
  int v18; // edi
  HWND v20; // [rsp+20h] [rbp-E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+28h] [rbp-D8h] BYREF
  void **v22; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v23[272]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v24[8]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v25[48]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v22);
  v22 = &WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StopWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StopWindowCapture *)&v22,
    v5,
    v4);
  Element = CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
              &this[6],
              *(_QWORD *)a2);
  v8 = (CCaptureControllerProxy **)Element;
  if ( Element )
  {
    v9 = *(_BYTE *)(Element + 32);
    v10 = (HWND *)(Element + 16);
    if ( v9 )
    {
      ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, *v10, 0);
      v12 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v13 = 475LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)ProxyWindowHandle,
          (int)v20);
        goto LABEL_20;
      }
    }
    ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v7, *v10, 0);
    v12 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v13 = 477LL;
      goto LABEL_19;
    }
    v20 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v14, *v10, &v20);
    v12 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v13 = 481LL;
      goto LABEL_19;
    }
    v16 = v20;
    if ( v20 )
    {
      if ( v9 )
      {
        v17 = CProjectionBorderManager::_SetProjectionBorderForWindow(v15, v20, 0);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E6,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v17,
            (int)v20);
          v12 = v18;
LABEL_20:
          WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)&v22);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
          return v12;
        }
      }
      ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v15, v16, 0);
      v12 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v13 = 488LL;
        goto LABEL_19;
      }
    }
    ProxyWindowHandle = CCaptureControllerProxy::SetRootVisual(v8[1], 0LL);
    v12 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v13 = 493LL;
      goto LABEL_19;
    }
    ProxyWindowHandle = CCaptureControllerProxy::SetReferenceVisual(v8[1], 0LL);
    v12 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v13 = 494LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v8 + 1);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v8 + 3);
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(
      this + 6,
      (CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY *)v8);
    CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v22, 0LL);
    WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)&v22);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
    return 0LL;
  }
  else
  {
    v22 = &WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v22);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v25);
    wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v24);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(v23);
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 2147549183LL;
  }
}
