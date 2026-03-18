/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x180042E74
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18003F30C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z @ 0x180042D80 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18004312C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802E3B24 (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180040E14 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??4?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIDeviceTextureTarget@@@Z @ 0x180042F3C (--4-$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIDeviceTe.c)
 *     ?AddResourceNotifier@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x1802D6A30 (-AddResourceNotifier@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EAAXPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IDeviceTextureTarget *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  void (__fastcall *v6)(__int64, unsigned __int64); // rax
  struct ID2DBitmapCacheSource *v7; // rcx
  struct ID2DBitmapCacheSource *v8; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::operator=((char *)this + 120);
  v4 = *((_QWORD *)this + 15);
  v5 = ((unsigned __int64)this + 16) & -(__int64)(this != 0LL);
  v6 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 72LL);
  if ( (char *)v6 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::AddResourceNotifier )
    IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::AddResourceNotifier(v4, v5);
  else
    v6(v4, v5);
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_BYTE *)this + 128) )
    goto LABEL_4;
  if ( (**(int (__fastcall ***)(struct IDeviceTextureTarget *, GUID *, struct ID2DBitmapCacheSource **))a2)(
         a2,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         &v8) < 0 )
  {
    v7 = v8;
LABEL_4:
    *((_BYTE *)this + 128) = 1;
    goto LABEL_5;
  }
  CD2DBitmapCache::InitializeCache(this, v8);
  v7 = v8;
LABEL_5:
  if ( v7 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v7 + 16LL))(v7);
}
