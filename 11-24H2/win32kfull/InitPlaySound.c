/*
 * XREFs of InitPlaySound @ 0x14026DB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitPlaySound(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  _QWORD *v3; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (_QWORD *)Win32AllocPoolZInit(16LL, 1936749397LL);
  *(_QWORD *)(UserSessionState + 70800) = v3;
  result = 0LL;
  if ( !v3 )
    return 3221225495LL;
  *v3 = 0LL;
  v3[1] = 0LL;
  return result;
}
