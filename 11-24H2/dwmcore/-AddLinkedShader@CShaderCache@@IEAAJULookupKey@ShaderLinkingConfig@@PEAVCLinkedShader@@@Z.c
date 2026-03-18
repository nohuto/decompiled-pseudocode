/*
 * XREFs of ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x1801B4180
 * Callers:
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18010EFA0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802DC1F4 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x18019268C (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 */

__int64 __fastcall CShaderCache::AddLinkedShader(__int64 a1, _OWORD *a2, volatile signed __int32 *a3)
{
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a3 + 2));
  v5 = CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
         a1,
         a2,
         &v8);
  Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(&v8);
  if ( v5 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadercache.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
