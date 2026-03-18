/*
 * XREFs of ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18028695C
 * Callers:
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180271910 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800295A8 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorSpaceLayer::Create(
        struct IDeviceTarget *a1,
        const struct D2D_POINTANDSIZE_L *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct CColorSpaceLayer **a4)
{
  bool v7; // al
  int v8; // r8d
  CDeviceTextureTarget *v9; // rax
  int Bitmap; // eax
  unsigned int v11; // edi
  CExternalLayer *v12; // rax
  CExternalLayer *v13; // rbx
  _DWORD v15[4]; // [rsp+30h] [rbp-40h] BYREF
  const char *v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  _BYTE v18[32]; // [rsp+50h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+90h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = IsDXGIColorSpaceHDR(a3);
  v15[1] = 1;
  v15[2] = v8;
  v19 = 0LL;
  v15[0] = v7 ? 10 : 87;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v19);
  v9 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(*(_QWORD *)a1 + 120LL))(
                                 a1,
                                 v18);
  v17 = 43;
  v16 = "DWM Scratch Rendertarget (colorspace layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v16,
             a2,
             (struct PixelFormatInfo *)v15,
             v9,
             1,
             (__int64 *)&v19);
  v11 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x20u, 0LL);
  }
  else
  {
    v12 = (CExternalLayer *)operator new(0x80uLL);
    v13 = v12;
    if ( v12 )
    {
      CExternalLayer::CExternalLayer(v12, a2, v19);
      *((_BYTE *)v13 + 120) = 1;
      *(_QWORD *)v13 = &CColorSpaceLayer::`vftable';
      *a4 = v13;
    }
    else
    {
      *a4 = 0LL;
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v11;
}
