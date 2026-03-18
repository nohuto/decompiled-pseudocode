/*
 * XREFs of ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18018EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180040190 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18006CBB0 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18006D050 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180148150 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18014A630 (-LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x18018F1A0 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180190210 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x180190650 (-GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1801D7B30 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     ?GetShaderLinkingBody@ProjectedShadowRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@CommonRenderingShaderBody@@W4D3DShaderProfileVersion@@@Z @ 0x180255BDC (-GetShaderLinkingBody@ProjectedShadowRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@CommonR.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18025B9C0 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowRenderingEffect::SetStateOnDevice(
        CProjectedShadowRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  int *v5; // r12
  __int64 v6; // r14
  char v7; // r13
  __int64 v8; // rsi
  CDirtyRegionAnnotation *v9; // rbx
  CLinkedShader *v10; // r15
  RenderTargetInfo *v11; // rcx
  char v12; // dl
  char v13; // al
  bool v14; // zf
  char v15; // al
  unsigned int v16; // ebx
  __int64 v17; // rax
  CDrawListBitmap *v18; // rax
  int ShaderResourceView; // eax
  unsigned int v20; // esi
  char *v21; // rcx
  unsigned int v22; // eax
  CShaderCache *v23; // rcx
  unsigned int v24; // ebx
  unsigned int v25; // edi
  CLinkedShader *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned int v29; // edi
  void (__fastcall *v30)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD); // rbx
  struct ID3D11VertexShader *VertexShaderNoRef; // rax
  _OWORD *ShaderLinkingBody; // rax
  _QWORD *v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  unsigned int v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D11PixelShader *v37; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  unsigned int *v40; // [rsp+68h] [rbp-98h]
  __int128 v41; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v43[3]; // [rsp+90h] [rbp-70h] BYREF
  char v44[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v45[128]; // [rsp+F0h] [rbp-10h] BYREF
  int v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+174h] [rbp+74h]
  int v48; // [rsp+17Ch] [rbp+7Ch]

  v3 = *((_QWORD *)a2 + 2);
  v5 = (int *)*((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)a2 + 3);
  v37 = 0LL;
  v40 = a3;
  v7 = 0;
  *(_QWORD *)v36 = this;
  v39 = v3;
  v41 = 0LL;
  v42 = 0LL;
  memset_0(v45, 0, sizeof(v45));
  v8 = 4LL;
  v9 = (CDirtyRegionAnnotation *)v45;
  do
  {
    --v8;
    if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v9);
    else
      ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v9);
    v9 = (CDirtyRegionAnnotation *)((char *)v9 + 32);
  }
  while ( v8 );
  v46 = -1;
  v10 = *(CLinkedShader **)v36;
  v47 = 0LL;
  v48 = 0;
  if ( v5[154] >= 37632 )
  {
    v7 = 1;
    v46 = *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(a2);
  }
  v11 = (RenderTargetInfo *)*((_QWORD *)a2 + 14);
  BYTE4(v47) = 1;
  BYTE5(v47) = RenderTargetInfo::IsHDR(v11);
  v13 = BYTE1(v47);
  if ( *(_BYTE *)(v6 + 256) )
    v13 = v12;
  v14 = *((_DWORD *)a2 + 14) == 22;
  BYTE1(v47) = v13;
  v15 = v47;
  if ( v14 )
    v15 = v12;
  v16 = 0;
  LOBYTE(v47) = v15;
  while ( 1 )
  {
    v17 = *(_QWORD *)v10;
    if ( v16 >= 2 )
      break;
    v18 = (CDrawListBitmap *)(*(__int64 (__fastcall **)(CLinkedShader *, _QWORD))(v17 + 16))(v10, v16);
    if ( *((_QWORD *)v18 + 1) )
    {
      ShaderResourceView = CDrawListBitmap::GetShaderResourceView(
                             v18,
                             *((const struct RenderTargetInfo **)a2 + 14),
                             (struct ID3D11ShaderResourceView **)&v41 + v16,
                             0LL);
      v20 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
      {
        v35 = 128;
        goto LABEL_18;
      }
      v21 = (char *)v10 + 2 * v16;
      LOWORD(v36[0]) = *(_WORD *)&v21[v16 + 64];
      BYTE2(v36[0]) = v21[v16 + 66];
      ShaderResourceView = CD3DDevice::GetD3DSamplerStateNoRef(v5, v36, (char *)&v43[-1] + 8 * v16);
      v20 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
      {
        v35 = 130;
LABEL_18:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShaderResourceView, v35, 0LL);
        return v20;
      }
    }
    ++v16;
  }
  v22 = (*(__int64 (__fastcall **)(CLinkedShader *))(v17 + 24))(v10);
  v23 = g_spProjectedShadowShaderCache;
  v24 = v22 | 4;
  v25 = v22;
  if ( v7 )
    v24 = v22;
  if ( g_spProjectedShadowShaderCache
    || ((v34 = MIDL_user_allocate(0x20uLL)) == 0LL
      ? (v34 = 0LL)
      : (_QWORD *)(*v34 = 0LL, v34[1] = 0LL, *((_DWORD *)v34 + 4) = 0, v34[3] = v34),
        std::unique_ptr<CShaderCache>::reset(&g_spProjectedShadowShaderCache, v34),
        (v23 = g_spProjectedShadowShaderCache) != 0LL) )
  {
    v26 = CShaderCache::LookupShader(v23, v24, (const struct ShaderLinkingConfig *)v45);
    *(_QWORD *)v36 = v26;
    if ( !v26 )
    {
      LOBYTE(v27) = v7;
      ShaderLinkingBody = (_OWORD *)ProjectedShadowRenderingShaderBody::GetShaderLinkingBody(v44, v25, v27);
      v38 = 0uLL;
      v43[0] = *ShaderLinkingBody;
      v43[1] = ShaderLinkingBody[1];
      v43[2] = ShaderLinkingBody[2];
      ShaderResourceView = CShaderCache::CreateLinkedShader(
                             (const void **)g_spProjectedShadowShaderCache,
                             v24,
                             (__int64)v45,
                             (int)v43,
                             &v38,
                             v36);
      v20 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
      {
        v35 = 161;
        goto LABEL_18;
      }
      v26 = *(CLinkedShader **)v36;
    }
    v36[0] = 0;
    ShaderResourceView = CLinkedShader::GetShadersNoRef(v26, (struct CD3DDevice *)v5, v36, &v37);
    v20 = ShaderResourceView;
    if ( ShaderResourceView < 0 )
    {
      v35 = 165;
      goto LABEL_18;
    }
    v28 = v39;
    v29 = v36[0];
    v30 = *(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v39 + 88LL);
    VertexShaderNoRef = CD3DDevice::GetVertexShaderNoRef((CD3DDevice *)v5, v36[0]);
    v30(v28, VertexShaderNoRef, 0LL, 0LL);
    (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v28 + 72LL))(
      v28,
      v37,
      0LL,
      0LL);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v28 + 64LL))(v28, 0LL, 2LL, &v41);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v28 + 80LL))(v28, 0LL, 2LL, &v42);
    *v40 = v29;
  }
  else
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x95u, 0LL);
  }
  return v20;
}
