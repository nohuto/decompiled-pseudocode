/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0850
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801BEFD4 (AppendCustomSamplerShaderBody.c)
 *     PopulateSamplerArguments @ 0x1801BF18C (PopulateSamplerArguments.c)
 *     DecodeInputTexcoord @ 0x1801BF388 (DecodeInputTexcoord.c)
 *     ApplyTexcoordExtendMode @ 0x1801BF4BC (ApplyTexcoordExtendMode.c)
 *     AppendColorConversion @ 0x1801BF5EC (AppendColorConversion.c)
 *     AppendColorModifications @ 0x1801BF6A0 (AppendColorModifications.c)
 *     PerformSample @ 0x1801BF7F8 (PerformSample.c)
 *     ApplyTexcoordTransformations @ 0x1801BFCD0 (ApplyTexcoordTransformations.c)
 *     AppendShaderBody @ 0x1801BFDD8 (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801C0E50 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     AppendLights @ 0x18022AA74 (AppendLights.c)
 *     LinkLightShader @ 0x18022C5C8 (LinkLightShader.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180289650 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1801C0990 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0AF0 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  __int16 v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v21 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  v11 = v10(v6, a3, a4, a5, &v21);
  v12 = v11;
  if ( v11 == -2147467259 )
  {
    v12 = -2005270526;
    goto LABEL_10;
  }
  if ( v11 < 0 )
  {
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x6Eu, 0LL);
    goto LABEL_7;
  }
  v20 = *a6;
  v13 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v21, &v20);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x70u, 0LL);
  }
  else
  {
    v14 = (__int64 *)std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Try_emplace<enum ShaderLinkingArgument const &,>(
                       a1 + 16,
                       &v20,
                       &v22);
    v15 = v21;
    v16 = *v14;
    v21 = 0LL;
    v17 = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(v16 + 24) = v15;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    *(_WORD *)(v16 + 32) = 255;
  }
LABEL_7:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v12;
}
