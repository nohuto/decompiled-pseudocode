/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180028648
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@MM@Z @ 0x18002855C (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 * Callees:
 *     ??0CResampleLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x1800288FC (--0CResampleLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTa.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::Create(_QWORD *a1, _DWORD *a2, float a3, float a4, unsigned int a5, __int64 *a6)
{
  __int64 v7; // rbx
  int v9; // eax
  float v10; // xmm0_4
  int v11; // edi
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v18; // rax
  int v19; // eax
  void *v20; // rax
  __int64 v21; // rax
  __int64 v23; // [rsp+48h] [rbp-79h] BYREF
  __int64 v24; // [rsp+50h] [rbp-71h] BYREF
  _DWORD v25[4]; // [rsp+58h] [rbp-69h] BYREF
  const char *v26; // [rsp+68h] [rbp-59h] BYREF
  int v27; // [rsp+70h] [rbp-51h]
  _BYTE v28[24]; // [rsp+78h] [rbp-49h] BYREF
  _DWORD v29[4]; // [rsp+90h] [rbp-31h] BYREF

  v24 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  (*(void (__fastcall **)(_QWORD *, _DWORD *))(a1[1] + 24LL))(a1 + 1, v29);
  v9 = v29[0];
  v10 = (float)(int)a2[2];
  if ( CCommonRegistryData::m_fResampleInLinearSpace )
    v9 = 91;
  v29[1] = 1;
  v29[0] = v9;
  v25[0] = *a2;
  v25[1] = a2[1];
  v11 = (int)floorf_0((float)(v10 / a3) + 0.5);
  v12 = (int)floorf_0((float)((float)(int)a2[3] / a4) + 0.5);
  if ( v11 < 1 )
    v11 = 1;
  v25[2] = v11;
  if ( v12 < 1 )
    v12 = 1;
  v25[3] = v12;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v24);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 120LL))(a1, v28);
  v27 = 40;
  v26 = "DWM Scratch Rendertarget (ResampleLayer)";
  v14 = CExternalLayer::CreateBitmap(&v26, v25, v29, v13, 2, &v24);
  v15 = v24;
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xBAu, 0LL);
  }
  else
  {
    if ( CCommonRegistryData::m_dwResampleModeOverride )
      a5 = CCommonRegistryData::m_dwResampleModeOverride;
    if ( a5 == 2 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v23);
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 120LL))(a1, v28);
      v27 = 47;
      v26 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
      v19 = CExternalLayer::CreateBitmap(&v26, v25, v29, v18, 2, &v23);
      v16 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xCAu, 0LL);
        v7 = v23;
        goto LABEL_16;
      }
      v7 = v23;
    }
    v20 = MIDL_user_allocate(0xA0uLL);
    if ( v20 )
    {
      v21 = CResampleLayer::CResampleLayer(v20, a2, v25);
      *a6 = v21;
      if ( v21 )
        goto LABEL_16;
    }
    else
    {
      *a6 = 0LL;
    }
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD4u, 0LL);
  }
LABEL_16:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v16;
}
