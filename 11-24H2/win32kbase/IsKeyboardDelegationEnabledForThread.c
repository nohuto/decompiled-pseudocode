/*
 * XREFs of IsKeyboardDelegationEnabledForThread @ 0x1400C23B0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x14016C610 (NtUserGetAsyncKeyState.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1400C2404 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *this)
{
  const struct tagTHREADINFO *v2; // rdx

  v2 = (const struct tagTHREADINFO *)*((unsigned int *)InputDelegation::CInputDelegationInfo::GetInstance() + 2);
  return ((unsigned __int8)v2 & 1) != 0 && InputDelegation::IsDelegationEnabledForThread(this, v2);
}
