/*
 * XREFs of ?Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x18027B620
 * Callers:
 *     ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x180265AA8 (-PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??0CValueColorTransformLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@AEBUMilColorTransform@@@Z @ 0x18027B5A4 (--0CValueColorTransformLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@AEBUMilColor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CValueColorTransformLayer::Create(
        struct IDeviceTarget *a1,
        const struct D2D_POINTANDSIZE_L *a2,
        const struct MilColorTransform *a3,
        struct CValueColorTransformLayer **a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  CDeviceTextureTarget *v10; // rax
  int Bitmap; // eax
  unsigned int v12; // ebx
  CValueColorTransformLayer *v13; // rax
  struct CValueColorTransformLayer *v14; // rax
  struct IRenderTargetBitmap *v16; // [rsp+30h] [rbp-50h] BYREF
  const char *v17; // [rsp+38h] [rbp-48h] BYREF
  int v18; // [rsp+40h] [rbp-40h]
  _BYTE v19[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v20[4]; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+64h] [rbp-1Ch]

  *a4 = 0LL;
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a1 + 1) + 24LL))((char *)a1 + 8, v20);
  v16 = 0LL;
  v21 = 1;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v16, v8, v9);
  v10 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(*(_QWORD *)a1 + 120LL))(
                                  a1,
                                  v19);
  v18 = 48;
  v17 = "DWM Scratch Rendertarget (color transform layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v17,
             a2,
             (struct PixelFormatInfo *)v20,
             v10,
             1,
             (__int64 *)&v16);
  v12 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0xB1u, 0LL);
    goto LABEL_8;
  }
  v13 = (CValueColorTransformLayer *)operator new(0xE0uLL);
  if ( !v13 )
  {
    *a4 = 0LL;
LABEL_6:
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xB6u, 0LL);
    goto LABEL_8;
  }
  v14 = CValueColorTransformLayer::CValueColorTransformLayer(v13, a2, v16, a3);
  *a4 = v14;
  if ( !v14 )
    goto LABEL_6;
LABEL_8:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v12;
}
