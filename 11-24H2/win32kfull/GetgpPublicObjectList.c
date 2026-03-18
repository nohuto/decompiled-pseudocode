/*
 * XREFs of GetgpPublicObjectList @ 0x1401DE1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpPublicObjectList(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2);
  *a1 = *(_QWORD *)(result + 19848);
  return result;
}
