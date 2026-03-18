/*
 * XREFs of ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C1AE0
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801714A0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?DirectFlipRectRequiresPanelFitter@COverlaySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180084C04 (-DirectFlipRectRequiresPanelFitter@COverlaySwapChain@@IEBA_NAEBV-$TMilRect@IUMilRectU@@UMil3DRec.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x1800C5E70 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x1801724C4 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C1038 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801C1470 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C1D88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::PresentDFlip(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        unsigned int a5,
        struct IOverlayPlaneResource *a6,
        DXGI_COLOR_SPACE_TYPE a7,
        enum DXGI_HDR_METADATA_TYPE a8,
        void *a9,
        int *a10,
        _DWORD *a11)
{
  __int64 v12; // rbx
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // r15d
  bool v16; // r14
  bool v17; // al
  char v18; // cl
  int v19; // eax
  int v20; // eax
  CD3DDevice *v21; // rcx
  struct IDXGISwapChainDWM1 *v22; // rdx
  __int64 v23; // rcx
  enum DXGI_HDR_METADATA_TYPE v25; // [rsp+20h] [rbp-D9h]
  _DWORD v27[3]; // [rsp+44h] [rbp-B5h] BYREF
  void *v28; // [rsp+50h] [rbp-A9h]
  int v29; // [rsp+60h] [rbp-99h]
  int v30; // [rsp+64h] [rbp-95h]
  __int64 v31; // [rsp+68h] [rbp-91h]
  int v32; // [rsp+70h] [rbp-89h]
  int v33; // [rsp+74h] [rbp-85h]
  int v34; // [rsp+78h] [rbp-81h]
  int v35; // [rsp+7Ch] [rbp-7Dh]
  int v36; // [rsp+80h] [rbp-79h]
  int v37; // [rsp+84h] [rbp-75h]
  int v38; // [rsp+88h] [rbp-71h]
  __int128 v39; // [rsp+8Ch] [rbp-6Dh]
  __int128 v40; // [rsp+9Ch] [rbp-5Dh]
  __int64 v41; // [rsp+ACh] [rbp-4Dh]
  int v42; // [rsp+B4h] [rbp-45h]
  __int64 v43; // [rsp+B8h] [rbp-41h]
  int v44; // [rsp+C0h] [rbp-39h]
  DXGI_COLOR_SPACE_TYPE v45; // [rsp+C4h] [rbp-35h]
  __int64 v46; // [rsp+C8h] [rbp-31h]
  __int64 v47; // [rsp+D0h] [rbp-29h]
  __int64 v48; // [rsp+D8h] [rbp-21h]
  unsigned int v49; // [rsp+E0h] [rbp-19h]
  int v50; // [rsp+E4h] [rbp-15h]

  v12 = 0LL;
  v27[0] = 0;
  v27[1] = a3;
  v27[2] = a2;
  v28 = a9;
  if ( !IsDesktopOverlayPlaneResource(a6) )
  {
    v12 = (*(__int64 (__fastcall **)(struct IOverlayPlaneResource *, _DWORD *))(*(_QWORD *)a6 + 40LL))(a6, v27);
    if ( !v12 )
    {
      v13 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x21Du, 0LL);
      return v13;
    }
  }
  v14 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(a1 + 96), a7);
  v15 = v14;
  v16 = *(_DWORD *)(a1 + 64) == 2 || v14;
  if ( COverlaySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 24, a10)
    || (v17 = COverlaySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 24, a11), v18 = 0, v17) )
  {
    v18 = 1;
  }
  if ( v16 || v18 )
  {
    v29 = 0;
    v33 = 0;
    v50 = 0;
    v32 = v27[0];
    v30 = 1;
    v31 = v12;
    v34 = a4 != 0 ? 0x40 : 0;
    if ( v18 )
      v34 = (a4 != 0 ? 0x40 : 0) | 4;
    v20 = *a10;
    v21 = *(CD3DDevice **)(a1 + 40);
    v46 = 0LL;
    v47 = 0LL;
    v35 = v20;
    v36 = a10[1];
    v37 = a10[2];
    v38 = a10[3];
    v39 = *(_OWORD *)a11;
    v45 = a7;
    v42 = 0;
    v43 = 0LL;
    v44 = 0;
    v22 = *(struct IDXGISwapChainDWM1 **)(a1 + 264);
    v40 = v39;
    v41 = 1LL;
    v48 = 2LL;
    v49 = v15;
    v19 = CD3DDevice::PresentMPO(v21, v22);
    v13 = v19;
    if ( v19 < 0 )
    {
      v25 = 608;
      goto LABEL_21;
    }
  }
  else
  {
    v19 = CD3DDevice::Present(*(CD3DDevice **)(a1 + 40), *(struct IDXGISwapChainDWM1 **)(a1 + 264));
    v13 = v19;
    if ( v19 < 0 )
    {
      v25 = 618;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v25, 0LL);
      return v13;
    }
  }
  CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 24), 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(v23, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *(unsigned int *)(a1 + 88));
  return v13;
}
