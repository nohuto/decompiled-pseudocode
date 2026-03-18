/*
 * XREFs of GetDelegationFlags @ 0x1400C2340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

__int64 GetDelegationFlags()
{
  return *((unsigned int *)InputDelegation::CInputDelegationInfo::GetInstance() + 2);
}
