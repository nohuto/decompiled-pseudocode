/*
 * XREFs of ??1?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAA@XZ @ 0x18002873C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800283D0 (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@AEAAXXZ @ 0x180051E3C (-_Tidy@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEven.c)
 */

void __fastcall CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::~CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>(
        struct _RTL_CRITICAL_SECTION *a1)
{
  std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Tidy(&a1[1]);
  DeleteCriticalSection(a1);
}
