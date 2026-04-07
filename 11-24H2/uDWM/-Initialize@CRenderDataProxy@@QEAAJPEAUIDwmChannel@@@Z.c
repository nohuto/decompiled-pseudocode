/*
 * XREFs of ?Initialize@CRenderDataProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180024E60
 * Callers:
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x180024FA8 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180025564 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataProxy::Initialize(CRenderDataProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize(this, 30LL, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
