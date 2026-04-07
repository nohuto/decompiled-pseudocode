/*
 * XREFs of ?Initialize@CIndirectSwapchainRenderTargetProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800C6D98
 * Callers:
 *     ??$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800B5988 (--$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchai.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180025564 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTargetProxy::Initialize(
        CIndirectSwapchainRenderTargetProxy *this,
        struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 0x12u, (__int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
