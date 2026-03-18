/*
 * XREFs of ?ConfirmIndependentFlipEntry@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1801F6180
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConfirmIndependentFlipEntry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801F61EC (-ConfirmIndependentFlipEntry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x20Bu, 0LL);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x20Fu, 0LL);
  }
  return v3;
}
