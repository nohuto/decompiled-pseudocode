/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1400C2404
 * Callers:
 *     IsSpatialDelegationEnabledForThread @ 0x1400C2380 (IsSpatialDelegationEnabledForThread.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400C23B0 (IsKeyboardDelegationEnabledForThread.c)
 * Callees:
 *     ?GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ @ 0x1400C23E0 (-GetInstance@CInputDelegationInfo@InputDelegation@@SAPEAU12@XZ.c)
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  unsigned int ThreadProcessId; // ebx
  __int64 v3; // rcx

  ThreadProcessId = (unsigned int)PsGetThreadProcessId(*this);
  return (ThreadProcessId & 0xFFFFFFFC) == *(_DWORD *)InputDelegation::CInputDelegationInfo::GetInstance(v3);
}
