/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x1801B4898
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800FE538 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1801B4A40 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B4AD0 (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  CDeviceTextureTarget *v15; // rax
  int Bitmap; // eax
  struct IRenderTargetBitmap *v17; // rbx
  unsigned int v18; // esi
  CExternalLayer *v19; // rax
  CExternalLayer *v20; // rdi
  struct IRenderTargetBitmap *v22; // [rsp+30h] [rbp-50h] BYREF
  const char *v23; // [rsp+38h] [rbp-48h] BYREF
  int v24; // [rsp+40h] [rbp-40h]
  _BYTE v25[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v26[4]; // [rsp+60h] [rbp-20h] BYREF
  int v27; // [rsp+64h] [rbp-1Ch]

  *a6 = 0LL;
  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a1 + 1) + 24LL))((char *)a1 + 8, v26);
  IsOpaque = CFilterEffect::IsOpaque(a3, a4);
  v11 = v27;
  v12 = 1;
  if ( !IsOpaque )
    v11 = 1;
  v27 = v11;
  if ( (unsigned __int8)CFilterEffect::ContainEffectInChain(a3, 64LL)
    || (unsigned __int8)CFilterEffect::ContainEffectInChain(a3, 155LL) )
  {
    v12 = 2;
  }
  v22 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v22, v13, v14);
  v15 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(struct IDeviceTarget *, _BYTE *))(*(_QWORD *)a1 + 120LL))(
                                  a1,
                                  v25);
  v24 = 46;
  v23 = "DWM Scratch Rendertarget (filter effect layer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v23,
             a2,
             (struct PixelFormatInfo *)v26,
             v15,
             v12,
             (__int64 *)&v22);
  v17 = v22;
  v18 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0x25u, 0LL);
  }
  else
  {
    v19 = (CExternalLayer *)operator new(0x90uLL);
    v20 = v19;
    if ( v19 )
    {
      CExternalLayer::CExternalLayer(v19, a2, v17);
      *((_QWORD *)v20 + 15) = a3;
      *(_QWORD *)v20 = &CFilterEffectLayer::`vftable';
    }
    else
    {
      v20 = 0LL;
    }
    *a6 = v20;
    if ( v20 )
    {
      *((_OWORD *)v20 + 8) = *(_OWORD *)a5;
    }
    else
    {
      v18 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v17 + 16LL))(v17);
  return v18;
}
