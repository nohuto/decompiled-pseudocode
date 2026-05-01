/*
 * XREFs of ?_SHPrettyMenu@@YAXPEAUHMENU__@@@Z @ 0x1804D5A00
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804D5614 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?_SHIsMenuSeparator2@@YAHPEAUHMENU__@@HPEAH@Z @ 0x1804D594C (-_SHIsMenuSeparator2@@YAHPEAUHMENU__@@HPEAH@Z.c)
 */

void __fastcall _SHPrettyMenu(HMENU hmenu)
{
  int v1; // esi
  int v3; // r14d
  signed int i; // ebx
  HMENU v5; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v3 = 1;
  for ( i = GetMenuItemCount(hmenu) - 1; ; --i )
  {
    v5 = hmenu;
    if ( i <= 0 )
      break;
    v6 = 0;
    if ( (unsigned int)_SHIsMenuSeparator2(hmenu, i, &v6) )
    {
      if ( v1 )
      {
        if ( !v6 || v3 )
        {
          DeleteMenu(hmenu, i, 0x400u);
        }
        else
        {
          DeleteMenu(hmenu, i + 1, 0x400u);
          v3 = v6;
        }
      }
      else
      {
        v3 = v6;
        v1 = 1;
      }
    }
    else
    {
      v1 = 0;
    }
  }
  while ( (unsigned int)_SHIsMenuSeparator2(v5, 0, 0LL) )
  {
    DeleteMenu(hmenu, 0, 0x400u);
    v5 = hmenu;
  }
}
