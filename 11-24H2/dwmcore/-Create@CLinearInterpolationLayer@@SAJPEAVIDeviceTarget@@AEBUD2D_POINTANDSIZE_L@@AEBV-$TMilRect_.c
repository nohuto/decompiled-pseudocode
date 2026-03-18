/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800FE3C8
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020DF68 (-PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800FE538 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        _QWORD *a1,
        const struct D2D_POINTANDSIZE_L *a2,
        _OWORD *a3,
        CExternalLayer **a4)
{
  CDeviceTextureTarget *v8; // rax
  int Bitmap; // eax
  struct IRenderTargetBitmap *v10; // rbx
  unsigned int v11; // esi
  CExternalLayer *v12; // rax
  CExternalLayer *v13; // rdi
  struct IRenderTargetBitmap *v15; // [rsp+30h] [rbp-78h] BYREF
  const char *v16; // [rsp+38h] [rbp-70h] BYREF
  int v17; // [rsp+40h] [rbp-68h]
  char v18[24]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v19[4]; // [rsp+60h] [rbp-48h] BYREF
  int v20; // [rsp+64h] [rbp-44h]

  *a4 = 0LL;
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(a1[1] + 24LL))(a1 + 1, v19);
  v15 = 0LL;
  v20 = 1;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v15);
  v8 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 120LL))(a1, v18);
  v17 = 52;
  v16 = "DWM Scratch Rendertarget (linear interpolation layer";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v16,
             a2,
             (struct PixelFormatInfo *)v19,
             v8,
             1,
             (__int64 *)&v15);
  v10 = v15;
  v11 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x18u, 0LL);
  }
  else
  {
    v12 = (CExternalLayer *)operator new(0x88uLL);
    v13 = v12;
    if ( v12 )
    {
      CExternalLayer::CExternalLayer(v12, a2, v10);
      *(_QWORD *)v13 = &CLinearInterpolationLayer::`vftable';
      *(_OWORD *)((char *)v13 + 120) = *a3;
      *a4 = v13;
    }
    else
    {
      *a4 = 0LL;
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Du, 0LL);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v10 + 16LL))(v10);
  return v11;
}
