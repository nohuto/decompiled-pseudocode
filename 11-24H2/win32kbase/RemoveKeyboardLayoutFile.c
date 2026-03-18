/*
 * XREFs of RemoveKeyboardLayoutFile @ 0x140155C6C
 * Callers:
 *     DestroyKF @ 0x140064130 (DestroyKF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveKeyboardLayoutFile(_QWORD *a1)
{
  _QWORD *UserSessionState; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  __int64 result; // rax
  _QWORD *i; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserSessionState;
  if ( UserSessionState[1758] == a1[4] )
    UserSessionState[1758] = UserSessionState + 1760;
  if ( UserSessionState[1759] == a1[6] )
    UserSessionState[1759] = 0LL;
  v4 = (_QWORD *)UserSessionState[1774];
  if ( a1 == v4 )
  {
    result = a1[2];
    v3[1774] = result;
  }
  else
  {
    for ( i = (_QWORD *)v4[2]; a1 != i; i = (_QWORD *)i[2] )
      v4 = i;
    result = i[2];
    v4[2] = result;
  }
  return result;
}
