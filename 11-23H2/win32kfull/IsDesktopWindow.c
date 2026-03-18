/*
 * XREFs of IsDesktopWindow @ 0x1C00B3188
 * Callers:
 *     CreateSpb @ 0x1C000DCF4 (CreateSpb.c)
 *     zzzDecomposeDesktop @ 0x1C00206F8 (zzzDecomposeDesktop.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00231F0 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0024A64 (CreateOrGetRedirectionBitmap.c)
 *     ComposeWindow @ 0x1C0026348 (ComposeWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00A47A4 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     TrackLayeredZorder @ 0x1C00B2F78 (TrackLayeredZorder.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00B30D4 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00B3114 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C00B4A8C (ComposeWindowIfNeeded.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDesktopWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      v2 = *(_QWORD *)(v3 + 24);
  }
  return a1 == v2;
}
