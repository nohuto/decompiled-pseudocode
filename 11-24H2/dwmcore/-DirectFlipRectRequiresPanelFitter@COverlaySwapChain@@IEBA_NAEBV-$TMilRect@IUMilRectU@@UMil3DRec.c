/*
 * XREFs of ?DirectFlipRectRequiresPanelFitter@COverlaySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C7200
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C6F50 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 * Callees:
 *     ?GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180058490 (-GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlaySwapChain::DirectFlipRectRequiresPanelFitter(__int64 a1, _DWORD *a2)
{
  CLegacySwapChain *v2; // rcx
  __int64 (*v4)(void); // rax
  struct IDeviceTarget *BackBuffer; // rax
  struct IDeviceTarget *v6; // rcx
  void (__fastcall *v7)(struct IDeviceTarget *, int *); // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v2 = (CLegacySwapChain *)(a1 + 24);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 104LL);
  if ( (char *)v4 == (char *)CLegacySwapChain::GetBackBuffer )
    BackBuffer = CLegacySwapChain::GetBackBuffer(v2);
  else
    BackBuffer = (struct IDeviceTarget *)v4();
  v6 = BackBuffer;
  v7 = *(void (__fastcall **)(struct IDeviceTarget *, int *))(*(_QWORD *)BackBuffer + 88LL);
  if ( (char *)v7 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v6, &v9);
  else
    v7(v6, &v9);
  return *a2 || a2[1] || a2[2] - *a2 != v9 || a2[3] - a2[1] != v10;
}
