/*
 * XREFs of ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1801DEFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801DF078 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableIndependentFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  if ( a2 == *((_QWORD *)this + 17) && *((_BYTE *)this + 292) )
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x230u, 0LL);
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x234u, 0LL);
  }
  return v2;
}
