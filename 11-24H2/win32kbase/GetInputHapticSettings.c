/*
 * XREFs of GetInputHapticSettings @ 0x1401B66C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputHapticSettings(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // xmm1_8
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  *(_OWORD *)a1 = *(_OWORD *)(UserSessionState + 18576);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(UserSessionState + 18592);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(UserSessionState + 18608);
  v3 = *(_QWORD *)(UserSessionState + 18624);
  result = 1LL;
  *(_QWORD *)(a1 + 48) = v3;
  return result;
}
