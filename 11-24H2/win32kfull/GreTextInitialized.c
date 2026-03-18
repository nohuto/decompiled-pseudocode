/*
 * XREFs of GreTextInitialized @ 0x140113698
 * Callers:
 *     xxxInitWindowStation @ 0x140112ADC (xxxInitWindowStation.c)
 *     CreateBitmapStrip @ 0x140113600 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1401CDCAC (GetCharDimensions.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 *     EnsureDpiServerInfoForDpiOld @ 0x1402875D0 (EnsureDpiServerInfoForDpiOld.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401136F0 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113BD8 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall GreTextInitialized(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned int v4; // ebx

  SessionState = W32GetSessionState(a1, a2, a3);
  v4 = 0;
  if ( KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(SessionState + 96) + 24232LL))
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    return 1LL;
  }
  LOBYTE(v4) = UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread();
  return v4;
}
