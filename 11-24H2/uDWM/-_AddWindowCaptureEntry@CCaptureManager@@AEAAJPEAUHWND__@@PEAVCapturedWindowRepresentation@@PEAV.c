/*
 * XREFs of ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2F78
 * Callers:
 *     ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0490 (-SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009AB20 (--1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??$?0AEBT_LARGE_INTEGER@@AEAUCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@$0A@@?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@QEAA@AEBT_LARGE_INTEGER@@AEAUCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@Z @ 0x1800AB4FC (--$-0AEBT_LARGE_INTEGER@@AEAUCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@$0A@@-$pair@$$CBT_LARGE_I.c)
 *     ??$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV?$unordered_map@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@5@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@@std@@AEBT_LARGE_INTEGER@@@Z @ 0x1800AB694 (--$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV-$unordered.c)
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x1800AC90C (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@-$_Has.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B4330 (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4C54 (-_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureC.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B50E4 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_AddWindowCaptureEntry(
        CCaptureManager *this,
        CBaseObject *a2,
        struct CapturedWindowRepresentation *a3,
        struct CCaptureControllerProxy *a4,
        const struct DWM_CAPTURE_TOKEN *a5)
{
  float *v8; // r14
  unsigned int v9; // ebx
  CCaptureManager *v10; // rcx
  bool v11; // r8
  int updated; // eax
  CCaptureManager *v13; // rcx
  bool v14; // r8
  __int64 v15; // rdx
  CCaptureManager *v16; // rcx
  _BYTE v18[16]; // [rsp+28h] [rbp-31h] BYREF
  CBaseObject *v19; // [rsp+38h] [rbp-21h] BYREF
  CBaseObject *v20[2]; // [rsp+40h] [rbp-19h] BYREF
  CBaseObject *v21; // [rsp+50h] [rbp-9h] BYREF
  __int16 v22; // [rsp+58h] [rbp-1h]
  int v23; // [rsp+5Ah] [rbp+1h]
  __int16 v24; // [rsp+5Eh] [rbp+5h]
  __int64 v25; // [rsp+60h] [rbp+7h] BYREF
  CBaseObject *v26; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  v8 = (float *)((char *)this + 8);
  if ( !MapContains<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>((__int64)this + 8, (__int64)a5) )
  {
    v20[0] = 0LL;
    v21 = 0LL;
    v22 = 1;
    v23 = 0;
    v24 = 0;
    v19 = *(CBaseObject **)a5;
    v20[1] = a2;
    Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(v20, a4);
    Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v21, a3);
    std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>(
      &v25,
      a5,
      (__int64)&v19);
    std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::emplace<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>(
      v8,
      (__int64)v18,
      (const unsigned __int8 *)&v25);
    CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY::~CAPTURE_WINDOW_MAP_ENTRY(&v26);
    updated = CCaptureManager::_SendBoundsToCaptureControllerFromWindow(v10, (HWND)a2, v11, a4);
    v9 = updated;
    if ( updated >= 0 )
    {
      updated = CCaptureManager::_UpdateCaptureControllerTransformFromWindow(v13, (HWND)a2, v14, a4);
      v9 = updated;
      if ( updated >= 0 )
      {
        updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromWindow(v16, (HWND)a2, a4);
        v9 = updated;
        if ( updated >= 0 )
        {
          v9 = 0;
          goto LABEL_11;
        }
        v15 = 1376LL;
      }
      else
      {
        v15 = 1375LL;
      }
    }
    else
    {
      v15 = 1374LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)updated);
LABEL_11:
    CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY::~CAPTURE_WINDOW_MAP_ENTRY(&v19);
    return v9;
  }
  v9 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x554,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x8000FFFFLL);
  return v9;
}
