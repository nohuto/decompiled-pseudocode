/*
 * XREFs of ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ??$_Find@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC1E0 (--$_Find@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CC.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2980 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2A88 (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800B3714 (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x1800B5440 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::StartFilteredDisplayCapture(
        CCaptureManager *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v5; // rax
  __int64 v6; // rax
  CCaptureManager *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdi
  HMONITOR v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl) )
    return 2147942405LL;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = std::_Hash_representation<__int64>((const unsigned __int8 *)a2);
  v6 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Find<_LARGE_INTEGER>(
         (__int64)this + 136,
         (__int64)a2,
         v5);
  if ( v6 != *((_QWORD *)this + 18) )
  {
    v11 = v6 + 24;
    v12 = *(HMONITOR *)(v6 + 40);
    if ( *(_BYTE *)(v6 + 72) )
    {
      if ( v12 )
      {
        v13 = CCaptureManager::_AddProjectionBorderForDisplay(
                v7,
                v12,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)(v6 + 24));
        v8 = v13;
        if ( v13 < 0 )
        {
          v10 = 866LL;
LABEL_9:
          v9 = (unsigned int)v13;
          goto LABEL_10;
        }
      }
      else
      {
        v13 = CCaptureManager::_AddProjectionBorderForAllDisplays(
                v7,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)(v6 + 24));
        v8 = v13;
        if ( v13 < 0 )
        {
          v10 = 870LL;
          goto LABEL_9;
        }
      }
    }
    v13 = CCaptureControllerProxy::SetCaptureState(*(CCaptureControllerProxy **)(v11 + 8), 1);
    v8 = v13;
    if ( v13 >= 0 )
    {
      *(_BYTE *)(v11 + 49) = 1;
      CCaptureManager::_EnsureCursorStateForCapture(this);
      v8 = 0;
      goto LABEL_16;
    }
    v10 = 874LL;
    goto LABEL_9;
  }
  v8 = -2147024809;
  v9 = 2147942487LL;
  v10 = 858LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v9);
LABEL_16:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v8;
}
