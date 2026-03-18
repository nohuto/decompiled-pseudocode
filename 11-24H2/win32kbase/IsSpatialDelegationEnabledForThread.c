/*
 * XREFs of IsSpatialDelegationEnabledForThread @ 0x1400C2380
 * Callers:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4 (_anonymous_namespace_--InMouseRawInputMode.c)
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1400C2404 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsSpatialDelegationEnabledForThread(InputDelegation *this)
{
  const struct tagTHREADINFO *v2; // rdx

  v2 = (const struct tagTHREADINFO *)*((unsigned int *)InputDelegation::CInputDelegationInfo::GetInstance() + 2);
  return ((unsigned __int8)v2 & 2) != 0 && InputDelegation::IsDelegationEnabledForThread(this, v2);
}
