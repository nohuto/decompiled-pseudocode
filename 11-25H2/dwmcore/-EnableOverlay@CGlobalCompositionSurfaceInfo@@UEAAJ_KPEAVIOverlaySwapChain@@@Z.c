/*
 * XREFs of ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z @ 0x1801E8740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801E87B0 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        struct IOverlaySwapChain *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  if ( a2 != *((_QWORD *)this + 17) || *((_BYTE *)this + 298) )
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x152u, 0LL);
  }
  else
  {
    v3 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
           a3);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x14Eu, 0LL);
  }
  return v4;
}
