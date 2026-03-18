/*
 * XREFs of ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C007B8B4
 * Callers:
 *     NtUserWindowFromDC @ 0x1C007B830 (NtUserWindowFromDC.c)
 *     UserGetHwnd @ 0x1C01BD62C (UserGetHwnd.c)
 *     _WindowFromDC @ 0x1C01BD748 (_WindowFromDC.c)
 * Callees:
 *     <none>
 */

const struct tagWND *__fastcall PwndFromHDC(__int64 *a1)
{
  __int64 v1; // r9
  __int64 **i; // r8

  v1 = 0LL;
  for ( i = *(__int64 ***)(gpDispInfo + 24LL); i; i = (__int64 **)*i )
  {
    if ( i[1] == a1 )
    {
      if ( ((_DWORD)i[8] & 0x80C01000) == 0x1000 )
        return (const struct tagWND *)i[2];
      return (const struct tagWND *)v1;
    }
  }
  return (const struct tagWND *)v1;
}
