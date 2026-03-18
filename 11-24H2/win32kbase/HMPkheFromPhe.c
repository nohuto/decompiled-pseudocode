/*
 * XREFs of HMPkheFromPhe @ 0x1400960B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPkheFromPhe(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return *(_QWORD *)(UserSessionState + 19888)
       + 40LL * (unsigned int)((a1 - *(_QWORD *)(UserSessionState + 19944)) >> 5);
}
