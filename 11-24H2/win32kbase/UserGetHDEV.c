/*
 * XREFs of UserGetHDEV @ 0x1400DDE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetHDEV(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 48LL);
}
