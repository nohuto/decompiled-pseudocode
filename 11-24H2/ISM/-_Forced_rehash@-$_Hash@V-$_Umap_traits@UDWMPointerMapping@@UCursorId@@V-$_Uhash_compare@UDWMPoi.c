/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180052B10
 * Callers:
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180048A28 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??8@YA_NAEBUDWMPointerMapping@@0@Z @ 0x180048C20 (--8@YA_NAEBUDWMPointerMapping@@0@Z.c)
 *     ??$?RUDWMPointerMapping@@@?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@QEBA_KAEBUDWMPointerMapping@@@Z @ 0x180048C3C (--$-RUDWMPointerMapping@@@-$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U-$equal_to@UDWM.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800980DC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPoi.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r9
  _QWORD *v13; // r8
  _QWORD *v14; // r11
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rbp
  _QWORD *v18; // r11
  __int64 v19; // r9
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v25) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v25) = 0;
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
    v10 = std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>::operator()<DWMPointerMapping>(
            (__int64)v7,
            (__int64)(v8 + 2));
    v11 = a1[3];
    v12 = 2 * (a1[6] & v10);
    if ( *(_QWORD *)(v11 + 16 * (a1[6] & v10)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & v10)) = v8;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v8;
      goto LABEL_16;
    }
    if ( operator==((_DWORD *)v8 + 4, (_DWORD *)(*(_QWORD *)(v11 + 16 * (a1[6] & v10) + 8) + 16LL)) )
    {
      v14 = (_QWORD *)*v13;
      if ( (_QWORD *)*v13 != v8 )
      {
        v15 = (_QWORD *)v8[1];
        *v15 = v9;
        v7 = (_QWORD *)v9[1];
        *v7 = v14;
        v16 = (_QWORD *)v14[1];
        *v16 = v8;
        v14[1] = v7;
        v9[1] = v15;
        v8[1] = v16;
      }
      goto LABEL_7;
    }
    v17 = v13;
    while ( 1 )
    {
      v18 = v13 + 1;
      if ( *(_QWORD **)(v11 + 8 * v12) == v17 )
        break;
      v17 = (_QWORD *)*v18;
      if ( operator==((_DWORD *)v8 + 4, (_DWORD *)(*v18 + 16LL)) )
      {
        v19 = *v13;
        v20 = (_QWORD *)v8[1];
        *v20 = v9;
        v7 = (_QWORD *)v9[1];
        *v7 = v19;
        v21 = *(_QWORD **)(v19 + 8);
        *v21 = v8;
        *(_QWORD *)(v19 + 8) = v7;
        v9[1] = v20;
        v8[1] = v21;
        goto LABEL_16;
      }
    }
    v22 = (_QWORD *)v8[1];
    *v22 = v9;
    v23 = (_QWORD *)v9[1];
    *v23 = v13;
    v7 = (_QWORD *)*v18;
    *v7 = v8;
    *v18 = v23;
    v9[1] = v22;
    v8[1] = v7;
    *(_QWORD *)(v11 + 8 * v12) = v8;
LABEL_16:
    v8 = v9;
  }
  v25 = 0LL;
  return std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Clear_guard::~_Clear_guard(&v25);
}
