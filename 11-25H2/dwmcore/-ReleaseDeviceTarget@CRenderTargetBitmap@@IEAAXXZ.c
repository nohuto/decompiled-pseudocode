/*
 * XREFs of ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1801C76BC
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18003F30C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z @ 0x1801C6C00 (-InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1801C74F0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x1801C763C (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18022D720 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802D7050 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::ReleaseDeviceTarget(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  void (__fastcall *v4)(__int64, unsigned __int64); // rax

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    v3 = ((unsigned __int64)this + 16) & -(__int64)(this != 0LL);
    v4 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 80LL);
    if ( (char *)v4 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::RemoveResourceNotifier )
      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::RemoveResourceNotifier(v2, v3);
    else
      v4(v2, v3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
  }
  CD2DBitmapCache::InitializeCache(this, 0LL);
}
