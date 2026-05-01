/*
 * XREFs of ?_IsSkippedItem@CLauncherTipContextMenu@@AEAA_NK@Z @ 0x1806033B8
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLauncherTipContextMenu::_IsSkippedItem(CLauncherTipContextMenu *this, int a2)
{
  _DWORD *i; // rax
  int v5; // ecx
  _DWORD *v6; // rdx

  for ( i = &CLauncherTipContextMenu::c_rgSkippedItems;
        i != (_DWORD *)&CLauncherTipContextMenu::c_obsoleteItemsToBeRemoved;
        ++i )
  {
    if ( *i == a2 )
      return 1;
  }
  v5 = 0;
  v6 = &CLauncherTipContextMenu::c_rgSkippedDuplicateItems;
  while ( (unsigned __int64)v5 < 3 )
  {
    if ( *v6 == a2 )
    {
      if ( *((_BYTE *)this + v5 + 346) )
        return 1;
      *((_BYTE *)this + v5 + 346) = 1;
      return 0;
    }
    ++v5;
    ++v6;
  }
  return 0;
}
