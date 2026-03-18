/*
 * XREFs of GetglpSetupPrograms @ 0x140280D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetglpSetupPrograms(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2) + 68672;
  *a1 = result;
  return result;
}
