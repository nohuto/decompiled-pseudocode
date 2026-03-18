/*
 * XREFs of ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x1802D4880
 * Callers:
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCLegacySwapChain@@@Z @ 0x1802D4508 (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1802333E0 (-Initialize@CLegacySwapChain@@MEAAJXZ.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802D46A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::Initialize(CConversionSwapChain *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CLegacySwapChain::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x5Du, 0LL);
  }
  else
  {
    v4 = CConversionSwapChain::EnsureTargetBitmap(this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x5Fu, 0LL);
  }
  return v3;
}
