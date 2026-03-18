/*
 * XREFs of RedirectDCEs @ 0x14002F358
 * Callers:
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x14002F480 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall RedirectDCEs(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 *v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax

  UserSessionState = W32GetUserSessionState();
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v3 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL);
  if ( v3 != (__int64 *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL) )
  {
    while ( 1 )
    {
      v4 = *((_DWORD *)v3 + 12);
      if ( (v4 & 0x4400800) != 0 )
        goto LABEL_10;
      v5 = v3[10];
      if ( !v5 || (v4 & 0x1000) == 0 )
        goto LABEL_10;
      v6 = *(_QWORD *)(a1 + 24);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( v8 )
          v7 = *(_QWORD *)(v8 + 24);
      }
      if ( a1 != v7 )
        break;
      if ( a1 == v5 )
        goto LABEL_15;
LABEL_10:
      v3 = (__int64 *)*v3;
      if ( v3 == (__int64 *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL) )
        goto LABEL_11;
    }
    while ( a1 != v5 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF) == 0x29D )
        goto LABEL_10;
      v5 = *(_QWORD *)(v5 + 104);
    }
LABEL_15:
    UpdateRedirectedDCE((tagDCE *)v3);
    goto LABEL_10;
  }
LABEL_11:
  v9 = W32GetUserSessionState();
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v9 + 57008) + 48LL));
}
