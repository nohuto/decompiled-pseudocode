/*
 * XREFs of SpbCheckPwnd @ 0x140098004
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401D1FA4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x140097868 (SpbCheckRect.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x14026C97C (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 */

char __fastcall SpbCheckPwnd(struct tagWND *a1, __int64 a2)
{
  struct tagSPB *i; // rbx
  struct tagSPB *v4; // rbp
  struct tagWND *j; // rdi
  __int64 UserSessionState; // rax

LABEL_1:
  a2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 57008);
  for ( i = *(struct tagSPB **)(a2 + 40); i; i = v4 )
  {
    v4 = *(struct tagSPB **)i;
    for ( j = (struct tagWND *)*((_QWORD *)i + 1); j; j = (struct tagWND *)*((_QWORD *)j + 13) )
    {
      if ( a1 == j )
        FreeSpb((char *)i, a2);
    }
    if ( !IsSpbPresentOrNull(v4) )
      goto LABEL_1;
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 40LL) )
    LOBYTE(UserSessionState) = SpbCheckRect(a1, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL));
  return UserSessionState;
}
