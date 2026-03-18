/*
 * XREFs of GreDwmUseDeviceBitmaps @ 0x1C0026144
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C00140D4 (GreCreateBitmapFromDxSurface.c)
 *     xxxDwmStopRedirection @ 0x1C0020430 (xxxDwmStopRedirection.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0025B70 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01349A0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 */

__int64 GreDwmUseDeviceBitmaps()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  v0 = 0;
  if ( (unsigned int)IsDwmActive() )
    return *(unsigned int *)(*(_QWORD *)(SGDGetSessionState(v1) + 32) + 8688LL);
  return v0;
}
