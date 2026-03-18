/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801C068C
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1801C0CDC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder.c)
 * Callees:
 *     ??$?RW4ShaderLinkingArgument@@@?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@QEBA_KAEBW4ShaderLinkingArgument@@@Z @ 0x1801C0C70 (--$-RW4ShaderLinkingArgument@@@-$_Uhash_compare@W4ShaderLinkingArgument@@U-$hash@W4ShaderLinking.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@Z @ 0x1801C2270 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1801C2270.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 i; // r10
  unsigned __int16 *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rdi
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  for ( i = *(_QWORD *)a1[1]; i != v4; i = v12 )
  {
    result = std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>::operator()<enum ShaderLinkingArgument>(
               v7,
               i + 16);
    v13 = a1[3];
    v14 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & result)) = v11;
LABEL_6:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v11;
      continue;
    }
    result = *(_QWORD *)(v13 + 16 * (a1[6] & result) + 8);
    v7 = (__int64 *)*v10;
    if ( (_WORD)v7 == *(_WORD *)(result + 16) )
    {
      v18 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v11 )
      {
        v19 = *(_QWORD **)(v11 + 8);
        *v19 = v12;
        v7 = *(__int64 **)(v12 + 8);
        *v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v11;
        *(_QWORD *)(v18 + 8) = v7;
        *(_QWORD *)(v12 + 8) = v19;
        *(_QWORD *)(v11 + 8) = result;
      }
      goto LABEL_6;
    }
    while ( 1 )
    {
      v15 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
        break;
      result = *v15;
      if ( (_WORD)v7 == *(_WORD *)(*v15 + 16) )
      {
        v16 = *(_QWORD *)result;
        v17 = *(_QWORD **)(v11 + 8);
        *v17 = v12;
        v7 = *(__int64 **)(v12 + 8);
        *v7 = v16;
        result = *(_QWORD *)(v16 + 8);
        *(_QWORD *)result = v11;
        *(_QWORD *)(v16 + 8) = v7;
        *(_QWORD *)(v12 + 8) = v17;
        *(_QWORD *)(v11 + 8) = result;
        goto LABEL_7;
      }
    }
    v20 = *(_QWORD **)(v11 + 8);
    *v20 = v12;
    v7 = *(__int64 **)(v12 + 8);
    *v7 = result;
    result = *v15;
    *(_QWORD *)result = v11;
    *v15 = (__int64)v7;
    *(_QWORD *)(v12 + 8) = v20;
    *(_QWORD *)(v11 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v11;
LABEL_7:
    ;
  }
  return result;
}
