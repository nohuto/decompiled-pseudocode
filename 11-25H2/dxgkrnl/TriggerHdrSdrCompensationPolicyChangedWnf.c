/*
 * XREFs of TriggerHdrSdrCompensationPolicyChangedWnf @ 0x1401C1A38
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 TriggerHdrSdrCompensationPolicyChangedWnf()
{
  int updated; // eax
  __int64 v1; // rdi
  int CurrentProcessSessionId; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  updated = ZwUpdateWnfStateData(&WNF_DX_HDR_BRIGHTNESS_POLICY_CHANGED, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v1 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    WdLogGlobalForLineNumber = 5072;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to trigger WNF_DX_HDR_BRIGHTNESS_POLICY_CHANGED, Status = 0x%I64x",
      v1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v1;
}
