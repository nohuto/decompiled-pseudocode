/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18019FD80
 * Callers:
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x18003BF5C (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInpu.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18003A630 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18003BF10 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18019EA3C (--1_Clear_guard@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // r11
  _QWORD *v9; // rbx
  __int64 v10; // r14
  __int64 appended; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rsi
  _QWORD *v18; // r9
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rbp
  _QWORD *v23; // r8
  __int64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 *v30; // [rsp+58h] [rbp+10h] BYREF
  int v31; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v30) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v30) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    v10 = (__int64)(v8 + 2);
    v31 = *((_DWORD *)v8 + 4);
    LODWORD(v30) = *((_DWORD *)v8 + 5);
    appended = std::_Fnv1a_append_bytes((__int64)v7, (const unsigned __int8 *const)&v30, 4uLL);
    v14 = std::_Fnv1a_append_bytes(v12, (const unsigned __int8 *const)&v31, v13);
    v16 = a1[3];
    v17 = 2 * (a1[6] & (v14 ^ appended));
    if ( *(_QWORD *)(v16 + 8 * v17) == v4 )
    {
      *(_QWORD *)(v16 + 8 * v17) = v15;
LABEL_7:
      *(_QWORD *)(v16 + 8 * v17 + 8) = v15;
      goto LABEL_16;
    }
    if ( operator==(v10, *(_QWORD *)(v16 + 8 * v17 + 8) + 16LL) )
    {
      v19 = *v18;
      if ( *v18 != v15 )
      {
        v20 = *(_QWORD **)(v15 + 8);
        *v20 = v9;
        v7 = (_QWORD *)v9[1];
        *v7 = v19;
        v21 = *(_QWORD **)(v19 + 8);
        *v21 = v15;
        *(_QWORD *)(v19 + 8) = v7;
        v9[1] = v20;
        *(_QWORD *)(v15 + 8) = v21;
      }
      goto LABEL_7;
    }
    v22 = v18;
    while ( 1 )
    {
      v23 = v18 + 1;
      if ( *(_QWORD **)(v16 + 8 * v17) == v22 )
        break;
      v22 = (_QWORD *)*v23;
      if ( operator==(v10, *v23 + 16LL) )
      {
        v24 = *v18;
        v25 = *(_QWORD **)(v15 + 8);
        *v25 = v9;
        v7 = (_QWORD *)v9[1];
        *v7 = v24;
        v26 = *(_QWORD **)(v24 + 8);
        *v26 = v15;
        *(_QWORD *)(v24 + 8) = v7;
        v9[1] = v25;
        *(_QWORD *)(v15 + 8) = v26;
        goto LABEL_16;
      }
    }
    v27 = *(_QWORD **)(v15 + 8);
    *v27 = v9;
    v28 = (_QWORD *)v9[1];
    *v28 = v18;
    v7 = (_QWORD *)*v23;
    *v7 = v15;
    *v23 = v28;
    v9[1] = v27;
    *(_QWORD *)(v15 + 8) = v7;
    *(_QWORD *)(v16 + 8 * v17) = v15;
LABEL_16:
    v8 = v9;
  }
  v30 = 0LL;
  return std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Clear_guard::~_Clear_guard(&v30);
}
