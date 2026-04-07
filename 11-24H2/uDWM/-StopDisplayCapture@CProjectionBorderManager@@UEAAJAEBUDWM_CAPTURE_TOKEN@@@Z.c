/*
 * XREFs of ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CD3A0
 * Callers:
 *     ?OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z @ 0x180076480 (-OnProcessDisconnected@CProjectionBorderManager@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008AE50 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098700 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800AB7A4 (--$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@$$QEAI0@Z.c)
 *     ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD164 (--1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800BACF0 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CEEB0 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::StopDisplayCapture(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  CBaseObject **Element; // rax
  CBaseObject **v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v11; // [rsp+24h] [rbp-DCh] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *(_DWORD *)a2;
  v11 = *((_DWORD *)a2 + 1);
  WindowFrameLoggingTelemetry::StopDisplayCapture::Start<unsigned int,unsigned int>(
    (WindowFrameLoggingTelemetry::StopDisplayCapture *)v13,
    &v11,
    (unsigned int *)&v10);
  Element = (CBaseObject **)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement();
  v5 = Element;
  if ( Element )
  {
    v6 = CCaptureControllerProxy::SetRootVisual(Element[1], 0LL);
    v8 = v6;
    if ( v6 >= 0 )
    {
      CProjectionBorderManager::_RemoveVisuals(v7, (__int64)(v5 + 3));
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v5 + 1);
      CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::RemoveElement(
        this + 7,
        (CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)v5);
      CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, 0);
      WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v13);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x237,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v6);
      WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v13);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
      return v8;
    }
  }
  else
  {
    WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v13);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 2147549183LL;
  }
}
