/*
 * XREFs of ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801700E8
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x180170F18 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18017070C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x180170840 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180170940 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18018FCA4 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x1801903EC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::HDRConvertWithFakeOverlay(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int *a11,
        int a12,
        float a13,
        char a14,
        __int64 a15)
{
  int v16; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  unsigned int i; // esi
  int v20; // ebx
  int v21; // edx
  __int64 v22; // rcx
  int CompositingPixelShaderNoRef; // eax
  unsigned int v24; // ebx
  int v26; // eax
  CSurfaceShaderComposer *v27; // rcx
  float v28; // xmm0_4
  int v29; // eax
  int updated; // eax
  int v31; // r8d
  __int64 v32; // rcx
  int v33; // eax
  __int16 v34; // [rsp+70h] [rbp-90h] BYREF
  char v35; // [rsp+72h] [rbp-8Eh]
  struct D2D_POINT_2F v36[2]; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_POINT_2F v37; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D11PixelShader *v38; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+F0h] [rbp-10h]
  __int128 v42; // [rsp+100h] [rbp+0h] BYREF
  __int64 v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h] BYREF
  int v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+124h] [rbp+24h]
  int v47; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v48[2]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v49; // [rsp+138h] [rbp+38h]
  int v50; // [rsp+148h] [rbp+48h]
  int v51; // [rsp+14Ch] [rbp+4Ch]
  int v52; // [rsp+150h] [rbp+50h]
  int v53; // [rsp+154h] [rbp+54h]
  int v54; // [rsp+158h] [rbp+58h]
  __m128i si128; // [rsp+15Ch] [rbp+5Ch]
  int v56; // [rsp+16Ch] [rbp+6Ch]
  __int128 v57; // [rsp+170h] [rbp+70h]
  __int128 v58; // [rsp+180h] [rbp+80h]
  __int128 v59; // [rsp+190h] [rbp+90h]
  __int128 v60; // [rsp+1A0h] [rbp+A0h]
  __int128 v61; // [rsp+1B0h] [rbp+B0h]

  v41 = 0;
  v52 = 0;
  v54 = 0;
  v56 = 0;
  v38 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v16 = *((_DWORD *)a3 + 2);
  v49 = 0LL;
  v45 = v16;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v39[0] = a2;
  v58 = _xmm;
  v60 = _xmm;
  v17 = *a3;
  v57 = _xmm_bf800000bf800000000000003f800000;
  v44 = v17;
  v18 = *a6;
  v47 = *((_DWORD *)a6 + 2);
  v59 = _xmm;
  v39[1] = a4;
  v34 = 257;
  v35 = 1;
  v48[0] = -1082130432;
  v48[1] = 1065353216;
  v50 = -1082130432;
  v51 = -1082130432;
  v53 = 1065353216;
  v61 = _xmm;
  v46 = v18;
  CD3DDevice::CalcHDRConvertUVTransform((int)a11, a5, a7, a8, a9, (CMILMatrix *)v40);
  for ( i = 0; i < 6; ++i )
  {
    v20 = 6 * i;
    LODWORD(v36[0].x) = v48[6 * i + 2];
    LODWORD(v36[0].y) = v48[6 * i + 3];
    v37 = 0LL;
    CMILMatrix::Transform((CMILMatrix *)v40, v36, &v37, 1u);
    v48[v20 + 4] = LODWORD(v37.x);
    v48[v20 + 5] = LODWORD(v37.y);
  }
  v21 = *(_DWORD *)(a1 + 616);
  v22 = *(_QWORD *)(a1 + 1536);
  v36[1] = (struct D2D_POINT_2F)&v44;
  v36[0] = (struct D2D_POINT_2F)2LL;
  CompositingPixelShaderNoRef = CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(v22, v21, (int)v36, a12, &v38);
  v24 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef >= 0 )
  {
    v26 = *a11;
    v27 = *(CSurfaceShaderComposer **)(a1 + 1536);
    HIDWORD(v43) = 1065353216;
    v28 = (float)v26;
    v29 = a11[1];
    *((float *)&v42 + 2) = v28;
    *((float *)&v42 + 3) = (float)v29;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v27, a13);
    v24 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x9C3u, 0LL);
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 1536);
      v36[1] = (struct D2D_POINT_2F)&v34;
      v36[0] = (struct D2D_POINT_2F)1LL;
      v33 = CSurfaceShaderComposer::RunShader(
              v32,
              (unsigned int)v48,
              v31,
              (unsigned int)v39,
              2,
              (__int64)&v42,
              5,
              (__int64)v36,
              a14,
              a10,
              (__int64)v38,
              a15,
              1);
      v24 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x9D0u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositingPixelShaderNoRef, 0x9BDu, 0LL);
  }
  return v24;
}
