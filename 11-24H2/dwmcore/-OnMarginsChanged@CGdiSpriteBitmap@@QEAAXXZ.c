/*
 * XREFs of ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x180026374
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180025CC4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?SetMargins@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJU_MARGINS@@@Z @ 0x180025E38 (-SetMargins@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJU_MARGINS@@@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800260D0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x180026BB0 (-SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGdiSpriteBitmap::OnMarginsChanged(CGdiSpriteBitmap *this)
{
  CColorKeyBitmapRealization *v2; // rcx
  void (__fastcall *v3)(CColorKeyBitmapRealization *__hidden, const struct _MARGINS *); // rax
  __int64 *v4; // rsi
  __int64 *v5; // r15
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, _MARGINS *); // rbx
  __int64 v8; // rax
  __int64 *v9; // [rsp+20h] [rbp-30h] BYREF
  _MARGINS v10; // [rsp+28h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF

  v2 = (CColorKeyBitmapRealization *)*((_QWORD *)this + 56);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(CColorKeyBitmapRealization *__hidden, const struct _MARGINS *))(*(_QWORD *)v2 + 120LL);
    v10 = *(_MARGINS *)((char *)this + 88);
    if ( v3 == CColorKeyBitmapRealization::SetMargins )
      CColorKeyBitmapRealization::SetMargins(v2, &v10);
    else
      v3(v2, &v10);
    v4 = (__int64 *)*((_QWORD *)this + 57);
    v5 = (__int64 *)*((_QWORD *)this + 58);
    while ( v4 != v5 )
    {
      v6 = *v4;
      *(_QWORD *)&v10.cxLeftWidth = 0LL;
      v9 = 0LL;
      v7 = *(int (__fastcall **)(__int64, _MARGINS *))(*(_QWORD *)(v6 + 72) + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v10);
      if ( v7(v6 + 72, &v10) >= 0 )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v9);
        if ( (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))&v10.cxLeftWidth)(
               *(_QWORD *)&v10.cxLeftWidth,
               &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309,
               &v9) >= 0 )
        {
          v8 = *v9;
          v11 = *(_OWORD *)((char *)this + 88);
          (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 120))(v9, &v11);
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v10);
      ++v4;
    }
  }
}
