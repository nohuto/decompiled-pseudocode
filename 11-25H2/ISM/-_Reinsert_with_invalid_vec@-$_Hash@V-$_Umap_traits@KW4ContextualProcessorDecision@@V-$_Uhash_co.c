/*
 * XREFs of ?_Reinsert_with_invalid_vec@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180020B18
 * Callers:
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001E650 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??4?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180020E6C (--4-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x1800233D8 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KPEAUIMPC.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18002F2F4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     _o_ceilf_0 @ 0x18009D2F0 (_o_ceilf_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Reinsert_with_invalid_vec(
        __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rcx
  float v4; // xmm0_4
  float v5; // xmm0_4
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  size_t v16; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  char *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 result; // rax
  __int64 i; // r10
  unsigned int *v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 *v29; // rsi
  _QWORD *v30; // rdx
  __int64 v31; // rsi
  _QWORD *v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rdx
  __int64 v35; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 < 0 )
    v4 = (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1))
       + (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1));
  else
    v4 = (float)(int)v3;
  v5 = o_ceilf_0(v4 / *(float *)a1);
  v6 = 0LL;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v5;
  v8 = 8LL;
  if ( v7 > 8 )
    v8 = v7;
  if ( v1 < v8 )
  {
    if ( v1 >= 0x200 || (v1 *= 8LL, v1 < v8) )
      v1 = v8;
  }
  LODWORD(v35) = 0;
  _BitScanReverse64(&v9, 0xFFFFFFFFFFFFFFFuLL);
  if ( v1 > 1LL << v9 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v35) = 0;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = (v1 - 1) | 1;
  v12 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v13, v11);
  v35 = v12;
  v14 = 1LL << ((unsigned __int8)v13 + 1);
  v15 = *(_QWORD *)(a1 + 24);
  if ( (v10 - v15) >> 3 < (unsigned __int64)(2 * v14) )
  {
    if ( (unsigned __int64)(2 * v14) > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v16 = 2 * v14;
    if ( (unsigned __int64)(16 * v14) >= 0x1000 )
    {
      v17 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v16 * 8);
    }
    else
    {
      if ( !(v16 * 8) )
      {
        v18 = 0LL;
        goto LABEL_18;
      }
      v17 = operator new(v16 * 8);
    }
    v18 = v17;
LABEL_18:
    v19 = *(char **)(a1 + 24);
    v20 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v19) >> 3;
    if ( v20 )
      std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v20));
    v21 = &v18[v16];
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = &v18[v16];
    *(_QWORD *)(a1 + 40) = &v18[v16];
    while ( v18 != v21 )
      *v18++ = v12;
    goto LABEL_23;
  }
  std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
    v15,
    v10,
    &v35);
LABEL_23:
  *(_QWORD *)(a1 + 56) = v14;
  result = v14 - 1;
  *(_QWORD *)(a1 + 48) = v14 - 1;
  for ( i = **(_QWORD **)(a1 + 8); i != v12; i = v26 )
  {
    result = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
               v19,
               i + 16);
    v27 = *(_QWORD *)(a1 + 24);
    v28 = 2 * (*(_QWORD *)(a1 + 48) & result);
    if ( *(_QWORD *)(v27 + 16 * (*(_QWORD *)(a1 + 48) & result)) == v12 )
    {
      *(_QWORD *)(v27 + 16 * (*(_QWORD *)(a1 + 48) & result)) = v25;
LABEL_39:
      *(_QWORD *)(v27 + 8 * v28 + 8) = v25;
      continue;
    }
    result = *(_QWORD *)(v27 + 16 * (*(_QWORD *)(a1 + 48) & result) + 8);
    v19 = (char *)*v24;
    if ( (_DWORD)v19 == *(_DWORD *)(result + 16) )
    {
      v31 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v25 )
      {
        v32 = *(_QWORD **)(v25 + 8);
        *v32 = v26;
        v19 = *(char **)(v26 + 8);
        *(_QWORD *)v19 = v31;
        result = *(_QWORD *)(v31 + 8);
        *(_QWORD *)result = v25;
        *(_QWORD *)(v31 + 8) = v19;
        *(_QWORD *)(v26 + 8) = v32;
        *(_QWORD *)(v25 + 8) = result;
      }
      goto LABEL_39;
    }
    do
    {
      v29 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v27 + 8 * v28) == result )
      {
        v30 = *(_QWORD **)(v25 + 8);
        *v30 = v26;
        v19 = *(char **)(v26 + 8);
        *(_QWORD *)v19 = result;
        result = *v29;
        *(_QWORD *)result = v25;
        *v29 = (__int64)v19;
        *(_QWORD *)(v26 + 8) = v30;
        *(_QWORD *)(v25 + 8) = result;
        *(_QWORD *)(v27 + 8 * v28) = v25;
        goto LABEL_29;
      }
      result = *v29;
    }
    while ( (_DWORD)v19 != *(_DWORD *)(*v29 + 16) );
    v33 = *(_QWORD *)result;
    v34 = *(_QWORD **)(v25 + 8);
    *v34 = v26;
    v19 = *(char **)(v26 + 8);
    *(_QWORD *)v19 = v33;
    result = *(_QWORD *)(v33 + 8);
    *(_QWORD *)result = v25;
    *(_QWORD *)(v33 + 8) = v19;
    *(_QWORD *)(v26 + 8) = v34;
    *(_QWORD *)(v25 + 8) = result;
LABEL_29:
    ;
  }
  return result;
}
