/*
 * XREFs of ?Initialize@CCombinedGeometryProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180067954
 * Callers:
 *     ??$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800674D4 (--$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180025564 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCombinedGeometryProxy::Initialize(CCombinedGeometryProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 8u, (__int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
