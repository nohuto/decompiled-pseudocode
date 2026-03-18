/*
 * XREFs of WindowFromCacheDC @ 0x140285B90
 * Callers:
 *     _SelectPalette @ 0x140186450 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1401D6620 (xxxRealizePalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowFromCacheDC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *i; // rbx
  __int64 v10; // rax

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgnShared(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 57008);
  for ( i = *(__int64 **)(v7 + 24); ; i = (__int64 *)*i )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 57008) + 24LL;
    if ( i == (__int64 *)v8 )
      break;
    if ( i[2] == a1 )
    {
      if ( (i[6] & 0x400000) == 0 )
        v3 = i[10];
      break;
    }
  }
  v10 = W32GetUserSessionState(v8, v7);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v10 + 57008) + 48LL));
  return v3;
}
