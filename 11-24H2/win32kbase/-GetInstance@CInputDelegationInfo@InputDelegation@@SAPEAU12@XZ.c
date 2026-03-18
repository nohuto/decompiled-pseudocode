/*
 * XREFs of ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0
 * Callers:
 *     GetSavedCursorPosition @ 0x1400C2320 (GetSavedCursorPosition.c)
 *     GetDelegationFlags @ 0x1400C2340 (GetDelegationFlags.c)
 *     IsAnyDelegationEnabled @ 0x1400C2360 (IsAnyDelegationEnabled.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1400C2380 (IsSpatialDelegationEnabledForThread.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400C23B0 (IsKeyboardDelegationEnabledForThread.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1400C2404 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     SaveCursorPosition @ 0x1402132E0 (SaveCursorPosition.c)
 * Callees:
 *     <none>
 */

struct InputDelegation::CInputDelegationInfo *__fastcall InputDelegation::CInputDelegationInfo::GetInstance(__int64 a1)
{
  return *(struct InputDelegation::CInputDelegationInfo **)(W32GetUserSessionState(a1) + 19656);
}
