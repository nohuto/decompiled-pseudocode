/*
 * XREFs of ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180097868
 * Callers:
 *     ?UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800CD780 (-UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800CD840 (-UpdateFilteredDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CE0F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800CE31C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CFF2C (-_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MA.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180079640 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008C24C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForAllDisplays(
        CProjectionBorderManager *this,
        struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *a2)
{
  __int64 v3; // r9
  int AllDisplaysNoRef; // eax
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  int v9; // eax
  int v10; // edi
  void *v12[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18) )
  {
LABEL_11:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v12);
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v3, (__int64)v12);
  v6 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef >= 0 )
  {
    v7 = 0LL;
    v8 = v12[0];
    while ( (unsigned int)v7 < v13 )
    {
      v9 = CProjectionBorderManager::_AddProjectionBorderForDisplay(v5, *(HMONITOR *)(v8[v7] + 16LL), a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x937,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v9);
        v6 = v10;
        goto LABEL_9;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v12);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x934,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)AllDisplaysNoRef);
LABEL_9:
  DynArrayImpl<0>::~DynArrayImpl<0>(v12);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v6;
}
