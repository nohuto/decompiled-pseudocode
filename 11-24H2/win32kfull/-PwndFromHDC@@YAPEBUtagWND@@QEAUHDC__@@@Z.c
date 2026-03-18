/*
 * XREFs of ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x140154CD0
 * Callers:
 *     UserGetHwnd @ 0x140285ACC (UserGetHwnd.c)
 * Callees:
 *     <none>
 */

const struct tagWND *__fastcall PwndFromHDC(HDC a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *i; // rbx

  for ( i = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 57008) + 24LL); ; i = (__int64 *)*i )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 57008) + 24LL;
    if ( i == (__int64 *)v3 )
      break;
    if ( (HDC)i[2] == a1 )
    {
      if ( (i[6] & 0x80C01000) == 0x1000 )
        return (const struct tagWND *)i[10];
      return 0LL;
    }
  }
  return 0LL;
}
