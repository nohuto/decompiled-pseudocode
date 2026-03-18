/*
 * XREFs of ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180218FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180219070 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::GetMultiplaneOverlayCaps(
        CConversionSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int MultiplaneOverlayCaps; // eax
  unsigned int v4; // edi
  int v5; // r8d

  MultiplaneOverlayCaps = CLegacySwapChain::GetMultiplaneOverlayCaps(this, a2);
  v4 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, MultiplaneOverlayCaps, 0xAAu, 0LL);
  }
  else
  {
    v5 = *((_DWORD *)a2 + 3);
    *(_DWORD *)a2 = 2;
    *(_OWORD *)((char *)a2 + 4) = CConversionSwapChain::sc_fakeOverlayCaps;
    *((_DWORD *)a2 + 5) = 998244352;
    if ( (v5 & 0x40000) != 0 )
      *((_DWORD *)a2 + 3) |= 0x40000u;
    *(_OWORD *)((char *)a2 + 24) = 0LL;
    *((_DWORD *)a2 + 10) = 0;
  }
  return v4;
}
