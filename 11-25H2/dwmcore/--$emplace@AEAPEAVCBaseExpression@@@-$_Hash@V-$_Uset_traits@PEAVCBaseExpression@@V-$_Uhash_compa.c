/*
 * XREFs of ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x180060E3C
 * Callers:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801FE8B4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x180060D30 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingG.c)
 *     ?_Check_max_size@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEBAXXZ @ 0x180060FFC (-_Check_max_size@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpress.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1801CBDD8 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpressio.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // rdi
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // [rsp+20h] [rbp-38h]

  v5 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = *((unsigned __int8 *)a3 + v5++);
    v7 = 0x100000001B3LL * (v8 ^ v7);
  }
  while ( v5 < 8 );
  v9 = a1[3];
  v10 = (_QWORD *)a1[1];
  v11 = *(_QWORD **)(v9 + 16 * (v7 & a1[6]) + 8);
  if ( v11 == v10 )
  {
    v11 = (_QWORD *)a1[1];
    v13 = v11;
    goto LABEL_10;
  }
  while ( *a3 != v11[2] )
  {
    if ( v11 == *(_QWORD **)(v9 + 16 * (v7 & a1[6])) )
    {
      v10 = v11;
      v12 = 0LL;
      v13 = v11;
      goto LABEL_7;
    }
    v11 = (_QWORD *)v11[1];
  }
  v10 = (_QWORD *)*v11;
  v12 = v11;
  v13 = (_QWORD *)*v11;
  v11 = (_QWORD *)*v11;
LABEL_7:
  if ( !v12 )
  {
LABEL_10:
    std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Check_max_size(a1);
    v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
    v14[2] = *a3;
    if ( std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Rehash_for_1(a1);
      v20 = a1[3];
      v11 = (_QWORD *)a1[1];
      v21 = *(_QWORD **)(v20 + 16 * (v7 & a1[6]) + 8);
      if ( v21 != v11 )
      {
        while ( 1 )
        {
          v11 = v21;
          if ( v14[2] == v21[2] )
            break;
          if ( v21 == *(_QWORD **)(v20 + 16 * (v7 & a1[6])) )
          {
            v22 = v21;
            goto LABEL_28;
          }
          v21 = (_QWORD *)v21[1];
        }
        v11 = (_QWORD *)*v21;
      }
      v22 = v11;
LABEL_28:
      v10 = v22;
      v13 = v11;
    }
    v15 = (_QWORD *)v11[1];
    ++a1[2];
    *v14 = v10;
    v14[1] = v15;
    *v15 = v14;
    v11[1] = v14;
    v16 = a1[3];
    v17 = 2 * (v7 & a1[6]);
    v18 = *(_QWORD **)(v16 + 16 * (v7 & a1[6]));
    if ( v18 == (_QWORD *)a1[1] )
    {
      *(_QWORD *)(v16 + 16 * (v7 & a1[6])) = v14;
    }
    else
    {
      if ( v18 == v13 )
      {
        *(_QWORD *)(v16 + 16 * (v7 & a1[6])) = v14;
        goto LABEL_17;
      }
      if ( *(_QWORD **)(v16 + 16 * (v7 & a1[6]) + 8) != v15 )
        goto LABEL_17;
    }
    *(_QWORD *)(v16 + 8 * v17 + 8) = v14;
LABEL_17:
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
