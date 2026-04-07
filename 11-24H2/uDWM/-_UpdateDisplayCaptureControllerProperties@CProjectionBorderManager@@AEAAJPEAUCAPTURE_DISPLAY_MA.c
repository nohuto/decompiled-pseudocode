/*
 * XREFs of ?_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CFF2C
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180082F90 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 * Callees:
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008AE50 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008C24C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180094C4C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180097868 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF620 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF930 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFC5C (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateDisplayCaptureControllerProperties(
        CProjectionBorderManager *this,
        struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *a2)
{
  CProjectionBorderManager *v3; // rcx
  HMONITOR v4; // rdx
  CProjectionBorderManager *v5; // rcx
  int updated; // edi
  __int64 v7; // rdx
  CProjectionBorderManager *v9; // rcx
  CProjectionBorderManager *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CProjectionBorderManager::_RemoveVisuals((__int64)this, (__int64)a2 + 24);
  if ( *((_BYTE *)a2 + 56) )
  {
    v4 = (HMONITOR)*((_QWORD *)a2 + 2);
    if ( v4 )
      CProjectionBorderManager::_AddProjectionBorderForDisplay(v3, v4, a2);
    else
      CProjectionBorderManager::_AddProjectionBorderForAllDisplays(v3, a2);
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
              v3,
              *((HMONITOR *)a2 + 2),
              *((struct CCaptureControllerProxy **)a2 + 1));
  if ( updated < 0 )
  {
    v7 = 2692LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromDisplay(
              v5,
              *((HMONITOR *)a2 + 2),
              *((struct CCaptureControllerProxy **)a2 + 1));
  if ( updated < 0 )
  {
    v7 = 2695LL;
    goto LABEL_7;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(
              v9,
              *((HMONITOR *)a2 + 2),
              *((struct CCaptureControllerProxy **)a2 + 1));
  if ( updated < 0 )
  {
    v7 = 2696LL;
    goto LABEL_7;
  }
  v11 = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(
          v10,
          *((HMONITOR *)a2 + 2),
          *((struct CCaptureControllerProxy **)a2 + 1));
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA8B,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
