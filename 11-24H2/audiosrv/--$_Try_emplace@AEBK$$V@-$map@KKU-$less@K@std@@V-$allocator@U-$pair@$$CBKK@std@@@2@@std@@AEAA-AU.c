/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18002A390
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18002A120 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ??$construct@U?$pair@$$CBKK@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@QEAU?$pair@$$CBKK@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002A5A8 (--$construct@U-$pair@$$CBKK@std@@AEBUpiecewise_construct_t@2@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@@Z @ 0x18002AB30 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18002AB84 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU-$_Tree_nod.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800D9590 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v5; // r14
  _QWORD *v6; // rdi
  int v7; // ebp
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r10
  _QWORD *v15; // r11
  __int64 v16; // r9
  __int64 i; // rax
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // [rsp+70h] [rbp+8h] BYREF

  v5 = *a1;
  v6 = *(_QWORD **)(*a1 + 8LL);
  v7 = 0;
  v8 = (_QWORD *)*a1;
  v9 = v6;
  while ( !*((_BYTE *)v9 + 25) )
  {
    v6 = v9;
    if ( *((_DWORD *)v9 + 7) < *a3 )
    {
      v7 = 0;
      v9 = (_QWORD *)v9[2];
    }
    else
    {
      v7 = 1;
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 7) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v22 = a3;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(40LL);
    std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>::construct<std::pair<unsigned long const,unsigned long>,std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
      v11,
      v10 + 28,
      v12,
      &v22);
    *(_QWORD *)v14 = v5;
    *(_QWORD *)(v14 + 8) = v5;
    *(_QWORD *)(v14 + 16) = v5;
    *(_WORD *)(v14 + 24) = 0;
    ++a1[1];
    v15 = (_QWORD *)*a1;
    *(_QWORD *)(v14 + 8) = v6;
    if ( v6 != v15 )
    {
      if ( v7 )
      {
        *v6 = v14;
        if ( v6 == (_QWORD *)*v15 )
          *v15 = v14;
      }
      else
      {
        v6[2] = v14;
        if ( v6 == (_QWORD *)v15[2] )
          v15[2] = v14;
      }
      v16 = v14;
      for ( i = *(_QWORD *)(v14 + 8); ; i = *(_QWORD *)(v16 + 8) )
      {
        if ( *(_BYTE *)(i + 24) )
        {
          *(_BYTE *)(v15[1] + 24LL) = 1;
          goto LABEL_15;
        }
        v19 = *(_QWORD *)(v16 + 8);
        v20 = *(__int64 **)(v19 + 8);
        v21 = *v20;
        if ( v19 == *v20 )
        {
          v21 = v20[2];
          if ( !*(_BYTE *)(v21 + 24) )
            goto LABEL_33;
          if ( v16 == *(_QWORD *)(v19 + 16) )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(a1, v19);
          *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
            a1,
            *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL),
            v13,
            v16);
        }
        else
        {
          if ( !*(_BYTE *)(v21 + 24) )
          {
LABEL_33:
            *(_BYTE *)(v19 + 24) = 1;
            *(_BYTE *)(v21 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = 0;
            v16 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
            continue;
          }
          if ( v16 == *(_QWORD *)v19 )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
              a1,
              v19,
              v13,
              *(_QWORD *)(v16 + 8));
          *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
            a1,
            *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL));
        }
      }
    }
    *v15 = v14;
    v15[1] = v14;
    v15[2] = v14;
    *(_BYTE *)(v14 + 24) = 1;
LABEL_15:
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
