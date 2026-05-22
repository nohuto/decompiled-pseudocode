/*
 * XREFs of ??4?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180020E6C
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001B6B0 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x180021F00 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Reinsert_with_invalid_vec@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180020B18 (-_Reinsert_with_invalid_vec@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_co.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18019C2B4 (-_Unchecked_erase@-$list@U-$pair@$$CBKW4ContextualProcessorDecision@@@std@@V-$allocator@U-$pair@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // r12
  __int64 **v4; // rdi
  __int64 **v5; // r8
  __int64 *v6; // rdx
  __int64 *v7; // rbx
  __int64 i; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // r13
  __int64 v11; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  if ( a1 != a2 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    v3 = (__int64 *)(a1 + 8);
    v4 = *(__int64 ***)(a2 + 8);
    v5 = *(__int64 ***)(a1 + 8);
    v6 = *v5;
    v7 = *v4;
    while ( v6 != (__int64 *)v5 )
    {
      if ( v7 == (__int64 *)v4 )
      {
        std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Unchecked_erase(a1 + 8);
        goto LABEL_8;
      }
      *((_DWORD *)v6 + 4) = *((_DWORD *)v7 + 4);
      *((_DWORD *)v6 + 5) = *((_DWORD *)v7 + 5);
      v6 = (__int64 *)*v6;
      v7 = (__int64 *)*v7;
    }
    i = 0LL;
    if ( v7 == (__int64 *)v4 )
    {
      v9 = 0LL;
      v10 = 0LL;
    }
    else
    {
      v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
      v9[2] = v7[2];
      v10 = v9;
      for ( i = 1LL; ; ++i )
      {
        v7 = (__int64 *)*v7;
        if ( v7 == (__int64 *)v4 )
          break;
        v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
        v13[2] = v7[2];
        *v10 = v13;
        v13[1] = v10;
        v10 = v13;
      }
    }
    v11 = *v3;
    if ( i )
    {
      v14 = *(_QWORD **)(v11 + 8);
      v9[1] = v14;
      *v14 = v9;
      *v10 = v11;
      *(_QWORD *)(v11 + 8) = v10;
      v3[1] += i;
    }
LABEL_8:
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Reinsert_with_invalid_vec(a1);
  }
  return a1;
}
