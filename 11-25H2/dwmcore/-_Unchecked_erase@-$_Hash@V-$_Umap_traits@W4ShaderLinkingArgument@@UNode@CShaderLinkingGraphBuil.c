/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1802579C8
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1801D4404 (-clear@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uh.c)
 * Callees:
 *     ??$?RW4ShaderLinkingArgument@@@?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@QEBA_KAEBW4ShaderLinkingArgument@@@Z @ 0x1801D3548 (--$-RW4ShaderLinkingArgument@@@-$_Uhash_compare@W4ShaderLinkingArgument@@U-$hash@W4ShaderLinking.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1802954BC (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkin.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // bl
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  bool v20; // bl
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v5 = *(_QWORD **)(a2 + 8);
    v6 = (_QWORD *)a1[1];
    v7 = a1[3];
    v23 = a2;
    v21 = a1 + 1;
    v22 = v5;
    v8 = std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>::operator()<enum ShaderLinkingArgument>(
           (__int64)a1,
           a2 + 16);
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v8);
    v12 = *(_QWORD *)(v7 + 16 * (*(_QWORD *)(v10 + 48) & v8) + 8);
    v13 = *(_QWORD *)(v7 + 8 * v11);
    v25 = *(_QWORD *)(v7 + 8 * v11 + 8);
    while ( 1 )
    {
      v14 = v9 == v12;
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Range_eraser::_Bump_erased(&v21);
      if ( v14 )
        break;
      v9 = v23;
      v12 = v25;
      if ( v23 == a3 )
      {
        if ( v13 == a2 )
LABEL_6:
          *(_QWORD *)(v7 + 8 * v11) = v9;
        goto LABEL_7;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v7 + 8 * v11) = v6;
      v5 = v6;
    }
    for ( *(_QWORD *)(v7 + 8 * v11 + 8) = v5; ; *(_QWORD *)(v7 + 8 * v11 + 8) = v6 )
    {
      v9 = v23;
      if ( v23 == a3 )
        break;
      v18 = std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>::operator()<enum ShaderLinkingArgument>(
              v15,
              v23 + 16);
      v11 = 2 * (a1[6] & v18);
      v19 = *(_QWORD *)(v7 + 16 * (a1[6] & v18) + 8);
      while ( 1 )
      {
        v20 = v9 == v19;
        std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Range_eraser::_Bump_erased(&v21);
        if ( v20 )
          break;
        v9 = v23;
        if ( v23 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v7 + 8 * v11) = v6;
    }
LABEL_7:
    v16 = v22;
    *v22 = v9;
    *(_QWORD *)(v9 + 8) = v16;
  }
  return a3;
}
