/*
 * XREFs of ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800596A0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18005A870 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18005A9B0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x18005C5E0 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x18005A390 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A420 (-InternalQueryInterface@-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A920 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VID2DBitmapCacheSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005AB40 (-InternalQueryInterface@-$CMILCOMBaseT@VID2DBitmapCacheSource@@V1@VCMilObjectDeleter@@@@IEAAJAEB.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x18018B6F0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18018B8F0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDD00 (-QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::ResetBitmapCache(CRenderTargetBitmap *this)
{
  void (__fastcall ***v2)(_QWORD, GUID *, CMILRefCountImpl **); // rcx
  void (__fastcall *v3)(_QWORD, GUID *, CMILRefCountImpl **); // rax
  CMILRefCountImpl *v4; // rdi
  struct CMILPoolResource *v5; // rsi
  unsigned int (__fastcall *v6)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v7)(struct CMILPoolResource *); // rax
  __int64 v8; // rcx
  bool v9; // zf
  CD2DBitmap *v10; // rcx
  char *v11; // r8
  __int64 (__fastcall *v12)(CD2DBitmap *); // rax
  CD2DBitmap *v13; // rcx
  bool (__fastcall *v14)(CD2DBitmap *__hidden); // rax
  char v15; // al
  CD2DBitmap *v16; // rcx
  __int64 (__fastcall *v17)(CD2DBitmap *); // rax
  int v18; // eax
  __int64 v19; // rcx
  CMILRefCountImpl *v20; // [rsp+30h] [rbp+8h] BYREF
  __int64 v21; // [rsp+38h] [rbp+10h] BYREF

  v20 = 0LL;
  v2 = (void (__fastcall ***)(_QWORD, GUID *, CMILRefCountImpl **))*((_QWORD *)this + 15);
  if ( v2 && !*((_BYTE *)this + 128) )
  {
    v3 = **v2;
    if ( (char *)v3 == (char *)CDeviceTextureTarget::QueryInterface )
      CDeviceTextureTarget::QueryInterface(v2, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v20);
    else
      v3(v2, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v20);
  }
  v4 = v20;
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>();
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  }
  v5 = (struct CMILPoolResource *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v4;
  if ( v4 )
  {
    v6 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v4 + 8LL);
    if ( v6 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v6(v4);
  }
  if ( v5 )
  {
    v7 = *(__int64 (__fastcall **)(struct CMILPoolResource *))(*(_QWORD *)v5 + 16LL);
    if ( v7 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v5);
    else
      v7(v5);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 4);
  v8 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v8 )
    CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease();
  v9 = *((_QWORD *)this + 3) == 0LL;
  *((_BYTE *)this + 72) = 0;
  if ( !v9 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 4);
    v10 = (CD2DBitmap *)*((_QWORD *)this + 3);
    v11 = (char *)this + 32;
    v12 = **(__int64 (__fastcall ***)(CD2DBitmap *))v10;
    if ( v12 == CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface )
    {
      CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(v10);
    }
    else if ( v12 == CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface )
    {
      CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface(v10);
    }
    else if ( (char *)v12 == (char *)CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>::InternalQueryInterface )
    {
      CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>::InternalQueryInterface(
        v10,
        &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5,
        v11);
    }
    else
    {
      ((void (__fastcall *)(CD2DBitmap *, GUID *, char *))v12)(v10, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, v11);
    }
    v13 = (CD2DBitmap *)*((_QWORD *)this + 3);
    v14 = *(bool (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v13 + 80LL);
    v15 = v14 == CD2DBitmap::SupportsFastLock ? CD2DBitmap::SupportsFastLock(v13) : ((__int64 (*)(void))v14)();
    if ( !v15 )
    {
      v21 = 0LL;
      v16 = (CD2DBitmap *)*((_QWORD *)this + 3);
      v17 = **(__int64 (__fastcall ***)(CD2DBitmap *))v16;
      v18 = v17 == CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface
          ? CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(v16)
          : ((__int64 (__fastcall *)(CD2DBitmap *, GUID *, __int64 *))v17)(v16, &IID_IWICDecoderBitmapSource, &v21);
      if ( v18 >= 0 )
      {
        v19 = v21;
        *((_BYTE *)this + 72) = 1;
        ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v19);
      }
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v20 + 16LL))(v20);
}
