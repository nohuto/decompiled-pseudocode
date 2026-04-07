/*
 * XREFs of ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800B27DC
 * Callers:
 *     ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0260 (-SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV?$unordered_map@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@5@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@@std@@AEBT_LARGE_INTEGER@@@Z @ 0x1800AB694 (--$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV-$unordered.c)
 *     ??$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x1800AC74C (--$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@-$_Hash@V-$.c)
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x1800AD078 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B42A4 (-_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCon.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4B88 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4EB0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B5024 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_AddFilteredDisplayCaptureEntry(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        struct CContainerVisualProxy *a5)
{
  float *v8; // r14
  unsigned int v9; // ebx
  const char *v11; // r9
  int updated; // eax
  CCaptureManager *v13; // rcx
  __int64 v14; // rdx
  CCaptureManager *v15; // rcx
  CCaptureManager *v16; // rcx
  _BYTE v17[16]; // [rsp+28h] [rbp-31h] BYREF
  __int64 v18; // [rsp+38h] [rbp-21h] BYREF
  CBaseObject *v19; // [rsp+40h] [rbp-19h] BYREF
  __int128 v20; // [rsp+48h] [rbp-11h]
  __int128 v21; // [rsp+58h] [rbp-1h]
  __int16 v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ah] [rbp+11h]
  __int16 v24; // [rsp+6Eh] [rbp+15h]
  CBaseObject *v25; // [rsp+70h] [rbp+17h] BYREF
  __int128 v26; // [rsp+78h] [rbp+1Fh]
  __int128 v27; // [rsp+88h] [rbp+2Fh]
  __int128 v28; // [rsp+98h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  v8 = (float *)((char *)this + 136);
  if ( MapContains<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>((__int64)this + 136, (__int64)a4) )
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7EC,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)0x8000FFFFLL);
    return v9;
  }
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 1;
  v23 = 0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v18 = *(_QWORD *)a4;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v19, a3);
  *(_QWORD *)&v20 = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v25, a5);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>>,0>>::emplace<_LARGE_INTEGER const &,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>(
    v8,
    (__int64)v17,
    (unsigned __int8 *)a4,
    (__int64)&v18);
  if ( !v17[8] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7F5,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      v11);
  updated = CCaptureManager::_UpdateCaptureControllerTransformFromDisplay(retaddr, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v14 = 2039LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)updated);
    CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)&v18);
    return v9;
  }
  updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromDisplay(v13, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v14 = 2040LL;
    goto LABEL_13;
  }
  updated = CCaptureManager::_SendBoundsToCaptureControllerFromDisplay(v15, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v14 = 2041LL;
    goto LABEL_13;
  }
  updated = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v16, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v14 = 2042LL;
    goto LABEL_13;
  }
  CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)&v18);
  return 0LL;
}
