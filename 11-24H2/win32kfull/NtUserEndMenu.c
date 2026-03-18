/*
 * XREFs of NtUserEndMenu @ 0x1402125E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     GetMenuStateWindow @ 0x1402BD7E8 (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  __int64 MenuStateWindow; // rax
  __int64 v6; // rdx

  EnterCrit(0LL, 0LL);
  v2 = PtiCurrent(v1, v0);
  if ( *((_QWORD *)v2 + 81) )
  {
    MenuStateWindow = GetMenuStateWindow(*((_QWORD *)v2 + 81));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 499, 0, 0);
    else
      *(_DWORD *)(v6 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
