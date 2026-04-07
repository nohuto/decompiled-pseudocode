/*
 * XREFs of ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CE81C
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCC70 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800990C0 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ??1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009AB20 (--1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800AD1F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CEEB0 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF6C0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF9FC (-_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAV.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFE10 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddTabGroupCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        struct CapturedWindowRepresentation *a3,
        struct CCaptureControllerProxy *a4,
        const struct DWM_CAPTURE_TOKEN *a5)
{
  struct _RTL_GENERIC_TABLE *v9; // rbx
  unsigned int v10; // ebx
  int v11; // r9d
  int updated; // eax
  CProjectionBorderManager *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-40h]
  CBaseObject *Buffer; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  CBaseObject *v18; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+51h] [rbp-Fh]
  __int16 v21; // [rsp+55h] [rbp-Bh]
  char v22; // [rsp+57h] [rbp-9h]

  Buffer = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 1;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v9 = this + 6;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         this + 6,
         *(_QWORD *)a5) )
  {
    v10 = -2147418113;
    v15 = 1797;
LABEL_3:
    v11 = v10;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v15, 0LL);
    goto LABEL_14;
  }
  Buffer = *(CBaseObject **)a5;
  *((_QWORD *)&v17 + 1) = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=((CBaseObject **)&v17, a4);
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v18, a3);
  if ( !RtlInsertElementGenericTable(v9, &Buffer, 0x28u, 0LL) )
  {
    v10 = -2147024882;
    v15 = 1805;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow((CProjectionBorderManager *)this, a2, a4);
  v10 = updated;
  if ( updated < 0 )
  {
    v15 = 1808;
    goto LABEL_12;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow(
              (CProjectionBorderManager *)this,
              a2,
              a4);
  v10 = updated;
  if ( updated < 0 )
  {
    v15 = 1809;
    goto LABEL_12;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromWindow(v13, a2, a4);
  v10 = updated;
  if ( updated < 0 )
  {
    v15 = 1810;
LABEL_12:
    v11 = updated;
    goto LABEL_13;
  }
LABEL_14:
  CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY::~CAPTURE_WINDOW_MAP_ENTRY(&Buffer);
  return v10;
}
