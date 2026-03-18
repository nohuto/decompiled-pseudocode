/*
 * XREFs of ?DXGIPlaneFromDwmPlane@@YA?AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1801723EC
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18002DCE0 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1801720D0 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 * Callees:
 *     ?GetSurfaceLuid@CSwapChainBuffer@@UEBA?AU_LUID@@XZ @ 0x180172510 (-GetSurfaceLuid@CSwapChainBuffer@@UEBA-AU_LUID@@XZ.c)
 *     ?GetDXGIResource@CLegacySwapChainBuffer@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x180172530 (-GetDXGIResource@CLegacySwapChainBuffer@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall DXGIPlaneFromDwmPlane(_DWORD *a1, __int64 a2)
{
  unsigned int *v4; // rdx
  CLegacySwapChainBuffer *v5; // rcx
  struct IDXGIResource *(__fastcall *v6)(CLegacySwapChainBuffer *__hidden, unsigned int *); // rax
  struct IDXGIResource *DXGIResource; // rax
  CSwapChainBuffer *v8; // rcx
  struct _LUID (__fastcall *v9)(CSwapChainBuffer *__hidden); // rax
  _QWORD *SurfaceLuid; // rax
  _DWORD *result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  memset_0(a1, 0, 0x90uLL);
  *a1 = *(_DWORD *)a2;
  v4 = a1 + 7;
  v5 = *(CLegacySwapChainBuffer **)(a2 + 8);
  v6 = *(struct IDXGIResource *(__fastcall **)(CLegacySwapChainBuffer *__hidden, unsigned int *))(*(_QWORD *)v5 + 40LL);
  if ( v6 == CLegacySwapChainBuffer::GetDXGIResource )
    DXGIResource = CLegacySwapChainBuffer::GetDXGIResource(v5, v4);
  else
    DXGIResource = v6(v5, v4);
  *((_QWORD *)a1 + 1) = DXGIResource;
  a1[4] = *(_DWORD *)(a2 + 16);
  v8 = *(CSwapChainBuffer **)(a2 + 8);
  v9 = *(struct _LUID (__fastcall **)(CSwapChainBuffer *__hidden))(*(_QWORD *)v8 + 24LL);
  if ( v9 == CSwapChainBuffer::GetSurfaceLuid )
    SurfaceLuid = (_QWORD *)CSwapChainBuffer::GetSurfaceLuid(v8);
  else
    SurfaceLuid = (_QWORD *)((__int64 (__fastcall *)(CSwapChainBuffer *, char *))v9)(v8, &v12);
  *(_QWORD *)(a1 + 5) = *SurfaceLuid;
  result = a1;
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 24);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 40);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 56);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 72);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 88);
  *((_OWORD *)a1 + 7) = *(_OWORD *)(a2 + 104);
  *((_OWORD *)a1 + 8) = *(_OWORD *)(a2 + 120);
  return result;
}
