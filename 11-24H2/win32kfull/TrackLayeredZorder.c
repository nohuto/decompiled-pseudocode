/*
 * XREFs of TrackLayeredZorder @ 0x140075130
 * Callers:
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 * Callees:
 *     GreZorderSprite @ 0x140025478 (GreZorderSprite.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1400751DC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x140075608 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rsi
  struct tagWND *NextLayeredWindow; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebp
  HWND v8; // rbx
  __int64 UserSessionState; // rax

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  v7 = IsWindowDesktopComposed(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  v8 = *(HWND *)a1;
  UserSessionState = W32GetUserSessionState(v6, v5);
  GreZorderSprite(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 57008) + 48LL), v8, v3, v7);
  ReorderChildrenSpriteList(a1, a1);
}
