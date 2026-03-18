/*
 * XREFs of GetSMSLookaside @ 0x1402B1800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSMSLookaside(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2) + 69344;
  *a1 = result;
  return result;
}
