/*
 * XREFs of ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18018FCA4
 * Callers:
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801700E8 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180170400 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x18018F564 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x18018FC10 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z @ 0x180287124 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180077280 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180190210 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@AEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x18019076C (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceShaderComposer::RunShader(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        float *a6,
        int a7,
        unsigned __int64 *a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int128 *a12,
        char a13)
{
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rdi
  SIZE_T size_of; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  _QWORD *v22; // r15
  __int64 v23; // rcx
  float v24; // xmm1_4
  float v25; // xmm0_4
  int v26; // eax
  float v27; // xmm1_4
  int (__fastcall *v28)(_QWORD, GUID *, __int64 *); // rbx
  int v29; // eax
  unsigned int v30; // r12d
  _OWORD *v31; // rax
  __int64 v32; // rax
  __int64 *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v39; // rcx
  int D3DSamplerStateNoRef; // eax
  int (__fastcall *v41)(_QWORD, GUID *, __int64 *); // rbx
  __int16 v42; // [rsp+40h] [rbp-A9h] BYREF
  char v43; // [rsp+42h] [rbp-A7h]
  __int64 v44; // [rsp+50h] [rbp-99h] BYREF
  GUID *v45; // [rsp+58h] [rbp-91h] BYREF
  int v46; // [rsp+60h] [rbp-89h]
  __int64 v47; // [rsp+68h] [rbp-81h] BYREF
  __int64 v48; // [rsp+70h] [rbp-79h] BYREF
  __int128 v49; // [rsp+78h] [rbp-71h] BYREF
  _QWORD *v50; // [rsp+88h] [rbp-61h]
  __int64 v51; // [rsp+90h] [rbp-59h] BYREF
  float *v52; // [rsp+98h] [rbp-51h]
  __int64 v53; // [rsp+A0h] [rbp-49h]
  __int128 *v54; // [rsp+A8h] [rbp-41h]
  __int64 v55; // [rsp+B0h] [rbp-39h]
  __int128 v56; // [rsp+B8h] [rbp-31h] BYREF
  __int128 v57; // [rsp+C8h] [rbp-21h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-11h] BYREF

  v52 = a6;
  v15 = *a8;
  v16 = 0LL;
  v46 = a7;
  v51 = a10;
  v55 = a11;
  v17 = *(_QWORD *)(a1 + 96);
  v45 = 0LL;
  v44 = 0LL;
  v48 = a4;
  v18 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v17 + 560);
  v54 = a12;
  v50 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  v49 = 0LL;
  if ( v15 )
  {
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(v15);
    v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    std::vector<CVectorShape *>::_Change_array((__int64)&v49, v20, 0LL, v15);
    v16 = v50;
  }
  v21 = a8[1];
  v22 = (_QWORD *)*((_QWORD *)&v49 + 1);
  v23 = v21 + 2 * *a8 + *a8;
  v53 = v23;
  while ( v21 != v23 )
  {
    v39 = *(_QWORD *)(a1 + 96);
    v42 = *(_WORD *)v21;
    v43 = *(_BYTE *)(v21 + 2);
    v47 = 0LL;
    D3DSamplerStateNoRef = CD3DDevice::GetD3DSamplerStateNoRef(v39, &v42, &v47);
    v30 = D3DSamplerStateNoRef;
    if ( D3DSamplerStateNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D3DSamplerStateNoRef, 0xFCu, 0LL);
      goto LABEL_16;
    }
    if ( v22 == v16 )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(&v49, v22, &v47);
      v16 = v50;
      v22 = (_QWORD *)*((_QWORD *)&v49 + 1);
    }
    else
    {
      *v22++ = v47;
      *((_QWORD *)&v49 + 1) = v22;
    }
    v23 = v53;
    v21 += 3LL;
  }
  if ( v54 )
  {
    v58 = *v54;
  }
  else
  {
    v24 = v52[1];
    v25 = *v52 + v52[2];
    LODWORD(v58) = (int)*v52;
    v26 = (int)v24;
    v27 = v24 + v52[3];
    DWORD1(v58) = v26;
    DWORD2(v58) = (int)v25;
    HIDWORD(v58) = (int)v27;
  }
  v28 = (*v18)[131];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
  v28(v18, *(GUID **)(a1 + 72), (__int64 *)&v45);
  if ( a9 )
  {
    v41 = **v18;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
    if ( v41(v18, &GUID_b4e3c01d_e79e_4637_91b2_510e9f4c9b8f, &v44) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 1160LL))(v44, 1LL);
  }
  v29 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64, _DWORD, __int128 *))(*v18)[14])(
          v18,
          *(_QWORD *)(a1 + 64),
          0LL,
          4LL,
          0,
          &v56);
  v30 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x120u, 0LL);
  }
  else
  {
    v31 = (_OWORD *)v56;
    *(_OWORD *)v56 = *a2;
    v31[1] = a2[1];
    v31[2] = a2[2];
    v31[3] = a2[3];
    v31[4] = a2[4];
    v31[5] = a2[5];
    v31[6] = a2[6];
    v31[7] = a2[7];
    v31[8] = a2[8];
    (*v18)[15](v18, *(GUID **)(a1 + 64), 0LL);
    if ( a13 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int128 *, __int64))(*v18)[133])(
        v18,
        v51,
        &v58,
        1LL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, _QWORD, _QWORD))(*v18)[9])(
      v18,
      v55,
      0LL,
      0LL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v18)[8])(
      v18,
      0LL,
      a5,
      v48);
    v32 = *(_QWORD *)(a1 + 80);
    if ( v32 )
    {
      v33 = &v48;
      v34 = *(unsigned int *)(a1 + 88);
      v35 = 1LL;
      v48 = *(_QWORD *)(v32 + 120);
    }
    else
    {
      v33 = 0LL;
      v35 = 0LL;
      v34 = 0LL;
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, __int64 *))(*v18)[16])(
      v18,
      v34,
      v35,
      v33);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v18)[10])(
      v18,
      0LL,
      (unsigned int)((__int64)((__int64)v22 - v49) >> 3),
      v49);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v18)[35])(
      v18,
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * v46 + 1576),
      0LL,
      0xFFFFFFFFLL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64 *, _QWORD))(*v18)[33])(
      v18,
      1LL,
      &v51,
      0LL);
    (*v18)[45](v18, (GUID *)1, (__int64 *)&v58);
    (*v18)[44](v18, (GUID *)1, (__int64 *)v52);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v18)[13])(v18, 6LL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int128 *))(*v18)[8])(
      v18,
      0LL,
      a5,
      &v57);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v18)[33])(
      v18,
      0LL,
      0LL,
      0LL);
    if ( v44 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 1160LL))(v44, 0LL);
  }
LABEL_16:
  (*v18)[131](v18, v45, 0LL);
  if ( (_QWORD)v49 )
    std::_Deallocate<16,0>((_QWORD *)v49, ((unsigned __int64)v16 - v49) & 0xFFFFFFFFFFFFFFF8uLL);
  v36 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = (__int64)v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return v30;
}
