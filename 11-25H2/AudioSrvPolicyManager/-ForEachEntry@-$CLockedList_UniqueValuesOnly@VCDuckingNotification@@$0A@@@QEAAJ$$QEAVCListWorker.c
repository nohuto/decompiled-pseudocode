/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002FE8C
 * Callers:
 *     _lambda_117ab22a4a29d5576a4fe046ebb851dc_::operator() @ 0x18002EEA4 (_lambda_117ab22a4a29d5576a4fe046ebb851dc_--operator().c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180030664 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x1800307EC (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180030910 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180027E64 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K@Z @ 0x18002E05C (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18002EB00 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, CDuckingNotification *))
{
  __int64 v4; // r8
  const char *v5; // r9
  CDuckingNotification *v6; // rcx
  unsigned __int128 v7; // kr10_16
  __int64 v8; // rsi
  void (__fastcall *v9)(_QWORD, CDuckingNotification *); // r14
  CDuckingNotification *v10; // rax
  __int64 result; // rax
  unsigned __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  _BYTE v14[56]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+80h] [rbp+8h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  try
  {
    v16 = (struct _RTL_CRITICAL_SECTION *)a1;
    if ( &v12 != (unsigned __int128 *)(a1 + 40) )
      std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *>(
        (__int64 *)&v12,
        *(_QWORD *)(a1 + 40),
        (__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 40)) >> 6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
    v6 = (CDuckingNotification *)v12;
    v7 = v12;
    v8 = *((_QWORD *)&v12 + 1);
    while ( (_QWORD)v7 != v8 )
    {
      v9 = **a2;
      v10 = CDuckingNotification::CDuckingNotification(
              (CDuckingNotification *)v14,
              (const struct CDuckingNotification *)v7,
              v4,
              (__int64)v5);
      v9(a2, v10);
      v6 = (CDuckingNotification *)v12;
      v7 = __PAIR128__(*((unsigned __int64 *)&v12 + 1), (__int64)v7 + 64);
    }
    if ( v6 )
    {
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        v6,
        *((CDuckingNotification **)&v7 + 1));
      std::_Deallocate<16,0>((void *)v12, (const struct std::nothrow_t *)((v13 - v12) & 0xFFFFFFFFFFFFFFC0uLL));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC7,
                     (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
                     v5);
    return (unsigned int)v16;
  }
  return result;
}
