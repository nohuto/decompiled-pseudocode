/*
 * XREFs of ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3958
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180021930 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800D2B70 (-UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3784 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 * Callees:
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002AB20 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3A84 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForAllDisplays(
        CProjectionBorderManager *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v4; // rcx
  int AllDisplaysNoRef; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // eax
  int v10; // esi
  int v12[4]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+34h] [rbp-24h]
  unsigned int v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  if ( v4 )
  {
    *(_OWORD *)v12 = 0LL;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v4, (__int64)v12);
    v6 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)AllDisplaysNoRef);
LABEL_12:
      DynArrayImpl<0>::~DynArrayImpl<0>(v12);
      goto LABEL_10;
    }
    v7 = 0LL;
    if ( v15 )
    {
      v8 = *(_QWORD *)v12;
      while ( 1 )
      {
        v9 = CProjectionBorderManager::_AddProjectionBorderForDisplay(
               this,
               *(HMONITOR *)(*(_QWORD *)(v8 + 8 * v7) + 16LL),
               a2);
        v10 = v9;
        if ( v9 < 0 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v15 )
          goto LABEL_8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63F,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v9);
      v6 = v10;
      goto LABEL_12;
    }
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(v12);
  }
  v6 = 0;
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v6;
}
