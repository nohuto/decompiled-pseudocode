/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@PEAPEAV1@@Z @ 0x18027C4B4
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@@Z @ 0x1802659BC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??0CResampleLayer@@AEAA@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@1AEBUD2D_SIZE_F@@V?$optional@M@std@@PEAVIRenderTargetBitmap@@4@Z @ 0x18027C2AC (--0CResampleLayer@@AEAA@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@1AEBUD2D_SIZE_F@.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::Create(_QWORD *a1, unsigned int a2, __int64 a3, float *a4, __int64 *a5, __int64 *a6)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  CGlobalDrawingContext *v10; // rbx
  int v13; // eax
  float v14; // xmm0_4
  int v15; // edi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  CDeviceTextureTarget *v19; // rax
  int Bitmap; // eax
  unsigned int v21; // edi
  __int64 v22; // r8
  CDeviceTextureTarget *v23; // rax
  void *v24; // rax
  __int64 v25; // rax
  unsigned int v27; // [rsp+28h] [rbp-89h]
  CGlobalDrawingContext *v28; // [rsp+48h] [rbp-69h] BYREF
  CGlobalDrawingContext *v29; // [rsp+50h] [rbp-61h] BYREF
  _DWORD v30[4]; // [rsp+58h] [rbp-59h] BYREF
  const char *v31; // [rsp+68h] [rbp-49h] BYREF
  int v32; // [rsp+70h] [rbp-41h]
  _BYTE v33[24]; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v34[4]; // [rsp+90h] [rbp-21h] BYREF

  v6 = *a4;
  v7 = a4[1];
  v29 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  *a6 = 0LL;
  (*(void (__fastcall **)(_QWORD *, _DWORD *))(a1[1] + 24LL))(a1 + 1, v34);
  v13 = v34[0];
  v14 = (float)*(int *)(a3 + 8);
  if ( CCommonRegistryData::m_fResampleInLinearSpace )
    v13 = 91;
  v34[1] = 1;
  v34[0] = v13;
  v30[0] = *(_DWORD *)a3;
  v30[1] = *(_DWORD *)(a3 + 4);
  v15 = (int)floorf_0((float)(v14 / v6) + 0.5);
  v16 = (int)floorf_0((float)((float)*(int *)(a3 + 12) / v7) + 0.5);
  if ( v15 < 1 )
    v15 = 1;
  v30[2] = v15;
  if ( v16 < 1 )
    v16 = 1;
  v30[3] = v16;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v29, v17, v18);
  v19 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 120LL))(a1, v33);
  v32 = 40;
  v31 = "DWM Scratch Rendertarget (ResampleLayer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v31,
             v30,
             (struct PixelFormatInfo *)v34,
             v19,
             2,
             (__int64 *)&v29);
  v21 = Bitmap;
  if ( Bitmap < 0 )
  {
    v27 = 186;
    goto LABEL_20;
  }
  v22 = a2;
  if ( CCommonRegistryData::m_dwResampleModeOverride )
    v22 = CCommonRegistryData::m_dwResampleModeOverride;
  if ( (_DWORD)v22 == 2 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(
      &v28,
      CCommonRegistryData::m_dwResampleModeOverride,
      v22);
    v23 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 120LL))(a1, v33);
    v32 = 47;
    v31 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    Bitmap = CExternalLayer::CreateBitmap(
               (struct CResourceTag *)&v31,
               v30,
               (struct PixelFormatInfo *)v34,
               v23,
               2,
               (__int64 *)&v28);
    v21 = Bitmap;
    if ( Bitmap < 0 )
    {
      v27 = 202;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, v27, 0LL);
      goto LABEL_21;
    }
    v10 = v28;
  }
  v24 = MIDL_user_allocate(0xA8uLL);
  if ( !v24 )
  {
    *a6 = 0LL;
LABEL_18:
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xD5u, 0LL);
    goto LABEL_21;
  }
  v25 = CResampleLayer::CResampleLayer(
          (__int64)v24,
          a2,
          (_OWORD *)a3,
          (const struct D2D_POINTANDSIZE_L *)v30,
          a4,
          *a5,
          v29,
          (__int64)v10);
  *a6 = v25;
  if ( !v25 )
    goto LABEL_18;
LABEL_21:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
  return v21;
}
