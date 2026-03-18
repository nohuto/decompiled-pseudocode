/*
 * XREFs of ?ConfirmIndependentFlipEntry@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1802023F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConfirmIndependentFlipEntry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18020245C (-ConfirmIndependentFlipEntry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ConfirmIndependentFlipEntry(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( a2 == *((_QWORD *)this + 17) && *((_BYTE *)this + 292) )
  {
    v2 = CGlobalCompositionSurfaceInfo::CBindInfo::ConfirmIndependentFlipEntry((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
    v3 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x1E9u, 0LL);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1EDu, 0LL);
  }
  return v3;
}
