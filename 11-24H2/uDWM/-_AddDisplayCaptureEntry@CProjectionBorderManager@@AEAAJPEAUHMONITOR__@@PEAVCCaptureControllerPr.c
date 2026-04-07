/*
 * XREFs of ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CE0F8
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CC650 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCA30 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008AE50 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008C24C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180094C4C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180097868 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098700 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ??1CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x18009AAD8 (--1CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800BACF0 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CEEB0 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF620 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF930 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFC5C (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry@@@details@wil@@QEAA_NXZ @ 0x1800D01BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitializedDispl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddDisplayCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        bool a5)
{
  struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *inserted; // rdi
  int v10; // ebx
  int v11; // r9d
  CProjectionBorderManager *v12; // rcx
  int updated; // eax
  CProjectionBorderManager *v14; // rcx
  CProjectionBorderManager *v15; // rcx
  CProjectionBorderManager *v16; // rcx
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-50h]
  __int64 Buffer; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v21; // [rsp+38h] [rbp-38h] BYREF
  HMONITOR v22; // [rsp+40h] [rbp-30h]
  _BYTE v23[33]; // [rsp+48h] [rbp-28h] BYREF
  int v24; // [rsp+69h] [rbp-7h]
  __int16 v25; // [rsp+6Dh] [rbp-3h]
  char v26; // [rsp+6Fh] [rbp-1h]

  inserted = 0LL;
  Buffer = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v23);
  v23[32] = 1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement() )
  {
    v10 = -2147418113;
    v19 = 2186;
LABEL_3:
    v11 = v10;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v19, 0LL);
    goto LABEL_22;
  }
  Buffer = *(_QWORD *)a4;
  v22 = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v21, a3);
  inserted = (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)RtlInsertElementGenericTable(
                                                                             this + 7,
                                                                             &Buffer,
                                                                             0x40u,
                                                                             0LL);
  if ( !inserted )
  {
    v10 = -2147024882;
    v19 = 2193;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( a5 )
  {
    if ( a2 )
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForDisplay(v12, a2, inserted);
      v10 = updated;
      if ( updated < 0 )
      {
        v19 = 2200;
LABEL_20:
        v11 = updated;
        goto LABEL_21;
      }
    }
    else
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays(v12, inserted);
      v10 = updated;
      if ( updated < 0 )
      {
        v19 = 2204;
        goto LABEL_20;
      }
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(v12, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v19 = 2208;
    goto LABEL_20;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromDisplay(v14, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v19 = 2209;
    goto LABEL_20;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(v15, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v19 = 2210;
    goto LABEL_20;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v16, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v19 = 2211;
    goto LABEL_20;
  }
LABEL_22:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry>::GetImpl'::`2'::impl)
    && v10 < 0
    && inserted )
  {
    if ( *((_DWORD *)inserted + 12) )
      CProjectionBorderManager::_RemoveVisuals(v17, (__int64)inserted + 24);
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::RemoveElement(
      this + 7,
      inserted);
    CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  }
  CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY((CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)&Buffer);
  return (unsigned int)v10;
}
