/*
 * XREFs of ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@AEBV01@@Z @ 0x1800539C0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18002F2F4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x18006A788 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::unordered_set<unsigned long>::unordered_set<unsigned long>(_QWORD *a1, void ***a2)
{
  void ***v2; // r15
  void ***v4; // r13
  void **v5; // rax
  unsigned __int64 v6; // rsi
  void **v7; // rbx
  unsigned __int64 v8; // rcx
  void **i; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 j; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  void **v14; // rbp
  __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  void **v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  void **v23; // rdx
  void **v24; // rax
  char *v25; // rcx
  __int64 v26; // rax
  const struct std::nothrow_t *v27; // rdx
  void **v28; // rax
  char *v29; // r8
  char *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (void ***)(a1 + 1);
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = (void **)operator new(0x18uLL);
  *v5 = v5;
  v5[1] = v5;
  *v4 = v5;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = v2[6];
  a1[7] = v2[7];
  v6 = v2[4] - v2[3];
  v7 = *v4;
  if ( (__int64)a1[4] >> 3 < v6 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v10 = 8 * v6;
    if ( v10 >= 0x1000 )
    {
      v24 = (void **)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v10);
    }
    else
    {
      if ( !v10 )
      {
        i = 0LL;
        goto LABEL_36;
      }
      v24 = (void **)operator new(v10);
    }
    i = v24;
LABEL_36:
    v25 = (char *)a1[3];
    v26 = (__int64)(a1[5] - (_QWORD)v25) >> 3;
    if ( v26 )
    {
      v27 = (const struct std::nothrow_t *)(8 * v26);
      if ( (unsigned __int64)(8 * v26) >= 0x1000 )
      {
        v27 = (const struct std::nothrow_t *)((char *)v27 + 39);
        v29 = (char *)*((_QWORD *)v25 - 1);
        v30 = (char *)(v25 - v29);
        if ( (unsigned __int64)(v30 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v30, v27);
          goto LABEL_51;
        }
        v25 = v29;
      }
      operator delete(v25, v27);
    }
    a1[3] = i;
    v28 = (void **)((char *)i + v10);
    a1[4] = (char *)i + v10;
    a1[5] = (char *)i + v10;
    while ( i != v28 )
      *i++ = v7;
    goto LABEL_4;
  }
  v8 = (unsigned __int64)(a1[4] + 7LL) >> 3;
  if ( v8 )
    memset64(0LL, (unsigned __int64)v7, v8);
LABEL_4:
  v7 = v2[1];
  for ( i = (void **)*v7; i != v7; i = (void **)*i )
  {
    v10 = 0xCBF29CE484222325uLL;
    for ( j = 0LL; j < 4; ++j )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)i + j + 16) ^ v10);
    v12 = a1[3];
    v13 = *(_QWORD *)(v12 + 16 * (a1[6] & v10) + 8);
    v14 = *v4;
    if ( (void **)v13 == *v4 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( *((_DWORD *)i + 4) == *(_DWORD *)(v13 + 16) )
      {
        v14 = *(void ***)v13;
        goto LABEL_14;
      }
      if ( v13 == *(_QWORD *)(v12 + 16 * (a1[6] & v10)) )
        break;
      v13 = *(_QWORD *)(v13 + 8);
    }
    v14 = (void **)v13;
    v13 = 0LL;
LABEL_14:
    if ( !v13 )
    {
LABEL_15:
      if ( a1[2] == 0xAAAAAAAAAAAAAAALL )
        std::_Xlength_error("unordered_map/set too long");
      v2 = (void ***)operator new(0x18uLL);
      *((_DWORD *)v2 + 4) = *((_DWORD *)i + 4);
      v16 = a1[2] + 1LL;
      if ( v16 < 0 )
        v17 = (float)(v16 & 1 | (unsigned int)((unsigned __int64)v16 >> 1))
            + (float)(v16 & 1 | (unsigned int)((unsigned __int64)v16 >> 1));
      else
        v17 = (float)(int)v16;
      v18 = a1[7];
      if ( v18 < 0 )
      {
        v31 = a1[7] & 1LL | ((unsigned __int64)v18 >> 1);
        v19 = (float)(int)v31 + (float)(int)v31;
      }
      else
      {
        v19 = (float)(int)v18;
      }
      if ( (float)(v17 / v19) > *(float *)a1 )
      {
LABEL_51:
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Rehash_for_1(a1);
        v14 = (void **)*std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                          a1,
                          &v32,
                          (_DWORD *)v2 + 4,
                          v10);
      }
      v20 = (void **)v14[1];
      ++a1[2];
      *v2 = v14;
      v2[1] = v20;
      *v20 = v2;
      v14[1] = v2;
      v21 = a1[3];
      v22 = 2 * (a1[6] & v10);
      v23 = *(void ***)(v21 + 8 * v22);
      if ( v23 == *v4 )
      {
        *(_QWORD *)(v21 + 8 * v22) = v2;
LABEL_24:
        *(_QWORD *)(v21 + 8 * v22 + 8) = v2;
        continue;
      }
      if ( v23 == v14 )
      {
        *(_QWORD *)(v21 + 8 * v22) = v2;
      }
      else if ( *(void ***)(v21 + 8 * v22 + 8) == v20 )
      {
        goto LABEL_24;
      }
    }
  }
  return a1;
}
