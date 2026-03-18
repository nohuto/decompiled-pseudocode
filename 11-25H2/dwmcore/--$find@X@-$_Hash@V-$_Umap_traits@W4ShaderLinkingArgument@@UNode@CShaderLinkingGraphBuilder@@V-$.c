/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1801D252C
 * Callers:
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x1801D1504 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1801D15B0 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801D2468 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        _WORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 i; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2; ++i )
  {
    v6 = *((unsigned __int8 *)a3 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = v4 & a1[6];
  v8 = a1[3];
  v9 = 2 * v7;
  v10 = *(_QWORD *)(v8 + 8 * v9 + 8);
  if ( v10 == a1[1] )
  {
LABEL_11:
    v10 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 8 * v9);
    while ( *a3 != *(_WORD *)(v10 + 16) )
    {
      if ( v10 == v11 )
        goto LABEL_11;
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  if ( !v10 )
    v10 = a1[1];
  *a2 = v10;
  return a2;
}
