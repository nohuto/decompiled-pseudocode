/*
 * XREFs of ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180170D9C
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x180170840 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802E5494 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180147B40 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CCompositingShaderCache::GetCompositingShaderLookupKey(char a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  enum DXGI_FORMAT *v4; // r11
  __int64 v5; // r10
  enum DXGI_FORMAT *v6; // r9
  int ColorChannelDepth; // eax
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // rcx

  v3 = 0LL;
  v4 = (enum DXGI_FORMAT *)a2[1];
  if ( *a2 == 2LL )
    v3 = 32LL;
  v5 = (a1 != 0 ? 0x40 : 0) | v3 | a3 & 0x1F;
  v6 = &v4[3 * *a2];
  while ( v4 != v6 )
  {
    ColorChannelDepth = GetColorChannelDepth(*v4);
    v10 = 0LL;
    if ( *(_DWORD *)(v9 + 4) == 3 )
      v10 = 2LL;
    v5 = (4 * v8) | v10 | (ColorChannelDepth == 8);
    v4 = (enum DXGI_FORMAT *)(v9 + 12);
  }
  return v5;
}
