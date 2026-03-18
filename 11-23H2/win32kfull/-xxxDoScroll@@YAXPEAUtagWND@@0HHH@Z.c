/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228B10
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0228A20 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228E90 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C022969C (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C02298C0 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0229BBC (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C022AB40 (xxxTrackBox.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  ThreadLock(a2, &v9);
  xxxSendMessage((ULONG_PTR)a2);
  xxxWindowEvent(0x800Eu, a2, (a5 != 0) - 6, 0, 1);
  ThreadUnlock1(v7, v6, v8);
}
