/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C02144DC
 * Callers:
 *     xxxFlushPalette @ 0x1C0214570 (xxxFlushPalette.c)
 *     xxxRealizePalette @ 0x1C02145A8 (xxxRealizePalette.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     xxxRealizeDesktop @ 0x1C01BE40C (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v4 = DesktopWindow;
  if ( v5 || v3 != DesktopWindow )
  {
    v10 = 0LL;
    v11 = 0LL;
    ThreadLockAlways(DesktopWindow, &v10);
    xxxRealizeDesktop(v4);
    ThreadUnlock1(v7, v6, v8);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
