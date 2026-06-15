/*
 * XREFs of ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002BE88
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002B974 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_Uniqu.c)
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18002D024 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18002867C (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18002C124 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,CDuckingNotification &,int>(
        __int64 a1,
        CDuckingNotification *a2,
        const struct CDuckingNotification *a3,
        int *a4)
{
  int v5; // edi
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  const struct CDuckingNotification *v7; // [rsp+70h] [rbp+8h]

  v5 = *a4;
  v7 = CDuckingNotification::CDuckingNotification((CDuckingNotification *)&v6, a3);
  CDuckingNotification::CDuckingNotification(a2, v7);
  *((_DWORD *)a2 + 14) = v5;
  CDuckingNotification::~CDuckingNotification(v7);
}
