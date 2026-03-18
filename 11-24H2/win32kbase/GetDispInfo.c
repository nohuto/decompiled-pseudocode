/*
 * XREFs of GetDispInfo @ 0x1400CF810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDispInfo(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 57008);
}
