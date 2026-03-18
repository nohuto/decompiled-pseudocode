/*
 * XREFs of ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18017741C
 * Callers:
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800DF730 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     TryFillRenderState @ 0x180177164 (TryFillRenderState.c)
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180177340 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801AB8D0 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180177490 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x1802D6CF0 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUPix.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
