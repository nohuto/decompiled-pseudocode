/*
 * XREFs of UnredirectDCEs @ 0x14002DEE0
 * Callers:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ChangeRedirectionParentInDCEs @ 0x14002D8C0 (ChangeRedirectionParentInDCEs.c)
 *     UpdateRedirectedDCE @ 0x14002F480 (UpdateRedirectedDCE.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 */

__int64 __fastcall UnredirectDCEs(__int64 a1)
{
  __int64 UserSessionState; // rax
  tagDCE *i; // rdi
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9

  if ( !GetStyleWindow(a1, 2848LL) )
  {
    UserSessionState = W32GetUserSessionState();
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    for ( i = *(tagDCE **)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL); ; i = *(tagDCE **)i )
    {
      if ( i == (tagDCE *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL) )
      {
        v4 = W32GetUserSessionState();
        return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v4 + 57008) + 48LL));
      }
      if ( (*((_DWORD *)i + 12) & 0x4400800) == 0 )
      {
        v6 = *((_QWORD *)i + 10);
        if ( v6 )
        {
          v7 = *(_QWORD *)(a1 + 24);
          v8 = 0LL;
          if ( v7 )
          {
            v9 = *(_QWORD *)(v7 + 8);
            if ( v9 )
              v8 = *(_QWORD *)(v9 + 24);
          }
          if ( a1 == v8 )
          {
            if ( a1 != v6 )
              continue;
          }
          else
          {
            while ( a1 != v6 )
            {
              if ( (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFF) == 0x29D )
                goto LABEL_4;
              v6 = *(_QWORD *)(v6 + 104);
            }
          }
          if ( (*((_DWORD *)i + 12) & 0x1002) != 2 )
            UpdateRedirectedDCE(i);
        }
      }
LABEL_4:
      ;
    }
  }
  return ChangeRedirectionParentInDCEs(a1);
}
