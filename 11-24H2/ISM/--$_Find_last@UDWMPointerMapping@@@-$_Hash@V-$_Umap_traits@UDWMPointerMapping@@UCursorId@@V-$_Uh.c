/*
 * XREFs of ??$_Find_last@UDWMPointerMapping@@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@std@@@1@AEBUDWMPointerMapping@@_K@Z @ 0x180048BB0
 * Callers:
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180048A28 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 * Callees:
 *     ??8@YA_NAEBUDWMPointerMapping@@0@Z @ 0x180048C20 (--8@YA_NAEBUDWMPointerMapping@@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Find_last<DWMPointerMapping>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD *v11; // r8
  _QWORD *v12; // r9

  v4 = a3;
  v5 = a1[3];
  v6 = 2 * (a4 & a1[6]);
  v7 = a2;
  v8 = a1[1];
  v9 = *(_QWORD *)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v9 == v8 )
  {
    *v7 = v8;
LABEL_3:
    v7[1] = 0LL;
  }
  else
  {
    v11 = *(_QWORD **)(v5 + 8 * v6);
    while ( !(unsigned __int8)operator==(v4, v9 + 16, v11) )
    {
      if ( v12 == v11 )
      {
        *v7 = v12;
        goto LABEL_3;
      }
      v9 = v12[1];
    }
    *v7 = *v12;
    v7[1] = v12;
  }
  return v7;
}
