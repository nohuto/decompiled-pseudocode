/*
 * XREFs of ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1801C0990
 * Callers:
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x1801BEBD4 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801BFB90 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x1800E0CE0 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingG.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18018C354 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uhash_compare.c)
 *     ??$?RW4ShaderLinkingArgument@@@?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@QEBA_KAEBW4ShaderLinkingArgument@@@Z @ 0x1801C0C70 (--$-RW4ShaderLinkingArgument@@@-$_Uhash_compare@W4ShaderLinkingArgument@@U-$hash@W4ShaderLinking.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBAXXZ @ 0x1801C0CA8 (-_Check_max_size@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuild.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1801C0CDC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Try_emplace<enum ShaderLinkingArgument const &,>(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h]

  v6 = std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>::operator()<enum ShaderLinkingArgument>(
         a1,
         a3);
  v7 = a1[1];
  v8 = a1[3];
  v9 = *(_QWORD *)(v8 + 16 * (v6 & a1[6]) + 8);
  if ( v9 == v7 )
    goto LABEL_6;
  v10 = *(_QWORD *)(v8 + 16 * (v6 & a1[6]));
  while ( 1 )
  {
    if ( *a3 == *(_WORD *)(v9 + 16) )
    {
      v7 = *(_QWORD *)v9;
      goto LABEL_5;
    }
    if ( v9 == v10 )
      break;
    v9 = *(_QWORD *)(v9 + 8);
  }
  v7 = v9;
  v9 = 0LL;
LABEL_5:
  if ( v9 )
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
LABEL_6:
    std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Check_max_size(a1);
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_WORD *)(v11 + 16) = *a3;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_BYTE *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 33) = 0;
    *(_BYTE *)(v11 + 37) = 0;
    if ( std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Rehash_for_1(a1);
      v12 = a1[3];
      v13 = *(_QWORD *)(v12 + 16 * (v6 & a1[6]) + 8);
      if ( v13 == a1[1] )
      {
        v15 = a1[1];
      }
      else
      {
        while ( 1 )
        {
          if ( *(_WORD *)(v11 + 16) == *(_WORD *)(v13 + 16) )
          {
            v15 = *(_QWORD *)v13;
            goto LABEL_10;
          }
          if ( v13 == *(_QWORD *)(v12 + 16 * (v6 & a1[6])) )
            break;
          v13 = *(_QWORD *)(v13 + 8);
        }
        v15 = v13;
      }
LABEL_10:
      v7 = v15;
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      v7,
                      (_QWORD *)v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
