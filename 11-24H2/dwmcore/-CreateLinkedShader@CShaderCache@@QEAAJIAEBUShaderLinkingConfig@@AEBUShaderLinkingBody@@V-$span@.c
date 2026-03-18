/*
 * XREFs of ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180042F34
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180042F34 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18010EFA0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801B4E10 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180042F34 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18010E9F0 (-LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18010EC50 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x18019268C (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1801B41FC (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801C0E50 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x1801DCBF4 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x18022A868 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     McTemplateU0s_EventWriteTransfer @ 0x1802895C8 (McTemplateU0s_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShaderCache::CreateLinkedShader(
        const void **a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int128 *a5,
        struct CLinkedShader **a6)
{
  unsigned int v6; // edi
  int LinkedShader; // eax
  int v12; // esi
  unsigned int v13; // ebx
  CLinkedShader *v14; // rax
  CLinkedShader *v15; // rax
  CLinkedShader *v16; // rbx
  struct ID3D10Blob *v17; // rcx
  int v19; // r9d
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  struct CLinkedShader *v27; // rax
  struct ID3D10Blob *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  struct ID3D10Blob *v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v37[8]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+F0h] [rbp-10h]
  char v39[32]; // [rsp+100h] [rbp+0h] BYREF

  v6 = 0;
  *(_QWORD *)&v35 = a5;
  v34[0] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    StringCchPrintfA(v39, 0x20uLL, "id=%p cid=%u lit=%u", a1[3], a2, *(_DWORD *)(a3 + 128) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0s_EventWriteTransfer(v30, v29, v39);
  }
  ShaderLinkingConfig::GetLookupKey(a3, v39, a2);
  v33 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  v36 = *a5;
  LinkedShader = LinkShader(a4, a3, (unsigned int)&v36, (unsigned int)&v33, (__int64)&v32);
  v12 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    if ( HIDWORD(v33) == -1 )
    {
      v13 = 0x80000000;
    }
    else
    {
      v13 = 0;
      if ( (_BYTE)v33 )
        v13 = 4;
      if ( BYTE1(v33) )
        v13 |= 8u;
      if ( BYTE2(v33) )
        v13 |= 2u;
      if ( HIDWORD(v33) == 4 )
        v13 |= 1u;
    }
    v14 = (CLinkedShader *)MIDL_user_allocate(0x58uLL);
    if ( !v14 || (v15 = CLinkedShader::CLinkedShader(v14, v32, v13), (v16 = v15) == 0LL) )
    {
      v31 = 95;
LABEL_23:
      v19 = -2147024882;
      v12 = -2147024882;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v31, 0LL);
      goto LABEL_17;
    }
    CMILRefCountImpl::AddReference((CLinkedShader *)((char *)v15 + 8));
    *(_QWORD *)&v35 = 0LL;
    v34[0] = v16;
    Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(&v35);
LABEL_15:
    if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                         a1,
                         v39,
                         v34) )
    {
      *a6 = v16;
LABEL_17:
      v17 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        ((void (__fastcall *)(struct ID3D10Blob *))v17->lpVtbl->Release)(v17);
      }
      v6 = v12;
      goto LABEL_20;
    }
    v31 = 100;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a3 + 128) == -1 )
  {
    v31 = 91;
    goto LABEL_34;
  }
  v20 = *(_OWORD *)(a3 + 16);
  v37[0] = *(_OWORD *)a3;
  v21 = *(_OWORD *)(a3 + 32);
  v37[1] = v20;
  v22 = *(_OWORD *)(a3 + 48);
  v37[2] = v21;
  v23 = *(_OWORD *)(a3 + 64);
  v37[3] = v22;
  v24 = *(_OWORD *)(a3 + 80);
  v37[4] = v23;
  v25 = *(_OWORD *)(a3 + 96);
  v37[5] = v24;
  v26 = *(_OWORD *)(a3 + 128);
  v37[6] = v25;
  v37[7] = *(_OWORD *)(a3 + 112);
  v38 = v26;
  LODWORD(v38) = -1;
  v27 = CShaderCache::LookupShader((CShaderCache *)a1, a2, (const struct ShaderLinkingConfig *)v37);
  *(_QWORD *)&v36 = v27;
  if ( !v27 )
  {
    v35 = *(_OWORD *)v35;
    LinkedShader = CShaderCache::CreateLinkedShader((_DWORD)a1, a2, (unsigned int)v37, a4, (__int64)&v35, (__int64)&v36);
    v12 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(v34, v36);
      v16 = (CLinkedShader *)v34[0];
      goto LABEL_15;
    }
    v31 = 84;
LABEL_34:
    v19 = LinkedShader;
    goto LABEL_24;
  }
  v28 = v32;
  *a6 = v27;
  if ( v28 )
  {
    v32 = 0LL;
    ((void (__fastcall *)(struct ID3D10Blob *))v28->lpVtbl->Release)(v28);
  }
LABEL_20:
  Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(v34);
  return v6;
}
