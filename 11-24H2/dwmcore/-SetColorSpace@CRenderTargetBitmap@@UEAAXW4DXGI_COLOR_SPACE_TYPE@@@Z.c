/*
 * XREFs of ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005A870
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18005C0E8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetColorSpace@CStereoRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802DAAC0 (-SetColorSpace@CStereoRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA60 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUPix.c)
 *     ?SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802CDE20 (-SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::SetColorSpace(CRenderTargetBitmap *this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, _BYTE *); // rax
  __int64 PixelFormatInfo; // rax
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, _QWORD); // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 5) + 8LL;
  v5 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL);
  if ( (char *)v5 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v4, v9);
  else
    PixelFormatInfo = v5(v4, v9);
  if ( a2 != *(_DWORD *)(PixelFormatInfo + 8) )
  {
    v7 = *((_QWORD *)this + 5) + 16LL;
    v8 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 144LL);
    if ( (char *)v8 == (char *)CDeviceTextureTarget::SetColorSpace )
      CDeviceTextureTarget::SetColorSpace(v7, a2);
    else
      v8(v7, a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 80));
  }
}
