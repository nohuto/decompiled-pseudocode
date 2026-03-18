/*
 * XREFs of NtUserEndMenu @ 0x1C009FE50
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     GetMenuStateWindow @ 0x1C0215E54 (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rdx
  struct tagWND *MenuStateWindow; // rax

  EnterCrit(0LL, 0LL);
  v2 = gptiCurrent;
  v3 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v3 )
  {
    MenuStateWindow = (struct tagWND *)GetMenuStateWindow(*(_QWORD *)(gptiCurrent + 608LL));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 0x1F3u, 0LL, 0LL);
    else
      *(_DWORD *)(v3 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v2, v3, v0, v1);
  return 1LL;
}
