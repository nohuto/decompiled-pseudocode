/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800BAD70
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180076840 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009AB20 (--1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CBaseObject **this)
{
  CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY::~CAPTURE_WINDOW_MAP_ENTRY(this);
  return RtlDeleteElementGenericTable(Table, this);
}
