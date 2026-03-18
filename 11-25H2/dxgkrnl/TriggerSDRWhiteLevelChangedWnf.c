/*
 * XREFs of TriggerSDRWhiteLevelChangedWnf @ 0x1401C2758
 * Callers:
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x1402687E4 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
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
    WdLogGlobalForLineNumber = 4958;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
