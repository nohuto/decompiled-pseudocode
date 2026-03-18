/*
 * XREFs of UnsetRedirectedWindow @ 0x14002D720
 * Callers:
 *     CleanupWindowRedirection @ 0x14002FEE4 (CleanupWindowRedirection.c)
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     DeleteOldRedirectionBitmap @ 0x14002D554 (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14002D5F8 (DeleteOrSetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x14002D818 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x14002DEE0 (UnredirectDCEs.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, int a2)
{
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  __int64 Prop; // rbp
  __int64 v7; // rax
  HSURF RedirectionBitmap; // rbx

  v4 = 1;
  UserSessionState = W32GetUserSessionState();
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41422), 1LL);
  *(_DWORD *)(Prop + 32) &= ~a2;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x20) == 0 )
  {
    v7 = W32GetUserSessionState();
    v4 = HintSpriteShape(*(_QWORD *)(*(_QWORD *)(v7 + 57008) + 48LL), a1, 0LL, 0LL);
  }
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap((__int64)a1);
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v4 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 0);
    }
  }
  return v4;
}
