/*
 * XREFs of ?SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180291850
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1802374B8 (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetIndependentFlipNotify(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  if ( a2 == *((_QWORD *)this + 17) && *((_BYTE *)this + 292) )
  {
    v3 = CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
           a3);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x1F8u, 0LL);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1FCu, 0LL);
  }
  return v4;
}
