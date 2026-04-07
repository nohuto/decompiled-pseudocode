/*
 * XREFs of ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2664
 * Callers:
 *     ?SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0110 (-SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV?$unordered_map@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@5@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@@std@@AEBT_LARGE_INTEGER@@@Z @ 0x1800AB694 (--$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV-$unordered.c)
 *     ??$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x1800AC588 (--$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@-$_Hash@V-$_Umap_tra.c)
 *     ??1CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x1800AD024 (--1CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B42A4 (-_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCon.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4B88 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4EB0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B5024 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_AddDisplayCaptureEntry(
        CCaptureManager *this,
        CBaseObject *a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  float *v7; // r14
  unsigned int v8; // ebx
  const char *v10; // r9
  int updated; // eax
  CCaptureManager *v12; // rcx
  __int64 v13; // rdx
  CCaptureManager *v14; // rcx
  CCaptureManager *v15; // rcx
  _BYTE v16[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v18[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int16 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+62h] [rbp-Eh]
  __int16 v23; // [rsp+66h] [rbp-Ah]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v7 = (float *)((char *)this + 72);
  if ( MapContains<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>((__int64)this + 72, (__int64)a4) )
  {
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BA,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)0x8000FFFFLL);
    return v8;
  }
  v18[0] = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 1;
  v22 = 0;
  v23 = 0;
  v17 = *(_QWORD *)a4;
  v18[1] = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(v18, a3);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::emplace<_LARGE_INTEGER const &,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>(
    v7,
    (__int64)v16,
    (const unsigned __int8 *)a4,
    (__int64)&v17);
  if ( !v16[8] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6C2,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      v10);
  updated = CCaptureManager::_UpdateCaptureControllerTransformFromDisplay(retaddr, (HMONITOR)a2, a3);
  v8 = updated;
  if ( updated < 0 )
  {
    v13 = 1732LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)updated);
    CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)&v17);
    return v8;
  }
  updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromDisplay(v12, (HMONITOR)a2, a3);
  v8 = updated;
  if ( updated < 0 )
  {
    v13 = 1733LL;
    goto LABEL_13;
  }
  updated = CCaptureManager::_SendBoundsToCaptureControllerFromDisplay(v14, (HMONITOR)a2, a3);
  v8 = updated;
  if ( updated < 0 )
  {
    v13 = 1734LL;
    goto LABEL_13;
  }
  updated = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v15, (HMONITOR)a2, a3);
  v8 = updated;
  if ( updated < 0 )
  {
    v13 = 1735LL;
    goto LABEL_13;
  }
  CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)&v17);
  return 0LL;
}
