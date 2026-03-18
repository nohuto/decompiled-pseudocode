/*
 * XREFs of ?SetAnalogExclusive@CGlobalCompositionSurfaceInfo@@UEAAJ_N@Z @ 0x1802915E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetAnalogExclusive(
        CGlobalCompositionSurfaceInfo *this,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = NtSetCompositionSurfaceAnalogExclusive(*((_QWORD *)this + 4), a2);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3 | 0x10000000, 0x255u, 0LL);
  }
  return v2;
}
