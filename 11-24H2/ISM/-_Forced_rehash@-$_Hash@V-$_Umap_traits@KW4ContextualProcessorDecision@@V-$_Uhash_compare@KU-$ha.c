/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180029320
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18005CC80 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$has.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x1800239A8 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18002F8B4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 *v9; // rcx
  size_t v10; // r14
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  __int64 result; // rax
  __int64 i; // r10
  unsigned int *v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 *v23; // rdi
  _QWORD *v24; // rdx
  __int64 v25; // rdi
  _QWORD *v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rdx
  unsigned __int64 v29; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v29) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v29) = 0;
  v4 = a2 - 1;
  v5 = (unsigned __int64 *)a1[4];
  v6 = a1[1];
  _BitScanReverse64(&v7, v4 | 1);
  v29 = v6;
  v8 = 1LL << ((unsigned __int8)v7 + 1);
  v9 = (unsigned __int64 *)a1[3];
  if ( v5 - v9 < (unsigned __int64)(2 * v8) )
  {
    if ( (unsigned __int64)(2 * v8) > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = 2 * v8;
    if ( (unsigned __int64)(16 * v8) >= 0x1000 )
    {
      v11 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v10 * 8);
    }
    else
    {
      if ( !(v10 * 8) )
      {
        v12 = 0LL;
        goto LABEL_8;
      }
      v11 = (unsigned __int64 *)operator new(v10 * 8);
    }
    v12 = v11;
LABEL_8:
    v13 = a1[3];
    v14 = (a1[5] - v13) >> 3;
    if ( v14 )
      std::_Deallocate<16,0>((char *)v13, (const struct std::nothrow_t *)(8 * v14));
    v15 = &v12[v10];
    a1[3] = v12;
    a1[4] = &v12[v10];
    a1[5] = &v12[v10];
    while ( v12 != v15 )
      *v12++ = v6;
    goto LABEL_13;
  }
  std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
    v9,
    v5,
    &v29);
LABEL_13:
  a1[7] = v8;
  result = v8 - 1;
  a1[6] = v8 - 1;
  for ( i = *(_QWORD *)a1[1]; i != v6; i = v20 )
  {
    result = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
               v13,
               i + 16);
    v21 = a1[3];
    v22 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v21 + 16 * (a1[6] & result)) == v6 )
    {
      *(_QWORD *)(v21 + 16 * (a1[6] & result)) = v19;
LABEL_29:
      *(_QWORD *)(v21 + 8 * v22 + 8) = v19;
      continue;
    }
    result = *(_QWORD *)(v21 + 16 * (a1[6] & result) + 8);
    v13 = *v18;
    if ( (_DWORD)v13 == *(_DWORD *)(result + 16) )
    {
      v25 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v19 )
      {
        v26 = *(_QWORD **)(v19 + 8);
        *v26 = v20;
        v13 = *(_QWORD *)(v20 + 8);
        *(_QWORD *)v13 = v25;
        result = *(_QWORD *)(v25 + 8);
        *(_QWORD *)result = v19;
        *(_QWORD *)(v25 + 8) = v13;
        *(_QWORD *)(v20 + 8) = v26;
        *(_QWORD *)(v19 + 8) = result;
      }
      goto LABEL_29;
    }
    do
    {
      v23 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v21 + 8 * v22) == result )
      {
        v24 = *(_QWORD **)(v19 + 8);
        *v24 = v20;
        v13 = *(_QWORD *)(v20 + 8);
        *(_QWORD *)v13 = result;
        result = *v23;
        *(_QWORD *)result = v19;
        *v23 = v13;
        *(_QWORD *)(v20 + 8) = v24;
        *(_QWORD *)(v19 + 8) = result;
        *(_QWORD *)(v21 + 8 * v22) = v19;
        goto LABEL_19;
      }
      result = *v23;
    }
    while ( (_DWORD)v13 != *(_DWORD *)(*v23 + 16) );
    v27 = *(_QWORD *)result;
    v28 = *(_QWORD **)(v19 + 8);
    *v28 = v20;
    v13 = *(_QWORD *)(v20 + 8);
    *(_QWORD *)v13 = v27;
    result = *(_QWORD *)(v27 + 8);
    *(_QWORD *)result = v19;
    *(_QWORD *)(v27 + 8) = v13;
    *(_QWORD *)(v20 + 8) = v28;
    *(_QWORD *)(v19 + 8) = result;
LABEL_19:
    ;
  }
  return result;
}
