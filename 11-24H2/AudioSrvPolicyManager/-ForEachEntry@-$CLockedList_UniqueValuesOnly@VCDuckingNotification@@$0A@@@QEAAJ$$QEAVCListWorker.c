/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002D4AC
 * Callers:
 *     _lambda_117ab22a4a29d5576a4fe046ebb851dc_::operator() @ 0x18002C4C8 (_lambda_117ab22a4a29d5576a4fe046ebb851dc_--operator().c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002DC84 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18002DE0C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002DF30 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180028004 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@_K@Z @ 0x18002B680 (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18002C124 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, CDuckingNotification *))
{
  const char *v4; // r9
  CDuckingNotification *v5; // rcx
  unsigned __int128 v6; // kr10_16
  __int64 v7; // rsi
  void (__fastcall *v8)(_QWORD, CDuckingNotification *); // r14
  CDuckingNotification *v9; // rax
  __int64 result; // rax
  unsigned __int128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  _BYTE v13[56]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+80h] [rbp+8h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  try
  {
    v15 = (struct _RTL_CRITICAL_SECTION *)a1;
    if ( &v11 != (unsigned __int128 *)(a1 + 40) )
      std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *>(
        (__int64 *)&v11,
        *(_QWORD *)(a1 + 40),
        (__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 40)) >> 6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
    v5 = (CDuckingNotification *)v11;
    v6 = v11;
    v7 = *((_QWORD *)&v11 + 1);
    while ( (_QWORD)v6 != v7 )
    {
      v8 = **a2;
      v9 = CDuckingNotification::CDuckingNotification(
             (CDuckingNotification *)v13,
             (const struct CDuckingNotification *)v6);
      v8(a2, v9);
      v5 = (CDuckingNotification *)v11;
      v6 = __PAIR128__(*((unsigned __int64 *)&v11 + 1), (__int64)v6 + 64);
    }
    if ( v5 )
    {
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        v5,
        *((CDuckingNotification **)&v6 + 1));
      std::_Deallocate<16,0>((void *)v11, (const struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFC0uLL));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC7,
                     (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
                     v4);
    return (unsigned int)v15;
  }
  return result;
}
