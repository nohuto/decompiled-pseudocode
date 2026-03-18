/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x140075608
 * Callers:
 *     TrackLayeredZorder @ 0x140075130 (TrackLayeredZorder.c)
 * Callees:
 *     GreZorderSprite @ 0x140025478 (GreZorderSprite.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1400751DC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, struct tagWND *a2)
{
  struct tagWND *v2; // rax
  struct tagWND *v4; // rdi
  bool i; // zf
  struct tagWND *NextLayeredWindow; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r14d
  HWND v10; // rbp
  HWND v11; // rbx
  __int64 UserSessionState; // rax

  v2 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( v2 )
  {
    do
    {
      v4 = v2;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 14);
    }
    while ( v2 );
    if ( v4 != a1 )
    {
      for ( i = (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 8) == 0; ; i = NextLayeredWindow == 0LL )
      {
        if ( !i )
        {
          v9 = IsWindowDesktopComposed(v4);
          if ( a2 )
            v10 = *(HWND *)a2;
          else
            v10 = 0LL;
          v11 = *(HWND *)v4;
          UserSessionState = W32GetUserSessionState(v8, v7);
          GreZorderSprite(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 57008) + 48LL), v11, v10, v9);
        }
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == a2 )
          break;
      }
    }
  }
}
