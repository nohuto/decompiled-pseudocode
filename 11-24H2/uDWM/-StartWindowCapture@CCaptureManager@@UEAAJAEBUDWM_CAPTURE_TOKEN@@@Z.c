/*
 * XREFs of ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$Start@AEAPEAUHWND__@@II@StartWindowCapture@WindowFrameLoggingTelemetry@@SA?AV01@AEAPEAUHWND__@@$$QEAI1@Z @ 0x1800AB738 (--$Start@AEAPEAUHWND__@@II@StartWindowCapture@WindowFrameLoggingTelemetry@@SA-AV01@AEAPEAUHWND__.c)
 *     ??$_Find@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC1E0 (--$_Find@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CC.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD138 (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800B3714 (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::StartWindowCapture(CCaptureManager *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  HWND v7; // r14
  CCaptureManager *v8; // rcx
  int ProxyWindowHandle; // eax
  CProjectionBorderManager *v10; // rcx
  __int64 v11; // rdx
  HWND v12; // rsi
  CProjectionBorderManager *v13; // rcx
  char v14; // dl
  HWND v16; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+40h] [rbp-C0h]
  _BYTE v20[336]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v18[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = std::_Hash_representation<__int64>((const unsigned __int8 *)a2);
  v5 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Find<_LARGE_INTEGER>(
         (__int64)this + 8,
         (__int64)a2,
         v4);
  if ( v5 != *((_QWORD *)this + 2) )
  {
    v17 = *(_DWORD *)a2;
    LODWORD(v16) = *((_DWORD *)a2 + 1);
    WindowFrameLoggingTelemetry::StartWindowCapture::Start<HWND__ * &,unsigned int,unsigned int>(
      (WindowFrameLoggingTelemetry::StartWindowCapture *)v20,
      (HWND *)(v5 + 40),
      (unsigned int *)&v16,
      &v17);
    v18[1] = (struct _RTL_CRITICAL_SECTION *)v20;
    v19 = 1;
    v7 = *(HWND *)(v5 + 40);
    v16 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v8, v7, &v16);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v11 = 101LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v20, 0LL);
      WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v20);
      goto LABEL_24;
    }
    v12 = v16;
    if ( !v16 )
      v12 = v7;
    if ( *(_BYTE *)(v5 + 56) )
    {
      ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v10, v12, 1);
      v6 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v11 = 111LL;
        goto LABEL_5;
      }
      if ( v12 != v7 )
      {
        ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v13, v7, 1);
        v6 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v11 = 114LL;
          goto LABEL_5;
        }
      }
    }
    v16 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v12,
      (struct CWindowData **)&v16);
    if ( !v16
      || !*((_QWORD *)v16 + 55)
      || (((_BYTE)v16[184] & 1) == 0 || (*((_BYTE *)v16 + 739) & 0x40) != 0 || ((_DWORD)v16[29] & 0x20000000) != 0
        ? (v14 = 0)
        : (v14 = 1),
          ProxyWindowHandle = CCaptureControllerProxy::SetCaptureState(*(CCaptureControllerProxy **)(v5 + 32), v14),
          v6 = ProxyWindowHandle,
          ProxyWindowHandle >= 0) )
    {
      *(_BYTE *)(v5 + 57) = 1;
      CCaptureManager::_EnsureCursorStateForCapture(this);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v20, 0LL);
      WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v20);
      v6 = 0;
      goto LABEL_24;
    }
    v11 = 126LL;
    goto LABEL_5;
  }
  v6 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x56,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x80070057LL);
LABEL_24:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v18);
  return v6;
}
