/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180052B18
 * Callers:
 *     ??$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x18003E4A4 (--$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRouti.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18003F480 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18009B9AC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_comp.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // r9
  _QWORD *v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // r11
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rbp
  _QWORD *v19; // r8
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  __int64 v28; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v28) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v28) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v7 = *(_QWORD **)a1[1];
  v8 = v7;
  while ( v7 != (_QWORD *)v4 )
  {
    v9 = a1[3];
    v10 = *((unsigned int *)v7 + 5);
    v8 = (_QWORD *)*v8;
    v11 = 2 * (a1[6] & (v10 | ((unsigned __int64)*((unsigned int *)v7 + 4) << 32)));
    if ( *(_QWORD *)(v9 + 16 * (a1[6] & (v10 | ((unsigned __int64)*((unsigned int *)v7 + 4) << 32)))) == v4 )
    {
      *(_QWORD *)(v9 + 16 * (a1[6] & (v10 | ((unsigned __int64)*((unsigned int *)v7 + 4) << 32)))) = v7;
LABEL_7:
      *(_QWORD *)(v9 + 8 * v11 + 8) = v7;
      goto LABEL_16;
    }
    if ( operator==(
           (__int64)(v7 + 2),
           *(_QWORD *)(v9 + 16 * (a1[6] & (v10 | ((unsigned __int64)*((unsigned int *)v7 + 4) << 32))) + 8) + 16LL) )
    {
      v14 = (_QWORD *)*v13;
      if ( (_QWORD *)*v13 != v7 )
      {
        v15 = (_QWORD *)v7[1];
        *v15 = v8;
        v16 = (_QWORD *)v8[1];
        *v16 = v14;
        v17 = (_QWORD *)v14[1];
        *v17 = v7;
        v14[1] = v16;
        v8[1] = v15;
        v7[1] = v17;
      }
      goto LABEL_7;
    }
    v18 = v13;
    while ( 1 )
    {
      v19 = v13 + 1;
      if ( *(_QWORD **)(v9 + 8 * v11) == v18 )
        break;
      v18 = (_QWORD *)*v19;
      if ( operator==(v12, *v19 + 16LL) )
      {
        v20 = *v13;
        v21 = (_QWORD *)v7[1];
        *v21 = v8;
        v22 = (_QWORD *)v8[1];
        *v22 = v20;
        v23 = *(_QWORD **)(v20 + 8);
        *v23 = v7;
        *(_QWORD *)(v20 + 8) = v22;
        v8[1] = v21;
        v7[1] = v23;
        goto LABEL_16;
      }
    }
    v24 = (_QWORD *)v7[1];
    *v24 = v8;
    v25 = (_QWORD *)v8[1];
    *v25 = v13;
    v26 = (_QWORD *)*v19;
    *v26 = v7;
    *v19 = v25;
    v8[1] = v24;
    v7[1] = v26;
    *(_QWORD *)(v9 + 8 * v11) = v7;
LABEL_16:
    v7 = v8;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
