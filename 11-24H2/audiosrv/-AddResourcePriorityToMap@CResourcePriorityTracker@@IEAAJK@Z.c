/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18002A120
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180029CC0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180029F40 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18002A390 (--$_Try_emplace@AEBK$$V@-$map@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@AEAA-AU.c)
 *     ??$construct@U?$pair@$$CBKK@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Default_allocator_traits@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@QEAU?$pair@$$CBKK@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002A5A8 (--$construct@U-$pair@$$CBKK@std@@AEBUpiecewise_construct_t@2@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@@Z @ 0x18002AB30 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18002AB84 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU-$_Tree_nod.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800D9590 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CResourcePriorityTracker::AddResourcePriorityToMap(
        CResourcePriorityTracker *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  int v9; // esi
  _QWORD *v10; // r10
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  _QWORD *v16; // r11
  __int64 i; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // rcx
  char *v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int *v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF

  v27 = a2;
  try
  {
    v4 = (char *)this + 40;
    v5 = (_QWORD *)*((_QWORD *)this + 5);
    v6 = (_QWORD *)v5[1];
    HIDWORD(v24) = 0;
    v7 = v5;
    v8 = v6;
    while ( !*((_BYTE *)v8 + 25) )
    {
      if ( *((_DWORD *)v8 + 7) < a2 )
      {
        v8 = (_QWORD *)v8[2];
      }
      else
      {
        v7 = v8;
        v8 = (_QWORD *)*v8;
      }
    }
    if ( *((_BYTE *)v7 + 25) || a2 < *((_DWORD *)v7 + 7) )
    {
      v9 = 0;
      HIDWORD(v24) = 0;
      v10 = v5;
      v11 = v6;
      while ( !*((_BYTE *)v11 + 25) )
      {
        v6 = v11;
        if ( *((_DWORD *)v11 + 7) < a2 )
        {
          v9 = 0;
          v11 = (_QWORD *)v11[2];
        }
        else
        {
          v9 = 1;
          v10 = v11;
          v11 = (_QWORD *)*v11;
        }
      }
      if ( *((_BYTE *)v10 + 25) || a2 < *((_DWORD *)v10 + 7) )
      {
        if ( *((_QWORD *)v4 + 1) == 0x666666666666666LL )
          std::_Throw_tree_length_error();
        v26 = (int *)&v27;
        v23 = v4;
        v24 = 0LL;
        v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(40LL);
        std::_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>::construct<std::pair<unsigned long const,unsigned long>,std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
          v13,
          v12 + 28,
          v14,
          &v26);
        *v10 = v5;
        v10[1] = v5;
        v10[2] = v5;
        *((_WORD *)v10 + 12) = 0;
        ++*((_QWORD *)v4 + 1);
        v16 = *(_QWORD **)v4;
        v10[1] = v6;
        if ( v6 != v16 )
        {
          if ( v9 )
          {
            *v6 = v10;
            if ( v6 == (_QWORD *)*v16 )
              *v16 = v10;
          }
          else
          {
            v6[2] = v10;
            if ( v6 == (_QWORD *)v16[2] )
              v16[2] = v10;
          }
          a4 = (const char *)v10;
          for ( i = v10[1]; ; i = *((_QWORD *)a4 + 1) )
          {
            if ( *(_BYTE *)(i + 24) )
            {
              *(_BYTE *)(v16[1] + 24LL) = 1;
              goto LABEL_22;
            }
            v20 = *((_QWORD *)a4 + 1);
            v21 = *(__int64 **)(v20 + 8);
            v22 = *v21;
            if ( v20 == *v21 )
            {
              v22 = v21[2];
              if ( !*(_BYTE *)(v22 + 24) )
                goto LABEL_41;
              if ( a4 == *(const char **)(v20 + 16) )
                std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(v4, v20);
              *(_BYTE *)(*((_QWORD *)a4 + 1) + 24LL) = 1;
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL) + 24LL) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
                v4,
                *(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL),
                v15,
                a4);
            }
            else
            {
              if ( !*(_BYTE *)(v22 + 24) )
              {
LABEL_41:
                *(_BYTE *)(v20 + 24) = 1;
                *(_BYTE *)(v22 + 24) = 1;
                *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL) + 24LL) = 0;
                a4 = *(const char **)(*((_QWORD *)a4 + 1) + 8LL);
                continue;
              }
              if ( a4 == *(const char **)v20 )
                std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
                  v4,
                  v20,
                  v15,
                  *((_QWORD *)a4 + 1));
              *(_BYTE *)(*((_QWORD *)a4 + 1) + 24LL) = 1;
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL) + 24LL) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
                v4,
                *(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL));
            }
          }
        }
        *v16 = v10;
        v16[1] = v10;
        v16[2] = v10;
        *((_BYTE *)v10 + 24) = 1;
      }
LABEL_22:
      *((_DWORD *)v10 + 8) = 1;
    }
    else
    {
      v19 = std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(v4, &v23, &v27);
      ++*(_DWORD *)(*(_QWORD *)v19 + 32LL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x92,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           a4);
  }
  return result;
}
