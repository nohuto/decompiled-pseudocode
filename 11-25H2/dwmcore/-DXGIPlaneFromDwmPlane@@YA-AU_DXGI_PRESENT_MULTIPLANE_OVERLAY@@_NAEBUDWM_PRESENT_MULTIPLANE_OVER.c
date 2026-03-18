/*
 * XREFs of ?DXGIPlaneFromDwmPlane@@YA?AU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180171FAC
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800843A0 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x1801724C4 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall DXGIPlaneFromDwmPlane(_DWORD *a1, char a2, __int64 a3)
{
  memset_0(a1, 0, 0x88uLL);
  *a1 = *(_DWORD *)a3;
  a1[1] = *(unsigned __int8 *)(a3 + 4);
  *(_OWORD *)(a1 + 6) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 10) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 14) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a1 + 18) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(a1 + 22) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(a1 + 26) = *(_OWORD *)(a3 + 96);
  *(_OWORD *)(a1 + 30) = *(_OWORD *)(a3 + 112);
  if ( !IsDesktopOverlayPlaneResource(*(const struct IOverlayPlaneResource **)(a3 + 8)) )
  {
    *((_QWORD *)a1 + 1) = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a3 + 8) + 40LL))(
                            *(_QWORD *)(a3 + 8),
                            a1 + 4);
    goto LABEL_3;
  }
  if ( a2 )
LABEL_3:
    a1[6] |= 0x40u;
  return a1;
}
