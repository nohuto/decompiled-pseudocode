/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18013C97C
 * Callers:
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x18013CB9C (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800F6FB8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??8EffectDescriptionKey@@QEBA_NAEBU0@@Z @ 0x18013BE98 (--8EffectDescriptionKey@@QEBA_NAEBU0@@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18013CB40 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_U.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 *v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r14
  _QWORD *v12; // rsi
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v26) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v4 = a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    a1 + 3,
    2 * v7,
    v4);
  a1[7] = v7;
  a1[6] = v7 - 1;
  v8 = *(_QWORD **)a1[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v10 = *v5;
    v11 = 2LL * (v8[2] & a1[6]);
    v9 = (_QWORD *)*v9;
    if ( *(_QWORD *)(*v5 + 16LL * (v8[2] & a1[6])) == v4 )
    {
      *(_QWORD *)(v10 + 16LL * (v8[2] & a1[6])) = v8;
      *(_QWORD *)(v10 + 8 * v11 + 8) = v8;
    }
    else
    {
      v12 = *(_QWORD **)(v10 + 16LL * (v8[2] & a1[6]) + 8);
      if ( EffectDescriptionKey::operator==((__int64)(v8 + 2), v12 + 2) )
      {
        v18 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 != v8 )
        {
          v19 = (_QWORD *)v8[1];
          *v19 = v9;
          v20 = (_QWORD *)v9[1];
          *v20 = v18;
          v21 = (_QWORD *)v18[1];
          *v21 = v8;
          v18[1] = v20;
          v9[1] = v19;
          v8[1] = v21;
        }
        *(_QWORD *)(v10 + 8 * v11 + 8) = v8;
      }
      else
      {
        do
        {
          v13 = v12 + 1;
          if ( *(_QWORD **)(v10 + 8 * v11) == v12 )
          {
            v14 = (_QWORD *)v8[1];
            *v14 = v9;
            v15 = (_QWORD *)v9[1];
            *v15 = v12;
            v16 = (_QWORD *)*v13;
            *v16 = v8;
            *v13 = v15;
            v9[1] = v14;
            v8[1] = v16;
            *(_QWORD *)(v10 + 8 * v11) = v8;
            goto LABEL_8;
          }
          v12 = (_QWORD *)*v13;
        }
        while ( !EffectDescriptionKey::operator==((__int64)(v8 + 2), (__int64 *)(*v13 + 16LL)) );
        v22 = (_QWORD *)*v12;
        v23 = (_QWORD *)v8[1];
        *v23 = v9;
        v24 = (_QWORD *)v9[1];
        *v24 = v22;
        v25 = (_QWORD *)v22[1];
        *v25 = v8;
        v22[1] = v24;
        v9[1] = v23;
        v8[1] = v25;
      }
LABEL_8:
      v5 = a1 + 3;
    }
    v8 = v9;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
