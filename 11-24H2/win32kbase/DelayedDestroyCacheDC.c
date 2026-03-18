/*
 * XREFs of DelayedDestroyCacheDC @ 0x1401688B0
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 */

void __fastcall DelayedDestroyCacheDC(__int64 a1)
{
  int v1; // ebp
  int v2; // esi
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax

  v1 = a1;
  v2 = 1;
  UserSessionState = W32GetUserSessionState(a1);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v5 = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v4) + 57008) + 24LL);
  if ( v5 == (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 57008) + 24LL) )
  {
LABEL_13:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    goto LABEL_17;
  }
  do
  {
    v8 = *((_DWORD *)v5 + 12);
    v9 = (_QWORD *)*v5;
    if ( v8 >= 0 )
    {
      if ( (v8 & 0x400000) == 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    v10 = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
    if ( v10 && !*v10 )
      v10 = 0LL;
    if ( (_QWORD *)v5[8] == v10 )
    {
      if ( !v1 )
      {
        v2 = 0;
        goto LABEL_11;
      }
LABEL_10:
      DestroyCacheDC(v5);
    }
LABEL_11:
    v5 = v9;
    v7 = *(_QWORD *)(W32GetUserSessionState(v7) + 57008) + 24LL;
  }
  while ( v9 != (_QWORD *)v7 );
  if ( v2 )
    goto LABEL_13;
LABEL_17:
  v12 = W32GetUserSessionState(v7);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v12 + 57008) + 48LL));
}
