/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802222B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18005CAAC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x180222314 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalid@?$CDeviceResourceT@VIRenderTargetBitmap@@@@QEAAXXZ @ 0x18024E78C (-NotifyInvalid@-$CDeviceResourceT@VIRenderTargetBitmap@@@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  CRenderTargetBitmap *v2; // rbx

  v2 = (CRenderTargetBitmap *)((char *)this - 16);
  if ( *((_BYTE *)this + 112) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 16), a2) )
  {
    (*(void (__fastcall **)(CRenderTargetBitmap *, const struct IDeviceResource *))(*(_QWORD *)v2 + 8LL))(v2, a2);
    CDeviceResourceT<IRenderTargetBitmap>::NotifyInvalid((char *)this + 64);
    CRenderTargetBitmap::ReleaseDeviceTarget(v2);
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
