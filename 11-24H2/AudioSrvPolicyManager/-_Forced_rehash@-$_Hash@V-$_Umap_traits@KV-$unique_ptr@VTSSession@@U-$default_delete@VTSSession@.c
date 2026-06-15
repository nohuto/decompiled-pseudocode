/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180040E04
 * Callers:
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18003CC00 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 * Callees:
 *     ??$?RK@?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@QEBA_KAEBK@Z @ 0x1800151CC (--$-RK@-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@QEBA_KAEBK@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D2C8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18001D2C8.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003D764 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 i; // r10
  __int64 v9; // rax
  unsigned int *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v26; // [rsp+30h] [rbp+8h] BYREF

  HIDWORD(v26) = HIDWORD(a1);
  LODWORD(v26) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v3 = qword_180064AA8;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    (__int64)&qword_180064AB8,
    2 * v5,
    qword_180064AA8);
  v7 = v5 - 1;
  qword_180064AD0 = v5 - 1;
  qword_180064AD8 = v5;
  for ( i = *(_QWORD *)qword_180064AA8; i != v3; i = v12 )
  {
    v9 = std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>::operator()<unsigned long>(
           v6,
           i + 16);
    v13 = qword_180064AB8;
    v14 = 2 * (v7 & v9);
    if ( *(_QWORD *)(qword_180064AB8 + 16 * (v7 & v9)) == v3 )
    {
      *(_QWORD *)(qword_180064AB8 + 16 * (v7 & v9)) = v11;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v11;
      goto LABEL_15;
    }
    v15 = *(__int64 **)(qword_180064AB8 + 16 * (v7 & v9) + 8);
    v6 = *v10;
    if ( (_DWORD)v6 == *((_DWORD *)v15 + 4) )
    {
      v16 = *v15;
      if ( *v15 != v11 )
      {
        v17 = *(_QWORD **)(v11 + 8);
        *v17 = v12;
        v6 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)v6 = v16;
        v18 = *(_QWORD **)(v16 + 8);
        *v18 = v11;
        *(_QWORD *)(v16 + 8) = v6;
        *(_QWORD *)(v12 + 8) = v17;
        *(_QWORD *)(v11 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = v15 + 1;
      if ( *(__int64 **)(qword_180064AB8 + 8 * v14) == v15 )
        break;
      v15 = (__int64 *)*v19;
      if ( (_DWORD)v6 == *(_DWORD *)(*v19 + 16) )
      {
        v20 = *v15;
        v21 = *(_QWORD **)(v11 + 8);
        *v21 = v12;
        v6 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)v6 = v20;
        v22 = *(_QWORD **)(v20 + 8);
        *v22 = v11;
        *(_QWORD *)(v20 + 8) = v6;
        *(_QWORD *)(v12 + 8) = v21;
        *(_QWORD *)(v11 + 8) = v22;
        goto LABEL_15;
      }
    }
    v23 = *(_QWORD **)(v11 + 8);
    *v23 = v12;
    v6 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)v6 = v15;
    v24 = (_QWORD *)*v19;
    *v24 = v11;
    *v19 = v6;
    *(_QWORD *)(v12 + 8) = v23;
    *(_QWORD *)(v11 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v11;
LABEL_15:
    v7 = qword_180064AD0;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
