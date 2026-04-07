/*
 * XREFs of ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBADC
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CB590 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 *     ?StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CC840 (-StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_.c)
 *     ?StopFilteredDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CD510 (-StopFilteredDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800CD840 (-UpdateFilteredDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800CE31C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x18009A420 (--0CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800B84A8 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 */

PVOID CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement()
{
  __int64 v0; // rdx
  int v1; // r8d
  __int64 v2; // r10
  PRTL_GENERIC_TABLE v3; // r11
  PVOID v4; // rbx
  _QWORD Buffer[9]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v7[32]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v8[48]; // [rsp+98h] [rbp-30h] BYREF

  CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY::CAPTURE_DISPLAY_MAP_ENTRY((CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)Buffer);
  Buffer[8] = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v7, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v8, v0, v1);
  Buffer[0] = v2;
  v4 = RtlLookupElementGenericTable(v3, Buffer);
  CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)Buffer);
  return v4;
}
