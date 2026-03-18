/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18020CC80
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18020CBF0 (-GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::GetMultiplaneOverlayCaps(
        CLegacySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // esi

  *((_DWORD *)this + 16) = 0;
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 )
      {
        *((_DWORD *)this + 16) = 2;
      }
      else if ( *(_DWORD *)a2 > 1u && (*((_DWORD *)a2 + 1) || *((_DWORD *)a2 + 2)) )
      {
        *((_DWORD *)this + 16) = 1;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, v5, 0x1A1u, 0LL);
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, -2003304307, 0x1B1u, 0LL);
  }
  return v6;
}
