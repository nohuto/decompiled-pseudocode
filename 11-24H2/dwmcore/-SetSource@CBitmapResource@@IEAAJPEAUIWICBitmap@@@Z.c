/*
 * XREFs of ?SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z @ 0x1801CE7DC
 * Callers:
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1801CE71C (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180172F58 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1801CE8F8 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResource::SetSource(CBitmapResource *this, struct IWICBitmapSource *a2)
{
  struct IBitmapRealization **v2; // rsi
  int v4; // ebx
  __int64 v6; // rdx
  struct IBitmapResource *StockTransparentBitmap; // rdi
  __int64 (__fastcall *v8)(struct IBitmapResource *, GUID *, struct IBitmapRealization **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IBitmapRealization **)((char *)this + 80);
  if ( a2 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
    v4 = CWICBitmapRealization::Create(a2, v2);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 102LL;
  }
  else
  {
    StockTransparentBitmap = CComposition::GetStockTransparentBitmap(*((CGlobalDrawingContext ***)this + 3));
    v8 = **(__int64 (__fastcall ***)(struct IBitmapResource *, GUID *, struct IBitmapRealization **))StockTransparentBitmap;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v2);
    v4 = v8(StockTransparentBitmap, &GUID_db178a3c_d733_4570_9513_5392d717955f, v2);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 109LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\bitmapresource.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
