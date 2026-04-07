/*
 * XREFs of ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D2920
 * Callers:
 *     ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180063F00 (-OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z.c)
 *     ?StopCapturesForWindow@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180065560 (-StopCapturesForWindow@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800ACD64 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800B5364 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorde.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CF7FC (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800CFA64 (--1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CFFF8 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800D0FAC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1970 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800D3E5C (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D4564 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D4D6C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D4E70 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectionBorderManager::StopWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  int v4; // edi
  int v5; // ebx
  char *Element; // rax
  CProjectionBorderManager *v7; // rcx
  CBaseObject **v8; // rsi
  char v9; // r14
  HWND *v10; // rdi
  int ProxyWindowHandle; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  CProjectionBorderManager *v14; // rcx
  CProjectionBorderManager *v15; // rcx
  HWND v16; // rbx
  int v17; // eax
  int v18; // edi
  int v20[2]; // [rsp+20h] [rbp-E0h] BYREF
  HWND v21; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v22[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *(_QWORD *)v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"StopWindowCapture");
  v22[0] = (__int64)&WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StopWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StopWindowCapture *)v22,
    v5,
    v4);
  Element = (char *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a2);
  v8 = (CBaseObject **)Element;
  if ( Element )
  {
    v9 = Element[32];
    v10 = (HWND *)(Element + 16);
    if ( v9 )
    {
      ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, *v10, 0);
      v12 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v13 = 477LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)ProxyWindowHandle);
        goto LABEL_18;
      }
    }
    ProxyWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v7, *v10, 0);
    v12 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v13 = 479LL;
      goto LABEL_17;
    }
    v21 = 0LL;
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v14, *v10, &v21);
    v12 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v13 = 483LL;
      goto LABEL_17;
    }
    v16 = v21;
    if ( v21 )
    {
      if ( v9 )
      {
        v17 = CProjectionBorderManager::_SetProjectionBorderForWindow(v15, v21, 0);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E8,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v17);
          v12 = v18;
LABEL_18:
          WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)v22);
          CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v20);
          return v12;
        }
      }
      ProxyWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v15, v16, 0);
      v12 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v13 = 490LL;
        goto LABEL_17;
      }
    }
    ProxyWindowHandle = CCaptureControllerProxy::SetRootVisual(v8[1], 0LL);
    v12 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v13 = 495LL;
      goto LABEL_17;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v8 + 1);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v8 + 3);
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(this + 6, v8);
    CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v22, 0);
    WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)v22);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v20);
    return 0LL;
  }
  else
  {
    WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)v22);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v20);
    return 2147549183LL;
  }
}
