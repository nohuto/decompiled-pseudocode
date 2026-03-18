/*
 * XREFs of ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x180065F60
 * Callers:
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180065808 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180065B20 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 * Callees:
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800433D0 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18006625C (-GetCompositingShaderLookupKey@CCompositingShaderCache@@CA-AUCompositingShaderLookupKey@1@W4D3DS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x18010F980 (-LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802DC1F4 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 */

__int64 __fastcall CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        struct ID3D11PixelShader **a5)
{
  __int64 v5; // rbx
  bool v6; // r15
  __int64 v8; // rdi
  CLinkedShader *v10; // rax
  int v11; // edx
  struct CD3DDevice *v12; // rdx
  int ShadersNoRef; // eax
  unsigned int v14; // ebx
  __int64 v16; // rcx
  int CompositingShader; // eax
  __int128 CompositingShaderLookupKey; // [rsp+30h] [rbp-10h] BYREF
  CLinkedShader *v19; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a1 + 104);
  v6 = a2 >= 37632;
  CompositingShaderLookupKey = *a3;
  v8 = a1;
  LOBYTE(a1) = a2 >= 37632;
  CompositingShaderLookupKey = (unsigned __int64)CCompositingShaderCache::GetCompositingShaderLookupKey(
                                                   a1,
                                                   &CompositingShaderLookupKey,
                                                   a4);
  v10 = (CLinkedShader *)CShaderCache::LookupLinkedShader(v5, &CompositingShaderLookupKey);
  v19 = v10;
  if ( !v10 )
  {
    v16 = *(_QWORD *)(v8 + 104);
    CompositingShaderLookupKey = *a3;
    LOBYTE(v11) = v6;
    CompositingShader = CCompositingShaderCache::CreateCompositingShader(
                          v16,
                          v11,
                          (unsigned int)&CompositingShaderLookupKey,
                          a4,
                          (__int64)&v19);
    v14 = CompositingShader;
    if ( CompositingShader < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CompositingShader, 0x1CCu, 0LL);
      return v14;
    }
    v10 = v19;
  }
  v12 = *(struct CD3DDevice **)(v8 + 96);
  v20 = 0;
  ShadersNoRef = CLinkedShader::GetShadersNoRef(v10, v12, &v20, a5);
  v14 = ShadersNoRef;
  if ( ShadersNoRef < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShadersNoRef, 0x1D0u, 0LL);
  return v14;
}
