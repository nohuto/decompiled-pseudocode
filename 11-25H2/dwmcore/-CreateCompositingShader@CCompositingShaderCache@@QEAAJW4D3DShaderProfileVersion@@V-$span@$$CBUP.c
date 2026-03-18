/*
 * XREFs of ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802E5494
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x180170840 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180170D9C (-GetCompositingShaderLookupKey@CCompositingShaderCache@@CA-AUCompositingShaderLookupKey@1@W4D3DS.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x1801B18D0 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEF70 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x1801E7DA8 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802947F0 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 */

__int64 __fastcall CCompositingShaderCache::CreateCompositingShader(
        __int64 a1,
        char a2,
        __int128 *a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        volatile signed __int32 **a5)
{
  __int128 v5; // xmm0
  char v6; // si
  int v10; // eax
  unsigned int v11; // ebx
  CLinkedShader *v12; // rax
  CLinkedShader *v13; // rax
  volatile signed __int32 *v14; // rdi
  unsigned int v16; // [rsp+20h] [rbp-30h]
  CDrawListCache *v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 CompositingShaderLookupKey; // [rsp+40h] [rbp-10h] BYREF
  struct ID3D10Blob *v19; // [rsp+90h] [rbp+40h] BYREF

  v5 = *a3;
  v6 = a4;
  v17 = 0LL;
  v19 = 0LL;
  CompositingShaderLookupKey = v5;
  v10 = LinkCompositingShader(a2, (unsigned __int64 *)&CompositingShaderLookupKey, a4, &v19);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 59;
    goto LABEL_9;
  }
  v12 = (CLinkedShader *)MIDL_user_allocate(0x58uLL);
  if ( !v12
    || (v13 = CLinkedShader::CLinkedShader(v12, v19, 0x80000000),
        v17 = v13,
        (v14 = (volatile signed __int32 *)v13) == 0LL) )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Fu, 0LL);
    goto LABEL_10;
  }
  CMILRefCountImpl::AddReference((CLinkedShader *)((char *)v13 + 8));
  CompositingShaderLookupKey = *a3;
  CompositingShaderLookupKey = (unsigned __int64)CCompositingShaderCache::GetCompositingShaderLookupKey(
                                                   a2,
                                                   &CompositingShaderLookupKey,
                                                   v6);
  v10 = CShaderCache::AddLinkedShader(a1, &CompositingShaderLookupKey, v14);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 67;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v16, 0LL);
    goto LABEL_10;
  }
  *a5 = v14;
LABEL_10:
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v11;
}
