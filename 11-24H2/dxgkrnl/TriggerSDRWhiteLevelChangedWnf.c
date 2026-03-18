/*
 * XREFs of TriggerSDRWhiteLevelChangedWnf @ 0x1401C6D78
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140184008 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026F744 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 TriggerSDRWhiteLevelChangedWnf()
{
  int updated; // eax
  __int64 v1; // rdi
  int CurrentProcessSessionId; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v1 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    WdLogGlobalForLineNumber = 4960;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to trigger WNF_DX_SDR_WHITE_LEVEL_CHANGED WNF, Status = 0x%I64x",
      v1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v1;
}
