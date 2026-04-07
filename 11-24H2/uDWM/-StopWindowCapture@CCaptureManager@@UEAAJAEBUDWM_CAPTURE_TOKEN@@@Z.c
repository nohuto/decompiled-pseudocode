/*
 * XREFs of ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1BF0
 * Callers:
 *     ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800AEE60 (-OnProcessDisconnected@CCaptureManager@@UEAAJK@Z.c)
 *     ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z @ 0x1800B1870 (-StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Start@II@StopWindowCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800958B0 (--$Start@II@StopWindowCapture@WindowFrameLoggingTelemetry@@SA-AV01@$$QEAI0@Z.c)
 *     ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180097C84 (--1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$_Find@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC1E0 (--$_Find@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CC.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800ACCA4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBT_LARGE_I_ea_1800ACCA4.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800B3714 (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B46CC (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::StopWindowCapture(CCaptureManager *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  CCaptureManager *v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int ProxyWindowHandle; // eax
  CProjectionBorderManager *v12; // rcx
  HWND v13; // rsi
  char v14; // r14
  CCaptureManager *v15; // rcx
  HWND v17; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+40h] [rbp-C0h]
  __int64 v21[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v19[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = *(_DWORD *)a2;
  LODWORD(v17) = *((_DWORD *)a2 + 1);
  WindowFrameLoggingTelemetry::StopWindowCapture::Start<unsigned int,unsigned int>(
    (WindowFrameLoggingTelemetry::StopWindowCapture *)v21,
    (unsigned int *)&v17,
    &v18);
  v19[1] = (struct _RTL_CRITICAL_SECTION *)v21;
  v20 = 1;
  v4 = std::_Hash_representation<__int64>((const unsigned __int8 *)a2);
  v5 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Find<_LARGE_INTEGER>(
         (__int64)this + 8,
         (__int64)a2,
         v4);
  v7 = v5;
  if ( v5 != *((_QWORD *)this + 2) )
  {
    v17 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v6, *(HWND *)(v5 + 40), &v17);
    v8 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v10 = 154LL;
LABEL_5:
      v9 = (unsigned int)ProxyWindowHandle;
      goto LABEL_6;
    }
    v13 = v17;
    if ( *(_BYTE *)(v7 + 57) )
    {
      v14 = *(_BYTE *)(v7 + 56);
      if ( v14 )
      {
        ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v12, *(HWND *)(v7 + 40), 0);
        v8 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v10 = 163LL;
          goto LABEL_5;
        }
      }
      if ( v13 )
      {
        if ( v14 )
        {
          ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v12, v13, 0);
          v8 = ProxyWindowHandle;
          if ( ProxyWindowHandle < 0 )
          {
            v10 = 169LL;
            goto LABEL_5;
          }
        }
      }
    }
    ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v12, *(HWND *)(v7 + 40), 0);
    v8 = ProxyWindowHandle;
    if ( ProxyWindowHandle >= 0 )
    {
      if ( v13
        && (ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v15, v13, 0),
            v8 = ProxyWindowHandle,
            ProxyWindowHandle < 0) )
      {
        v10 = 177LL;
      }
      else
      {
        ProxyWindowHandle = CCaptureControllerProxy::SetRootVisual(*(CCaptureControllerProxy **)(v7 + 32), 0LL);
        v8 = ProxyWindowHandle;
        if ( ProxyWindowHandle >= 0 )
        {
          ProxyWindowHandle = CCaptureControllerProxy::SetReferenceVisual(*(CCaptureControllerProxy **)(v7 + 32), 0LL);
          v8 = ProxyWindowHandle;
          if ( ProxyWindowHandle >= 0 )
          {
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)(v7 + 32));
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)(v7 + 48));
            std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>>>,0>(
              (_QWORD *)this + 1,
              &v17,
              v7);
            CCaptureManager::_EnsureCursorStateForCapture(this);
            v8 = 0;
            goto LABEL_25;
          }
          v10 = 183LL;
        }
        else
        {
          v10 = 182LL;
        }
      }
    }
    else
    {
      v10 = 174LL;
    }
    goto LABEL_5;
  }
  v8 = -2147024809;
  v9 = 2147942487LL;
  v10 = 149LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v9);
LABEL_25:
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v21, 0);
  WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)v21);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v19);
  return v8;
}
