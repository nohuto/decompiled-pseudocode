/*
 * XREFs of ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801AA524
 * Callers:
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801A9A64 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@UKeyEv.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801A9F70 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rsi
  char *v8; // rbx

  v5 = (char *)a2;
  if ( a2 != a3 )
  {
    v6 = *(_QWORD **)(a2 + 8);
    v7 = 0LL;
    *v6 = a3;
    *(_QWORD *)(a3 + 8) = v6;
    do
    {
      v8 = *(char **)v5;
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x30);
      ++v7;
      v5 = v8;
    }
    while ( v8 != (char *)a3 );
    *(_QWORD *)(a1 + 8) -= v7;
  }
  return a3;
}
