/*
 * XREFs of ?Initialize@CAtlasedRectsMeshProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x18006EEAC
 * Callers:
 *     ??$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x18006EDCC (--$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180025564 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedRectsMeshProxy::Initialize(CAtlasedRectsMeshProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 3u, (__int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
