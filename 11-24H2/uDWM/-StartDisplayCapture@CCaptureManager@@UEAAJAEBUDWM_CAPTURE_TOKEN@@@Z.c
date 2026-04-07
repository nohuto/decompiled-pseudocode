/*
 * XREFs of ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B09D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHMONITOR__@@$$QEAI1@Z @ 0x1800AB6CC (--$Start@AEAPEAUHMONITOR__@@II@StartDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@AEAPEAUH.c)
 *     ??$_Find@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC1E0 (--$_Find@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CC.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD10C (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2980 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2A88 (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800B3714 (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::StartDisplayCapture(CCaptureManager *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdi
  CCaptureManager *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-DCh] BYREF
  HMONITOR v14; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+40h] [rbp-C0h]
  _BYTE v17[336]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v15[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = std::_Hash_representation<__int64>((const unsigned __int8 *)a2);
  v5 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Find<_LARGE_INTEGER>(
         (__int64)this + 72,
         (__int64)a2,
         v4);
  if ( v5 != *((_QWORD *)this + 10) )
  {
    v7 = v5 + 24;
    v14 = *(HMONITOR *)(v5 + 40);
    v12 = *(_DWORD *)a2;
    v13 = *((_DWORD *)a2 + 1);
    WindowFrameLoggingTelemetry::StartDisplayCapture::Start<HMONITOR__ * &,unsigned int,unsigned int>(
      (WindowFrameLoggingTelemetry::StartDisplayCapture *)v17,
      &v14,
      &v13,
      (unsigned int *)&v12);
    v15[1] = (struct _RTL_CRITICAL_SECTION *)v17;
    v16 = 1;
    if ( *(_BYTE *)(v7 + 48) )
    {
      if ( v14 )
      {
        v9 = CCaptureManager::_AddProjectionBorderForDisplay(
               v8,
               v14,
               (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)v7);
        v6 = v9;
        if ( v9 < 0 )
        {
          v10 = 240LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v9);
          wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v17,
            0LL);
          WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v17);
          goto LABEL_13;
        }
      }
      else
      {
        v9 = CCaptureManager::_AddProjectionBorderForAllDisplays(
               v8,
               (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)v7);
        v6 = v9;
        if ( v9 < 0 )
        {
          v10 = 244LL;
          goto LABEL_7;
        }
      }
    }
    v9 = CCaptureControllerProxy::SetCaptureState(*(CCaptureControllerProxy **)(v7 + 8), 1);
    v6 = v9;
    if ( v9 >= 0 )
    {
      *(_BYTE *)(v7 + 49) = 1;
      CCaptureManager::_EnsureCursorStateForCapture(this);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, 0LL);
      WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v17);
      v6 = 0;
      goto LABEL_13;
    }
    v10 = 248LL;
    goto LABEL_7;
  }
  v6 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDF,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x80070057LL);
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v15);
  return v6;
}
