/*
 * XREFs of ??1?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAA@XZ @ 0x180028380
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800285CC (--1CDuckingManager@@UEAA@XZ.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$3 @ 0x18004A4ED (_CDuckingManager--CDuckingManager_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180028004 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 */

void __fastcall CLockedList_UniqueValuesOnly<CDuckingNotification,0>::~CLockedList_UniqueValuesOnly<CDuckingNotification,0>(
        __int64 a1)
{
  CDuckingNotification *v2; // rcx

  v2 = *(CDuckingNotification **)(a1 + 40);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
      v2,
      *(CDuckingNotification **)(a1 + 48));
    std::_Deallocate<16,0>(
      *(void **)(a1 + 40),
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFFFFFFC0uLL));
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)a1);
}
