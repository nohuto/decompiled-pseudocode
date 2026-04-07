/*
 * XREFs of ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1980
 * Callers:
 *     ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800AEE60 (-OnProcessDisconnected@CCaptureManager@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA?AV01@$$QEAI0@Z @ 0x1800AB7A4 (--$Start@II@StopDisplayCapture@WindowFrameLoggingTelemetry@@SA-AV01@$$QEAI0@Z.c)
 *     ??$_Find@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC1E0 (--$_Find@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CC.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800ACB6C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBT_LARGE_INTEGER@@UCAPT.c)
 *     ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800AD164 (--1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B0ED0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800B3714 (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?_RemoveVisuals@CCaptureManager@@AEAAXAEAV?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800B420C (-_RemoveVisuals@CCaptureManager@@AEAAXAEAV-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::StopDisplayCapture(CCaptureManager *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+40h] [rbp-C0h]
  __int64 v17[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v15[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = *(_DWORD *)a2;
  LODWORD(v14) = *((_DWORD *)a2 + 1);
  WindowFrameLoggingTelemetry::StopDisplayCapture::Start<unsigned int,unsigned int>(
    (WindowFrameLoggingTelemetry::StopDisplayCapture *)v17,
    (unsigned int *)&v14,
    (unsigned int *)&v13);
  v15[1] = (struct _RTL_CRITICAL_SECTION *)v17;
  v16 = 1;
  v4 = std::_Hash_representation<__int64>((const unsigned __int8 *)a2);
  v5 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Find<_LARGE_INTEGER>(
         (__int64)this + 72,
         (__int64)a2,
         v4);
  v6 = v5;
  if ( v5 == *((_QWORD *)this + 10) )
  {
    v7 = -2147024809;
    v8 = 2147942487LL;
    v9 = 270LL;
  }
  else
  {
    v10 = CCaptureControllerProxy::SetRootVisual(*(CCaptureControllerProxy **)(v5 + 32), 0LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      CCaptureManager::_RemoveVisuals(v11, v6 + 48);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)(v6 + 32));
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>>>,0>(
        (_QWORD *)this + 9,
        &v14,
        v6);
      CCaptureManager::_EnsureCursorStateForCapture(this);
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v10;
    v9 = 275LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v8);
LABEL_7:
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17, 0);
  WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)v17);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v15);
  return v7;
}
