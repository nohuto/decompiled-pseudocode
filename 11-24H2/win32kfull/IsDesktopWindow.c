/*
 * XREFs of IsDesktopWindow @ 0x140075580
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     TrackLayeredZorder @ 0x140075130 (TrackLayeredZorder.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1400751DC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UnlinkWindow @ 0x140075240 (UnlinkWindow.c)
 *     UserGetRedirectedWindowOrigin @ 0x140075480 (UserGetRedirectedWindowOrigin.c)
 *     ValidateParentDepth @ 0x1400894E8 (ValidateParentDepth.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
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
