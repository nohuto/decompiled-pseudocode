/*
 * XREFs of ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18002E718
 * Callers:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K@Z @ 0x18002E05C (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180027E64 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@U12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@$$QEAU34@@Z @ 0x18002E830 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@U12@@-.c)
 */

// Hidden C++ exception states: #wind=1
CDuckingNotification *__fastcall std::_Uninitialized_copy_n<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        __int64 a1,
        __int64 a2,
        CDuckingNotification *a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi

  v4 = a2;
  for ( i = a1; v4; --v4 )
  {
    std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>(
      a1,
      a3,
      i);
    a3 = (CDuckingNotification *)((char *)a3 + 64);
    i += 64LL;
  }
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(a3, a3);
  return a3;
}
