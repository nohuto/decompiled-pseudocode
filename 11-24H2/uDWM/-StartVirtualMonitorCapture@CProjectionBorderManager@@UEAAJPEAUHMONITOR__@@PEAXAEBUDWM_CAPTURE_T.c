/*
 * XREFs of ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x18008AF50 (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098700 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHMONITOR__@@$$QEAI1@Z @ 0x1800AB6CC (--$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@AEAPEAUH.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD10C (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800B61BC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 *     ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800BA6FC (-IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CE0F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::StartVirtualMonitorCapture(
        CProjectionBorderManager *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  CBaseObject *v7; // rdi
  int IsMonitorVirtual; // eax
  int v9; // ebx
  int v10; // r9d
  int v11; // eax
  CProjectionBorderManager *v12; // rcx
  int DesktopRootVisual; // eax
  unsigned int v15; // [rsp+20h] [rbp-E0h]
  bool v16; // [rsp+30h] [rbp-D0h] BYREF
  CBaseObject *v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-BCh] BYREF
  HMONITOR v20; // [rsp+48h] [rbp-B8h] BYREF
  struct CVisualProxy *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23[42]; // [rsp+60h] [rbp-A0h] BYREF

  v20 = a2;
  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v16 = 0;
  v18 = *(_DWORD *)a4;
  v19 = *((_DWORD *)a4 + 1);
  WindowFrameLoggingTelemetry::StartDisplayCapture::Start<HMONITOR__ * &,unsigned int,unsigned int>(
    (WindowFrameLoggingTelemetry::StartDisplayCapture *)v23,
    &v20,
    &v19,
    &v18);
  IsMonitorVirtual = CDesktopManager::IsMonitorVirtual(
                       (CDWMDXGIEnumeration **)CDesktopManager::s_pDesktopManagerInstance,
                       v20,
                       &v16);
  v9 = IsMonitorVirtual;
  if ( IsMonitorVirtual < 0 )
  {
    v15 = 599;
LABEL_17:
    v10 = IsMonitorVirtual;
    goto LABEL_18;
  }
  if ( v16 )
  {
    if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement() )
    {
      v9 = -2147418113;
      v15 = 608;
      goto LABEL_4;
    }
    v11 = CCompositor::CreateCaptureControllerProxyFromSharedHandle(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
            (__int64)a3,
            &v17);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x263u, 0LL);
    }
    else
    {
      DesktopRootVisual = CProjectionBorderManager::_GetDesktopRootVisual(v12, &v21);
      v9 = DesktopRootVisual;
      if ( DesktopRootVisual >= 0 )
      {
        v7 = v17;
        IsMonitorVirtual = CCaptureControllerProxy::SetRootVisual(v17, v21);
        v9 = IsMonitorVirtual;
        if ( IsMonitorVirtual < 0 )
        {
          v15 = 614;
        }
        else
        {
          IsMonitorVirtual = CProjectionBorderManager::_AddDisplayCaptureEntry(this, v20, v7, a4, 0);
          v9 = IsMonitorVirtual;
          if ( IsMonitorVirtual >= 0 )
            goto LABEL_19;
          v15 = 616;
        }
        goto LABEL_17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopRootVisual, 0x265u, 0LL);
    }
    v7 = v17;
    goto LABEL_19;
  }
  v9 = -2147024891;
  v15 = 603;
LABEL_4:
  v10 = v9;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v15, 0LL);
LABEL_19:
  if ( a3 )
    CloseHandle(a3);
  if ( v7 && v9 < 0 )
    CBaseObject::Release(v7);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23, v9);
  WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v23);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)v9;
}
