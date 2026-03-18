/*
 * XREFs of ?Create@CStockBitmapProducer@@SAJAEBU_D3DCOLORVALUE@@PEAPEAVIBitmapResource@@@Z @ 0x180212454
 * Callers:
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180172F58 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800FDAD4 (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020D78C (--1-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CStockBitmapProducer::Create(const struct _D3DCOLORVALUE *a1, struct IBitmapResource **a2)
{
  CCachedImageProducer *v4; // rax
  CCachedImageProducer *v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CEffectIntermediateProducer *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CCachedImageProducer *)MIDL_user_allocate(0x58uLL);
  v5 = v4;
  if ( v4 )
  {
    CCachedImageProducer::CCachedImageProducer(v4);
    *((_QWORD *)v5 + 2) = &CStockBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v5 = &CStockBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *(struct _D3DCOLORVALUE *)((char *)v5 + 72) = *(const struct _D3DCOLORVALUE *)&a1->r;
    CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v5 + 8));
    v8 = 0LL;
    *((_QWORD *)v5 + 3) = 0x100000001LL;
    *a2 = v5;
    wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(&v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\stockbitmap.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
