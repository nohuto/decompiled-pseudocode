/*
 * XREFs of TriggerExternalBrightnessPolicyChangedWnf @ 0x1401C5A90
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 TriggerExternalBrightnessPolicyChangedWnf()
{
  int updated; // eax
  __int64 v1; // rdi
  int CurrentProcessSessionId; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  updated = ZwUpdateWnfStateData(
              &WNF_DX_EXTERNAL_BRIGHTNESS_POLICY_CHANGED,
              0LL,
              0LL,
              0LL,
              &CurrentProcessSessionId,
              0,
              0);
  v1 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    WdLogGlobalForLineNumber = 5052;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to trigger WNF_DX_EXTERNAL_BRIGHTNESS_POLICY_CHANGED WNF, Status = 0x%I64x",
      v1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v1;
}
