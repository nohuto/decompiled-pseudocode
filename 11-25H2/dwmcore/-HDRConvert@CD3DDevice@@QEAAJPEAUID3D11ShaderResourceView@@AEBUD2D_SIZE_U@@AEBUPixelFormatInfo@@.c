/*
 * XREFs of ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180170400
 * Callers:
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18019F174 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18017070C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x180170840 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180170940 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18018FCA4 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x1801903EC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::HDRConvert(
        __int64 a1,
        __int64 a2,
        int a3,
        struct D2D_POINT_2F a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        int a10,
        float a11,
        char a12,
        __int64 a13)
{
  unsigned int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rbx
  FLOAT y; // xmm1_4
  int CompositingPixelShaderNoRef; // eax
  unsigned int v20; // ebx
  int v22; // eax
  CSurfaceShaderComposer *v23; // rcx
  float v24; // xmm0_4
  int v25; // eax
  int updated; // eax
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // eax
  __int16 v30; // [rsp+70h] [rbp-90h] BYREF
  char v31; // [rsp+72h] [rbp-8Eh]
  struct D2D_POINT_2F v32[2]; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_POINT_2F v33; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D11PixelShader *v34; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v37[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v38; // [rsp+F0h] [rbp-10h]
  __int128 v39; // [rsp+100h] [rbp+0h] BYREF
  __int64 v40; // [rsp+110h] [rbp+10h]
  _DWORD v41[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v42; // [rsp+128h] [rbp+28h]
  int v43; // [rsp+138h] [rbp+38h]
  int v44; // [rsp+13Ch] [rbp+3Ch]
  int v45; // [rsp+140h] [rbp+40h]
  int v46; // [rsp+144h] [rbp+44h]
  int v47; // [rsp+148h] [rbp+48h]
  __m128i si128; // [rsp+14Ch] [rbp+4Ch]
  int v49; // [rsp+15Ch] [rbp+5Ch]
  __int128 v50; // [rsp+160h] [rbp+60h]
  __int128 v51; // [rsp+170h] [rbp+70h]
  __int128 v52; // [rsp+180h] [rbp+80h]
  __int128 v53; // [rsp+190h] [rbp+90h]
  __int128 v54; // [rsp+1A0h] [rbp+A0h]

  v34 = 0LL;
  v39 = 0LL;
  v35 = a13;
  v38 = 0;
  v45 = 0;
  v47 = 0;
  v49 = 0;
  v42 = 0LL;
  v40 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v50 = _xmm_bf800000bf800000000000003f800000;
  v51 = _xmm;
  v52 = _xmm;
  v36 = a2;
  v53 = _xmm;
  v30 = 257;
  v31 = 1;
  v41[0] = -1082130432;
  v41[1] = 1065353216;
  v43 = -1082130432;
  v44 = -1082130432;
  v46 = 1065353216;
  v54 = _xmm;
  CD3DDevice::CalcHDRConvertUVTransform((int)a9, a3, a5, a6, a7, (CMILMatrix *)v37);
  v15 = 0;
  do
  {
    v16 = 6 * v15 + 2;
    LODWORD(v32[0].x) = v41[v16];
    v17 = 6 * v15 + 3;
    LODWORD(v32[0].y) = v41[v17];
    v33 = 0LL;
    CMILMatrix::Transform((CMILMatrix *)v37, v32, &v33, 1u);
    ++v15;
    y = v33.y;
    v41[v16] = LODWORD(v33.x);
    *(FLOAT *)&v41[v17] = y;
  }
  while ( v15 < 6 );
  v32[1] = a4;
  v32[0] = (struct D2D_POINT_2F)1LL;
  if ( !*(_QWORD *)&a4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  CompositingPixelShaderNoRef = CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(
                                  *(_QWORD *)(a1 + 1536),
                                  *(_DWORD *)(a1 + 616),
                                  (int)v32,
                                  a10,
                                  &v34);
  v20 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef >= 0 )
  {
    v22 = *a9;
    v23 = *(CSurfaceShaderComposer **)(a1 + 1536);
    HIDWORD(v40) = 1065353216;
    v24 = (float)v22;
    v25 = a9[1];
    *((float *)&v39 + 2) = v24;
    *((float *)&v39 + 3) = (float)v25;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v23, a11);
    v20 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x95Du, 0LL);
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 1536);
      v32[1] = (struct D2D_POINT_2F)&v30;
      v32[0] = (struct D2D_POINT_2F)1LL;
      v29 = CSurfaceShaderComposer::RunShader(
              v28,
              (unsigned int)v41,
              v27,
              (unsigned int)&v36,
              1,
              (__int64)&v39,
              5,
              (__int64)v32,
              a12,
              a8,
              (__int64)v34,
              v35,
              1);
      v20 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x96Au, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositingPixelShaderNoRef, 0x957u, 0LL);
  }
  return v20;
}
