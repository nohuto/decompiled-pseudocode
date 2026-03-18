/*
 * XREFs of ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180040E14
 * Callers:
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x180042E74 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180062D30 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x18018A660 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18018B180 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1801C76BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1801D5184 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1801DCA6C (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802E05C0 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802E1A90 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802E1E50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802E21A0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802E21E0 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x180041D00 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041D90 (-InternalQueryInterface@-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042020 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VID2DBitmapCacheSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042190 (-InternalQueryInterface@-$CMILCOMBaseT@VID2DBitmapCacheSource@@V1@VCMilObjectDeleter@@@@IEAAJAEB.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1800433DC (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800435E0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DBitmapCache::InitializeCache(CD2DBitmapCache *this, struct ID2DBitmapCacheSource *a2)
{
  struct CMILPoolResource *v4; // rsi
  unsigned int (__fastcall *v5)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v6)(struct CMILPoolResource *); // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // zf
  CD2DBitmap *v10; // rcx
  char *v11; // r8
  __int64 (__fastcall *v12)(CSystemMemoryBitmap *); // rax
  CD2DBitmap *v13; // rcx
  bool (__fastcall *v14)(CD2DBitmap *__hidden); // rax
  char v15; // al
  CD2DBitmap *v16; // rcx
  __int64 (__fastcall *v17)(CD2DBitmap *); // rax
  int Interface; // eax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>();
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  }
  v4 = (struct CMILPoolResource *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
  {
    v5 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)a2 + 8LL);
    if ( v5 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(a2);
    else
      v5(a2);
  }
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(struct CMILPoolResource *))(*(_QWORD *)v4 + 16LL);
    if ( v6 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v4);
    else
      v6(v4);
  }
  v7 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v8 )
    CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease();
  v9 = *((_QWORD *)this + 3) == 0LL;
  *((_BYTE *)this + 72) = 0;
  if ( !v9 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 32);
    v10 = (CD2DBitmap *)*((_QWORD *)this + 3);
    v11 = (char *)this + 32;
    v12 = **(__int64 (__fastcall ***)(CSystemMemoryBitmap *))v10;
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
      v20 = 0LL;
      v16 = (CD2DBitmap *)*((_QWORD *)this + 3);
      v17 = **(__int64 (__fastcall ***)(CD2DBitmap *))v16;
      if ( v17 == CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface )
        Interface = CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(v16);
      else
        Interface = ((__int64 (__fastcall *)(CD2DBitmap *, GUID *, __int64 *))v17)(
                      v16,
                      &IID_IWICDecoderBitmapSource,
                      &v20);
      if ( Interface >= 0 )
      {
        v19 = v20;
        *((_BYTE *)this + 72) = 1;
        ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v19);
      }
    }
  }
}
