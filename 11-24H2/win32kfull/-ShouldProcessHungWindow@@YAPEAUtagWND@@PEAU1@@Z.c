/*
 * XREFs of ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140148C3C
 * Callers:
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1401489D8 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x140148B98 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     NtUserQueryWindow @ 0x140244680 (NtUserQueryWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064C04 (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140148A3C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x140148DBC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(struct tagWND *a1)
{
  const struct tagTHREADINFO **TopLevelWindow; // rax
  __int64 v2; // rbx
  const struct tagWND *v3; // rdi
  __int64 v5; // rdx

  TopLevelWindow = (const struct tagTHREADINFO **)GetTopLevelWindow((__int64)a1);
  v2 = 0LL;
  v3 = (const struct tagWND *)TopLevelWindow;
  if ( !TopLevelWindow || !IsHungWindow(TopLevelWindow) || !_ShouldGhostWindow(v3) || GetGhostProp(v3, v5) )
    return 0LL;
  if ( !IsWindowCloaked(v3) )
    return v3;
  return (struct tagWND *)v2;
}
