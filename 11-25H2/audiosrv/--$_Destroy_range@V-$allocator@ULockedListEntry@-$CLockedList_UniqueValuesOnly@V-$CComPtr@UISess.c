/*
 * XREFs of ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x18000CE54
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000CC20 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@0@@Z @ 0x1800506E8 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionIn.c)
 *     ??$_Emplace_reallocate@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU23@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x180050744 (--$_Emplace_reallocate@AEAV-$CComPtr@UISessionInternalEvents@@@ATL@@H@-$vector@ULockedListEntry@.c)
 *     _std::vector_CLockedList_UniqueValuesOnly_ATL::CComPtr_ISessionInternalEvents__0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_ATL::CComPtr_ISessionInternalEvents__0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_ISessionInternalEvents__&_int__::_1_::catch$0 @ 0x180161A36 (_std--vector_CLockedList_UniqueValuesOnly_ATL--CComPtr_ISessionInternalEvents__0_--LockedListEnt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
