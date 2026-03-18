/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00B3230
 * Callers:
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     TrackLayeredZorder @ 0x1C00B2F78 (TrackLayeredZorder.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00B3114 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GreZorderSprite @ 0x1C00B3F1C (GreZorderSprite.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, struct tagWND *a2)
{
  struct tagWND *v2; // rax
  struct tagWND *v4; // rbx
  struct tagWND *NextLayeredWindow; // rax
  HWND v6; // r8

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
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 8) != 0 )
        goto LABEL_8;
      while ( 1 )
      {
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == a2 )
          break;
LABEL_8:
        IsWindowDesktopComposed(v4);
        if ( a2 )
          v6 = *(HWND *)a2;
        else
          v6 = 0LL;
        GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)v4, v6);
      }
    }
  }
}
