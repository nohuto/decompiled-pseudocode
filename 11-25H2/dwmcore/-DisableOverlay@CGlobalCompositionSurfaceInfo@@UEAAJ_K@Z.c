/*
 * XREFs of ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x18002C520
 * Callers:
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x18002D8C8 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1801E8964 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableOverlay(CGlobalCompositionSurfaceInfo *this, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 == *((_QWORD *)this + 17) && *((_BYTE *)this + 299) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x16Bu, 0LL);
  }
  return v2;
}
