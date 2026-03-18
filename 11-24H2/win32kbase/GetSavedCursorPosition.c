/*
 * XREFs of GetSavedCursorPosition @ 0x1400C2320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

__int64 GetSavedCursorPosition()
{
  return *(_QWORD *)((char *)InputDelegation::CInputDelegationInfo::GetInstance() + 12);
}
