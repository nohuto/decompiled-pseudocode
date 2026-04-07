/*
 * XREFs of ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180021930
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3958 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3A84 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x1800D4928 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D49D0 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D50C0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D524C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateCaptureControllerPropertiesFromDisplays(
        struct _RTL_GENERIC_TABLE *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // ebx
  HMONITOR v6; // rdx
  CProjectionBorderManager *v7; // rcx
  CProjectionBorderManager *v8; // rcx
  int updated; // edi
  CProjectionBorderManager *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
    v3 = v2;
    if ( !v2 )
    {
      v4 = 0;
      goto LABEL_4;
    }
    v15 = *v2;
    CProjectionBorderManager::_RemoveVisuals(v15, v2 + 3);
    v6 = (HMONITOR)v3[2];
    if ( v6 )
      CProjectionBorderManager::_AddProjectionBorderForDisplay(
        (CProjectionBorderManager *)this,
        v6,
        (const struct DWM_CAPTURE_TOKEN *)&v15);
    else
      CProjectionBorderManager::_AddProjectionBorderForAllDisplays(
        (CProjectionBorderManager *)this,
        (const struct DWM_CAPTURE_TOKEN *)&v15);
    updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
                v7,
                (HMONITOR)v3[2],
                (struct CCaptureControllerProxy *)v3[1]);
    if ( updated < 0 )
      break;
    updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(
                v8,
                (HMONITOR)v3[2],
                (struct CCaptureControllerProxy *)v3[1]);
    if ( updated < 0 )
    {
      v12 = 877LL;
      goto LABEL_14;
    }
    v11 = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(
            v10,
            (HMONITOR)v3[2],
            (struct CCaptureControllerProxy *)v3[1]);
    v4 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x370,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v11,
        v13);
      goto LABEL_4;
    }
  }
  v12 = 876LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v13);
  v4 = updated;
LABEL_4:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v4;
}
