/*
 * XREFs of SaveCursorPosition @ 0x1402132E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

struct InputDelegation::CInputDelegationInfo *__fastcall SaveCursorPosition(__int64 a1)
{
  struct InputDelegation::CInputDelegationInfo *result; // rax

  result = InputDelegation::CInputDelegationInfo::GetInstance(a1);
  *(_QWORD *)((char *)result + 12) = a1;
  return result;
}
