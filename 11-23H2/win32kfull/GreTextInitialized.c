/*
 * XREFs of GreTextInitialized @ 0x1C00CD5A0
 * Callers:
 *     xxxInitWindowStation @ 0x1C0096B94 (xxxInitWindowStation.c)
 *     GetCharDimensions @ 0x1C00CD400 (GetCharDimensions.c)
 *     CreateBitmapStrip @ 0x1C00D4250 (CreateBitmapStrip.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01BE94C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200550 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00CF1C4 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C01144F8 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall GreTextInitialized(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx

  v1 = SGDGetSessionState(a1);
  v2 = 0;
  if ( KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(v1 + 32) + 23568LL))
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    return 1LL;
  }
  LOBYTE(v2) = UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread();
  return v2;
}
