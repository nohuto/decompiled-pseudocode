/*
 * XREFs of ??$?RUDWMPointerMapping@@@?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@QEBA_KAEBUDWMPointerMapping@@@Z @ 0x18004C1AC
 * Callers:
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x18004BF98 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180052CC0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPoi.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801BF7A4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUDWMPointerMapping@@UC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>::operator()<DWMPointerMapping>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r9
  __int64 v4; // r8
  unsigned __int64 i; // r10
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = 0xCBF29CE484222325uLL;
  v3 = 0LL;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *(unsigned __int8 *)(i + a2);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  do
  {
    v7 = *(unsigned __int8 *)(a2 + v3++ + 4);
    v2 = 0x100000001B3LL * (v7 ^ v2);
  }
  while ( v3 < 4 );
  return v4 ^ v2;
}
