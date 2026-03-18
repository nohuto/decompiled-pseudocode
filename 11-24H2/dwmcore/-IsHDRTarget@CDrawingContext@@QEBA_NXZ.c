/*
 * XREFs of ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18005D9DC
 * Callers:
 *     TryFillRenderState @ 0x18005D724 (TryFillRenderState.c)
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18005D900 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x18016AD60 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A1F90 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005DA50 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA80 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUPix.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDrawingContext::IsHDRTarget(CDrawingContext *this)
{
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64, _BYTE *); // rax
  __int64 PixelFormatInfo; // rax
  enum DXGI_COLOR_SPACE_TYPE v4; // ecx
  bool v5; // al
  char v6; // cl
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 4) + 8LL;
  v2 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 24LL);
  if ( (char *)v2 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v1, v8);
  else
    PixelFormatInfo = v2(v1, v8);
  v4 = *(_DWORD *)(PixelFormatInfo + 8);
  if ( v4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    return 1;
  v5 = IsDXGIColorSpaceRec2020(v4);
  v6 = 0;
  if ( v5 )
    return 1;
  return v6;
}
