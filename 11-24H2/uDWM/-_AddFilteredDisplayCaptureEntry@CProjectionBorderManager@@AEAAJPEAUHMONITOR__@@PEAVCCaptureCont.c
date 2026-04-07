/*
 * XREFs of ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800CE31C
 * Callers:
 *     ?StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CC840 (-StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008C24C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180094C4C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180097868 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800B84A8 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBADC (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CEEB0 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF620 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF930 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFC5C (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddFilteredDisplayCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        bool a5,
        struct CContainerVisualProxy *a6)
{
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int v12; // ebx
  int v13; // r9d
  struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *inserted; // rbx
  CProjectionBorderManager *v15; // rcx
  int updated; // eax
  CProjectionBorderManager *v17; // rcx
  CProjectionBorderManager *v18; // rcx
  CProjectionBorderManager *v19; // rcx
  CProjectionBorderManager *v20; // rcx
  unsigned int v22; // [rsp+28h] [rbp-69h]
  __int64 Buffer; // [rsp+38h] [rbp-59h] BYREF
  CBaseObject *v24; // [rsp+40h] [rbp-51h] BYREF
  HMONITOR v25; // [rsp+48h] [rbp-49h]
  _BYTE v26[33]; // [rsp+50h] [rbp-41h] BYREF
  int v27; // [rsp+71h] [rbp-20h]
  __int16 v28; // [rsp+75h] [rbp-1Ch]
  char v29; // [rsp+77h] [rbp-1Ah]
  CBaseObject *v30; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v31[32]; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v32[40]; // [rsp+A0h] [rbp+Fh] BYREF

  Buffer = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v26);
  v26[32] = 1;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v31, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v32, v10, v11);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement() )
  {
    v12 = -2147418113;
    v22 = 2512;
LABEL_3:
    v13 = v12;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v22, 0LL);
    goto LABEL_21;
  }
  Buffer = *(_QWORD *)a4;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v24, a3);
  v25 = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v30, a6);
  inserted = (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)RtlInsertElementGenericTable(
                                                                             this + 8,
                                                                             &Buffer,
                                                                             0x88u,
                                                                             0LL);
  if ( !inserted )
  {
    v12 = -2147024882;
    v22 = 2520;
    goto LABEL_3;
  }
  v24 = 0LL;
  v30 = 0LL;
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( a2 )
  {
    updated = CProjectionBorderManager::_AddProjectionBorderForDisplay(v15, a2, inserted);
    v12 = updated;
    if ( updated < 0 )
    {
      v22 = 2534;
LABEL_19:
      v13 = updated;
      goto LABEL_20;
    }
  }
  else
  {
    updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays(v15, inserted);
    v12 = updated;
    if ( updated < 0 )
    {
      v22 = 2538;
      goto LABEL_19;
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(v17, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v22 = 2542;
    goto LABEL_19;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromDisplay(v18, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v22 = 2543;
    goto LABEL_19;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(v19, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v22 = 2544;
    goto LABEL_19;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v20, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v22 = 2545;
    goto LABEL_19;
  }
LABEL_21:
  CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)&Buffer);
  return v12;
}
