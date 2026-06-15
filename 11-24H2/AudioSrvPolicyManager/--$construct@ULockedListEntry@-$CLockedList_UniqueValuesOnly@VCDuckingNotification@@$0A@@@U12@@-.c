/*
 * XREFs of ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@U12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@$$QEAU34@@Z @ 0x18002BE54
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002B974 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_Uniqu.c)
 *     ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18002BD3C (--$_Uninitialized_copy_n@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18002BDAC (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@.c)
 * Callees:
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18002C124 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>(
        __int64 a1,
        CDuckingNotification *a2,
        unsigned int *a3)
{
  __int64 result; // rax

  CDuckingNotification::CDuckingNotification(a2, (const struct CDuckingNotification *)a3);
  result = a3[14];
  *((_DWORD *)a2 + 14) = result;
  return result;
}
