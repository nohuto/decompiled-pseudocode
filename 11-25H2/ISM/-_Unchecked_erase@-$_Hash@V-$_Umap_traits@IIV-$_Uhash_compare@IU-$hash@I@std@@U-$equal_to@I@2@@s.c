/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800847A8
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18005A1E0 (-clear@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180097354 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_comp.c)
 */

char *__fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        char *a2,
        char *a3)
{
  char **v5; // r15
  char **v6; // r13
  char *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r12
  char *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r14
  char *v17; // r15
  bool v18; // bl
  char **v19; // rax
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  char **v22; // [rsp+28h] [rbp-50h]
  char *v23; // [rsp+30h] [rbp-48h]
  char *v25; // [rsp+88h] [rbp+10h]
  char *v26; // [rsp+90h] [rbp+18h]

  if ( a2 != a3 )
  {
    v5 = (char **)*((_QWORD *)a2 + 1);
    v6 = (char **)a1[1];
    v7 = a2;
    v8 = a1[3];
    v21 = a1 + 1;
    v22 = v5;
    v9 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
           (__int64)a1,
           (__int64)(a2 + 16));
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v9);
    v25 = *(char **)(v8 + 16 * (*(_QWORD *)(v10 + 48) & v9));
    v26 = *(char **)(v8 + 16 * (*(_QWORD *)(v10 + 48) & v9) + 8);
    while ( 1 )
    {
      v12 = v7;
      v7 = *(char **)v7;
      v23 = v7;
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x18);
      --a1[2];
      if ( v12 == v26 )
        break;
      if ( v7 == a3 )
      {
        if ( v25 == a2 )
          *(_QWORD *)(v8 + 8 * v11) = v7;
        *v5 = v7;
        *((_QWORD *)v7 + 1) = v5;
        return a3;
      }
    }
    if ( v25 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v11) = v6;
      v5 = v6;
    }
    *(_QWORD *)(v8 + 8 * v11 + 8) = v5;
    while ( v7 != a3 )
    {
      v14 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
              v13,
              (__int64)(v7 + 16));
      v16 = 2 * (*(_QWORD *)(v15 + 48) & v14);
      v17 = *(char **)(v8 + 16 * (*(_QWORD *)(v15 + 48) & v14) + 8);
      while ( 1 )
      {
        v18 = v7 == v17;
        std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Range_eraser::_Bump_erased(&v21);
        v7 = v23;
        if ( v18 )
          break;
        if ( v23 == a3 )
        {
          *(_QWORD *)(v8 + 8 * v16) = v23;
          goto LABEL_16;
        }
      }
      *(_QWORD *)(v8 + 8 * v16) = v6;
      *(_QWORD *)(v8 + 8 * v16 + 8) = v6;
    }
LABEL_16:
    v19 = v22;
    *v22 = v7;
    *((_QWORD *)v7 + 1) = v19;
  }
  return a3;
}
