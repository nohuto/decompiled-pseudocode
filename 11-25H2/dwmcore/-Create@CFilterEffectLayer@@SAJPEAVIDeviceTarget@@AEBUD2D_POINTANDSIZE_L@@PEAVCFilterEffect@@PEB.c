/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18022DF68
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180028A60 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800265FC (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800295A8 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18022E110 (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IDeviceTarget *a1,
        const struct D2D_POINTANDSIZE_L *a2,
        struct CFilterEffect *a3,
        const struct CVisual *a4,
        const struct D2D_POINTANDSIZE_F *a5,
        struct CFilterEffectLayer **a6)
{
  bool IsOpaque; // al
  int v11; // ecx
  int v12; // ebx
  CDeviceTextureTarget *v13; // rax
  int Bitmap; // eax
  struct IRenderTargetBitmap *v15; // rbx
  unsigned int v16; // esi
  CExternalLayer *v17; // rax
  CExternalLayer *v18; // rdi
  struct IRenderTargetBitmap *v20; // [rsp+30h] [rbp-50h] BYREF
  const char *v21; // [rsp+38h] [rbp-48h] BYREF
  int v22; // [rsp+40h] [rbp-40h]
  _BYTE v23[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v24[4]; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+64h] [rbp-1Ch]

  *a6 = 0LL;
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a1 + 1) + 24LL))((char *)a1 + 8, v24);
  IsOpaque = CFilterEffect::IsOpaque(a3, a4);
  v11 = v25;
  v12 = 1;
  if ( !IsOpaque )
    v11 = 1;
  v25 = v11;
  if ( (unsigned __int8)CFilterEffect::ContainEffectInChain(a3, 63LL)
    || (unsigned __int8)CFilterEffect::ContainEffectInChain(a3, 154LL) )
  {
    v12 = 2;
  }
  v20 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v20);
  v13 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(*(_QWORD *)a1 + 120LL))(
                                  a1,
                                  v23);
  v22 = 46;
  v21 = "DWM Scratch Rendertarget (filter effect layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v21,
             a2,
             (struct PixelFormatInfo *)v24,
             v13,
             v12,
             (__int64 *)&v20);
  v15 = v20;
  v16 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x25u, 0LL);
  }
  else
  {
    v17 = (CExternalLayer *)operator new(0x90uLL);
    v18 = v17;
    if ( v17 )
    {
      CExternalLayer::CExternalLayer(v17, a2, v15);
      *((_QWORD *)v18 + 15) = a3;
      *(_QWORD *)v18 = &CFilterEffectLayer::`vftable';
    }
    else
    {
      v18 = 0LL;
    }
    *a6 = v18;
    if ( v18 )
    {
      *((_OWORD *)v18 + 8) = *(_OWORD *)a5;
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
  return v16;
}
