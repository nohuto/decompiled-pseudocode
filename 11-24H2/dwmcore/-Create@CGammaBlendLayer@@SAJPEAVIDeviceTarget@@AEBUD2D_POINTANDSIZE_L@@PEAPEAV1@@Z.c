/*
 * XREFs of ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x18027C050
 * Callers:
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180265900 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800FE538 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGammaBlendLayer::Create(
        struct IDeviceTarget *a1,
        const struct D2D_POINTANDSIZE_L *a2,
        struct CGammaBlendLayer **a3)
{
  int v3; // eax
  CDeviceTextureTarget *v7; // rax
  int Bitmap; // eax
  unsigned int v9; // edi
  CExternalLayer *v10; // rax
  struct CGammaBlendLayer *v11; // rbx
  _DWORD v13[4]; // [rsp+30h] [rbp-40h] BYREF
  const char *v14; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+48h] [rbp-28h]
  _BYTE v16[32]; // [rsp+50h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v17; // [rsp+90h] [rbp+20h] BYREF

  *a3 = 0LL;
  v3 = 87;
  v13[2] = 0;
  if ( CCommonRegistryData::GammaBlendWithFP16 )
    v3 = 10;
  v17 = 0LL;
  v13[0] = v3;
  v13[1] = 1;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v17, (__int64)a2, (__int64)a3);
  v7 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(*(_QWORD *)a1 + 120LL))(
                                 a1,
                                 v16);
  v15 = 44;
  v14 = "DWM Scratch Rendertarget (gamma blend layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v14,
             a2,
             (struct PixelFormatInfo *)v13,
             v7,
             1,
             (__int64 *)&v17);
  v9 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x27u, 0LL);
  }
  else
  {
    v10 = (CExternalLayer *)operator new(0x78uLL);
    v11 = v10;
    if ( v10 )
    {
      CExternalLayer::CExternalLayer(v10, a2, v17);
      *a3 = v11;
      *(_QWORD *)v11 = &CGammaBlendLayer::`vftable';
    }
    else
    {
      *a3 = 0LL;
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Bu, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v9;
}
