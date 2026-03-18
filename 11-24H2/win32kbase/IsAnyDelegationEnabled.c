/*
 * XREFs of IsAnyDelegationEnabled @ 0x1400C2360
 * Callers:
 *     SetInputDelegationModeImpl @ 0x14018980C (SetInputDelegationModeImpl.c)
 *     UpdateDelegationTargetForMouseInput @ 0x1402137A0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

bool IsAnyDelegationEnabled()
{
  return *((_DWORD *)InputDelegation::CInputDelegationInfo::GetInstance() + 2) != 0;
}
