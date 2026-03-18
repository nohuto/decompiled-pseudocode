/*
 * XREFs of EnableMouseAcceleration @ 0x1401482E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnableMouseAcceleration(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax

  v1 = a1;
  result = W32GetUserSessionState(a1);
  *(_BYTE *)(*(_QWORD *)(result + 16368) + 112LL) = v1;
  return result;
}
