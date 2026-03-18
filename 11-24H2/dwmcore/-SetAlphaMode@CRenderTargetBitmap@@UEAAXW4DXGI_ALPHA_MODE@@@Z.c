/*
 * XREFs of ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18005A9B0
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18005C0E8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802DAA80 (-SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18005A650 (-SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA60 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUPix.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::SetAlphaMode(CRenderTargetBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, _BYTE *); // rax
  __int64 PixelFormatInfo; // rax
  CD2DBitmap *v7; // rcx
  void (__fastcall *v8)(CD2DBitmap *, enum DXGI_ALPHA_MODE); // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 5) + 8LL;
  v5 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL);
  if ( (char *)v5 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v4, v9);
  else
    PixelFormatInfo = v5(v4, v9);
  if ( a2 != *(_DWORD *)(PixelFormatInfo + 4) )
  {
    v7 = (CD2DBitmap *)(*((_QWORD *)this + 5) + 16LL);
    v8 = *(void (__fastcall **)(CD2DBitmap *, enum DXGI_ALPHA_MODE))(*(_QWORD *)v7 + 136LL);
    if ( v8 == CD2DBitmap::SetAlphaMode )
      CD2DBitmap::SetAlphaMode(v7, a2);
    else
      v8(v7, a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 80));
  }
}
