/*
 * XREFs of GreDwmUseDeviceBitmaps @ 0x140014E60
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1400148B8 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401B8A30 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C83CC (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 */

__int64 GreDwmUseDeviceBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned int)IsDwmActive() )
    return *(unsigned int *)(*(_QWORD *)(W32GetSessionState() + 96) + 88LL);
  return v0;
}
