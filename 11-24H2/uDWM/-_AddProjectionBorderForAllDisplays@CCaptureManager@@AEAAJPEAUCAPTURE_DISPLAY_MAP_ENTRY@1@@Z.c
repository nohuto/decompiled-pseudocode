/*
 * XREFs of ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2980
 * Callers:
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B09D0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0B80 (-StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800B1EE0 (-UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800B1FC0 (-UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B5214 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180079640 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2A88 (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_AddProjectionBorderForAllDisplays(
        CCaptureManager *this,
        struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *a2)
{
  __int64 v3; // r9
  int AllDisplaysNoRef; // eax
  CCaptureManager *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbx
  _QWORD *v8; // r14
  int v9; // eax
  int v10; // esi
  void *v12[3]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18) )
  {
    CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v12);
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v3, (__int64)v12);
    v6 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x749,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)AllDisplaysNoRef);
LABEL_12:
      DynArrayImpl<0>::~DynArrayImpl<0>(v12);
      goto LABEL_10;
    }
    v7 = 0LL;
    if ( v13 )
    {
      v8 = v12[0];
      while ( 1 )
      {
        v9 = CCaptureManager::_AddProjectionBorderForDisplay(v5, *(HMONITOR *)(v8[v7] + 16LL), a2);
        v10 = v9;
        if ( v9 < 0 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v13 )
          goto LABEL_8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v9);
      v6 = v10;
      goto LABEL_12;
    }
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(v12);
  }
  v6 = 0;
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v6;
}
