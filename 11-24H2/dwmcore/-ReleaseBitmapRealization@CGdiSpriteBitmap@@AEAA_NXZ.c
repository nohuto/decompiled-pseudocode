/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18002650C
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026324 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x18004949C (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18022AEA0 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  char *v1; // rsi
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  char v4; // di
  void *v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 448;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 56);
  v4 = 0;
  if ( v3 )
  {
    v8 = 0LL;
    if ( (**v3)(v3, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v8) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 80LL))(
        v8,
        ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    v7 = v8;
    v4 = 1;
    *((_QWORD *)this + 46) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v5 = (void *)*((_QWORD *)this + 57);
  if ( v5 != *((void **)this + 58) )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(v5);
    *((_QWORD *)this + 58) = *((_QWORD *)this + 57);
  }
  return v4;
}
