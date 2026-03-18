/*
 * XREFs of ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1802D3D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x1800C5E70 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x1801724C4 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C1038 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::PresentDFlip(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct IOverlayPlaneResource *a6)
{
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  if ( IsDesktopOverlayPlaneResource(a6)
    || (*(__int64 (__fastcall **)(struct IOverlayPlaneResource *, _QWORD))(*(_QWORD *)a6 + 40LL))(a6, 0LL) )
  {
    v8 = CD3DDevice::Present(*(CD3DDevice **)(a1 + 40), *(struct IDXGISwapChainDWM1 **)(a1 + 264));
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xBFu, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0x_EventWriteTransfer(v9, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *(unsigned int *)(a1 + 88));
      CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 24), 0);
    }
  }
  else
  {
    v7 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0xB7u, 0LL);
  }
  return v7;
}
