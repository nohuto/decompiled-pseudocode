/*
 * XREFs of ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180068DF0
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x180068ABC (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D9350 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18005CAAC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D0B4 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180068F70 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180069250 (-NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::ReleaseTexture(CDxHandleYUVBitmapRealization *this)
{
  __int64 *v1; // rdi
  struct Windows::Devices::Display::Core::IDisplaySurface *v3; // rdx
  CD3DResource *v4; // rcx
  CRenderTargetBitmap *v5; // rbx

  v1 = (__int64 *)((char *)this + 384);
  v3 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 48);
  if ( v3 )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased(this, v3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
  v4 = (CD3DResource *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    CD3DResource::RemoveResourceNotifier(
      v4,
      (const struct IDeviceResourceNotify *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((struct CMILPoolResource **)this + 47);
  }
  v5 = (CRenderTargetBitmap *)*((_QWORD *)this + 36);
  if ( v5 )
  {
    CRenderTargetBitmap::ReleaseDeviceTarget(v5);
    *((_BYTE *)v5 + 136) = 0;
  }
}
