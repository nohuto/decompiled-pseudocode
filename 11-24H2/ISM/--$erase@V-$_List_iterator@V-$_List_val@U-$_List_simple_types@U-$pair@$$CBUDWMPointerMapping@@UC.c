/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801C6EB4
 * Callers:
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801C7FB4 (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RUDWMPointerMapping@@@?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@QEBA_KAEBUDWMPointerMapping@@@Z @ 0x180048C3C (--$-RUDWMPointerMapping@@@-$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U-$equal_to@UDWM.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *result; // rax

  v6 = std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>::operator()<DWMPointerMapping>(
         (__int64)a1,
         (__int64)(a3 + 2));
  v7 = a1[3];
  v8 = 2 * (a1[6] & v6);
  if ( *(__int64 **)(v7 + 16 * (a1[6] & v6) + 8) == a3 )
  {
    if ( *(__int64 **)(v7 + 16 * (a1[6] & v6)) == a3 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 8 * v8) = v9;
    }
    else
    {
      v9 = a3[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (a1[6] & v6)) == a3 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v6)) = *a3;
  }
  v10 = *a3;
  --a1[2];
  *(_QWORD *)a3[1] = v10;
  *(_QWORD *)(v10 + 8) = a3[1];
  std::_Deallocate<16,0>((char *)a3, (const struct std::nothrow_t *)0x20);
  result = a2;
  *a2 = v10;
  return result;
}
