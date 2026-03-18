/*
 * XREFs of ?SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z @ 0x1802917E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x180291634 (-SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetIndependentFlipDuration(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  if ( a2 == *((_QWORD *)this + 17) && *((_BYTE *)this + 292) )
  {
    v3 = CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipDuration(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
           a3);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x21Fu, 0LL);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x223u, 0LL);
  }
  return v4;
}
