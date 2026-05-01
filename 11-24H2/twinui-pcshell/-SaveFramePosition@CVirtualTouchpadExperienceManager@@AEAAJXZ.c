/*
 * XREFs of ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18039F970
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18039EA58 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18039F420 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x18039CF58 (--$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEB.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x18039E700 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 *     SHRegSetBinaryData @ 0x18067A484 (SHRegSetBinaryData.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::SaveFramePosition(CVirtualTouchpadExperienceManager *this)
{
  int FramePosition; // ebx
  __int64 v3; // rdx
  HMONITOR v5; // rbx
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  RECT rc; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[64]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v14; // [rsp+94h] [rbp-6Ch]
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v16[72]; // [rsp+C8h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  rc = 0LL;
  FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition(this, (struct tagPOINT *)&rc);
  if ( FramePosition < 0 )
  {
    v3 = 497LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)FramePosition);
    return (unsigned int)FramePosition;
  }
  v12 = 1;
  memset_0(v13, 0, sizeof(v13));
  v14 = 0LL;
  v5 = MonitorFromRect(&rc, 0);
  if ( !v5 )
  {
    v7 = 500LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v6);
  }
  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( !GetMonitorInfoW(v5, &mi) )
  {
    v7 = 503LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v6);
  }
  _o_wcscpy_s(v13, 32LL, v16);
  v10 = 0;
  FramePosition = GetScaleFactorForMonitor(v5, &v10);
  if ( FramePosition < 0 )
  {
    v3 = 506LL;
    goto LABEL_3;
  }
  LODWORD(v14) = (int)(float)((float)((float)(mi.rcMonitor.right - rc.right) * 100.0) / (float)v10);
  HIDWORD(v14) = (int)(float)((float)((float)(mi.rcMonitor.bottom - rc.bottom) * 100.0) / (float)v10);
  FramePosition = SHRegSetBinaryData((unsigned int)v14, v8, v9, &v12);
  if ( FramePosition < 0 )
  {
    v3 = 510LL;
    goto LABEL_3;
  }
  TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
    &rc.left,
    &rc.right,
    (__int128 *)(*((_QWORD *)this + 81) + 8LL));
  return 0LL;
}
