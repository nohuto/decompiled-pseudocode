/*
 * XREFs of ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3588
 * Callers:
 *     NtUserQueryWindow @ 0x1C006E2B0 (NtUserQueryWindow.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F33B8 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F371C (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C006E4C4 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0121808 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F3B4C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(struct tagWND *a1)
{
  const struct tagTHREADINFO **TopLevelWindow; // rax
  __int64 v2; // rbx
  const struct tagWND *v3; // rdi
  __int64 v4; // r9

  TopLevelWindow = (const struct tagTHREADINFO **)GetTopLevelWindow((__int64)a1);
  v2 = 0LL;
  v3 = (const struct tagWND *)TopLevelWindow;
  if ( !TopLevelWindow
    || !IsHungWindow(TopLevelWindow)
    || !_ShouldGhostWindow(v3)
    || GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 900LL), 1LL, v4) )
  {
    return 0LL;
  }
  if ( !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v3) )
    return v3;
  return (struct tagWND *)v2;
}
