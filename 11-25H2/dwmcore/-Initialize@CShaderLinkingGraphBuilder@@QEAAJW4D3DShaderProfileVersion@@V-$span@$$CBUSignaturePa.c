/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1801D2BC0
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1801D3F58 (InitializeShaderLinkingInput.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802947F0 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAX_K@Z @ 0x1801D2650 (-reserve@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAX.c)
 *     ??$emplace@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1801D35E0 (--$emplace@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x180295358 (--$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(
        struct ID3D11Linker **ppLinker,
        char a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r13
  unsigned int v5; // eax
  unsigned int v6; // r14d
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // ecx
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int64 v14; // xmm0_8
  HRESULT v15; // eax
  unsigned int v16; // edi
  struct ID3D11Linker **v17; // rbx
  HRESULT v18; // eax
  struct ID3D11Linker *v19; // rdi
  HRESULT (__stdcall *UseLibrary)(ID3D11Linker *, struct ID3D11ModuleInstance *); // rbx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned int v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  unsigned __int64 i; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int128 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+78h] [rbp-88h]
  _BYTE v34[24]; // [rsp+88h] [rbp-78h]
  _OWORD v35[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-30h]
  char v37[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-18h] BYREF
  char v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F1h] [rbp-Fh]
  char v41; // [rsp+F5h] [rbp-Bh]
  __int16 v42; // [rsp+F6h] [rbp-Ah]
  __int16 v43; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h] BYREF
  char v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+109h] [rbp+9h]
  char v47; // [rsp+10Dh] [rbp+Dh]

  v3 = *a3;
  v5 = *(_DWORD *)a3;
  *((_BYTE *)ppLinker + 84) = a2;
  v6 = 0;
  v29 = 0LL;
  v27 = 0LL;
  v26 = v5;
  v28 = 0LL;
  std::vector<_D3D11_PARAMETER_DESC>::reserve(&v28, v3);
  v8 = *((_QWORD *)&v28 + 1);
  v9 = a3[1];
  v10 = v9 + 32 * v3;
  for ( i = v9; v9 != v10; v9 += 32LL )
  {
    v11 = *(_DWORD *)(v9 + 28);
    v32 = *(_OWORD *)(v9 + 8);
    LODWORD(v33) = *(_DWORD *)(v9 + 24);
    DWORD2(v33) = 1;
    *(_OWORD *)&v34[8] = 0LL;
    DWORD1(v33) = v11 != 1;
    HIDWORD(v33) = v11;
    v12 = v33;
    *(_QWORD *)v34 = 0x100000000LL;
    v13 = *(_OWORD *)v34;
    v14 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v34[8], *(__m128d *)&v34[8]);
    v35[1] = v33;
    v35[0] = v32;
    v35[2] = *(_OWORD *)v34;
    v36 = v14;
    if ( v8 == v29 )
    {
      std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(&v28, v8, v35);
      v8 = *((_QWORD *)&v28 + 1);
    }
    else
    {
      *(_OWORD *)v8 = v32;
      *(_OWORD *)(v8 + 16) = v12;
      *(_OWORD *)(v8 + 32) = v13;
      *(_QWORD *)(v8 + 48) = v14;
      v8 += 56LL;
      *((_QWORD *)&v28 + 1) = v8;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppLinker);
  v15 = D3DCreateLinker(ppLinker);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x45u, 0LL);
  }
  else
  {
    v17 = ppLinker + 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppLinker + 1);
    v18 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x46u, 0LL);
    }
    else
    {
      v19 = *v17;
      UseLibrary = (*v17)->lpVtbl->UseLibrary;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      v21 = ((__int64 (__fastcall *)(struct ID3D11Linker *, _QWORD, __int64, __int64 *))UseLibrary)(
              v19,
              v28,
              0x6DB6DB6DB6DB6DB7LL * ((v8 - (__int64)v28) >> 3),
              &v27);
      v16 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x4Au, 0LL);
      }
      else if ( v26 )
      {
        do
        {
          v22 = v27;
          v23 = 0LL;
          v31 = 0LL;
          v38 = 0LL;
          v40 = 0;
          v41 = 0;
          v42 = 0;
          if ( v27 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
            v23 = v22;
            v38 = v22;
          }
          v39 = v6;
          if ( v6 >= v3 )
          {
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          v44 = v23;
          v43 = *(_WORD *)(32LL * v6 + i);
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
          v46 = v31;
          v47 = v31;
          v45 = v6;
          std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
            ppLinker + 2,
            v37,
            &v43);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
          ++v6;
        }
        while ( v6 < v26 );
      }
    }
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( (_QWORD)v28 )
    std::_Deallocate<16,0>((_QWORD *)v28, 8 * ((v29 - (__int64)v28) >> 3));
  return v16;
}
