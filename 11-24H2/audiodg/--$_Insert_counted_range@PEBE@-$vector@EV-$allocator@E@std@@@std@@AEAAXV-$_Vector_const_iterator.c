/*
 * XREFs of ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x140056AA8
 * Callers:
 *     ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@PEAUIPropertyStore@@@Z @ 0x14004B7F8 (-GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std.c)
 *     ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140056A50 (--$insert@PEBE$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400190B8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x140091464 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(
        __int64 a1,
        char *a2,
        const void *a3,
        size_t a4)
{
  _BYTE *v8; // rdx
  char *v9; // r14
  __int64 v10; // rcx
  char *result; // rax
  signed __int64 v12; // r13
  size_t v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  char *v16; // r15
  signed __int64 v17; // rax
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  char *v21; // rdi
  char *v22; // rdi
  _BYTE *v23; // [rsp+20h] [rbp-58h]
  size_t v24; // [rsp+28h] [rbp-50h]
  char *v25; // [rsp+80h] [rbp+8h]

  v8 = *(_BYTE **)a1;
  v23 = *(_BYTE **)a1;
  v9 = *(char **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 16);
  result = (char *)(v10 - (_QWORD)v9);
  if ( a4 )
  {
    if ( a4 <= (unsigned __int64)result )
    {
      if ( a4 >= v9 - a2 )
      {
        v22 = &a2[a4];
        memmove_0(&a2[a4], a2, v9 - a2);
        *(_QWORD *)(a1 + 8) = &v22[v9 - a2];
      }
      else
      {
        v21 = &v9[-a4];
        memmove_0(v9, &v9[-a4], a4);
        *(_QWORD *)(a1 + 8) = &v9[a4];
        memmove_0(&v9[-(v21 - a2)], a2, v21 - a2);
      }
      return (char *)memmove_0(a2, a3, a4);
    }
    else
    {
      v12 = v9 - v8;
      v13 = 0x7FFFFFFFFFFFFFFFLL;
      if ( a4 > 0x7FFFFFFFFFFFFFFFLL - (v9 - v8) )
        std::_Xlength_error("vector too long");
      v24 = a4 + v12;
      v14 = v10 - (_QWORD)v8;
      v15 = v14 >> 1;
      if ( v14 <= 0x7FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v13 = v15 + v14;
        if ( v15 + v14 < a4 + v12 )
          v13 = a4 + v12;
      }
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
      v17 = a2 - v23;
      try
      {
        v25 = &v16[v17];
        memmove_0(&v16[v17], a3, a4);
        if ( a4 == 1 && a2 == v9 )
        {
          v18 = v12;
          v19 = v23;
          v20 = v16;
        }
        else
        {
          memmove_0(v16, v23, a2 - v23);
          v20 = &v25[a4];
          v18 = v9 - a2;
          v19 = a2;
        }
        memmove_0(v20, v19, v18);
        if ( *(_QWORD *)a1 )
          std::_Deallocate<16,0>(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
        *(_QWORD *)a1 = v16;
        *(_QWORD *)(a1 + 8) = &v16[v24];
        result = &v16[v13];
        *(_QWORD *)(a1 + 16) = &v16[v13];
      }
      catch ( ... )
      {
        std::_Deallocate<16,0>(v16, v13);
        throw;
      }
    }
  }
  return result;
}
