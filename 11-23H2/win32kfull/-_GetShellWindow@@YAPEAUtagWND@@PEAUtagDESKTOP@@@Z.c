/*
 * XREFs of ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x1C006296C
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010910 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0062778 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C00628E0 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxDesktopPaintCallback @ 0x1C00985F0 (xxxDesktopPaintCallback.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall _GetShellWindow(struct tagDESKTOP *a1)
{
  if ( a1 )
    return *(struct tagWND **)(*((_QWORD *)a1 + 1) + 168LL);
  else
    return 0LL;
}
