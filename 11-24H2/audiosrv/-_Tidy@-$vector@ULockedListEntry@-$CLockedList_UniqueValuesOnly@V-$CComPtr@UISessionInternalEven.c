/*
 * XREFs of ?_Tidy@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@AEAAXXZ @ 0x180051E3C
 * Callers:
 *     ??1?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAA@XZ @ 0x18002873C (--1-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAA@XZ.c)
 *     ??1?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@QEAA@XZ @ 0x18006C394 (--1-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Tidy(
        __int64 a1)
{
  char *v2; // rbx
  char *v3; // rsi
  char *v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  char *v6; // r8
  char *v7; // rcx

  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v2 != v3 )
    {
      if ( *(_QWORD *)v2 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 16LL))(*(_QWORD *)v2);
      v2 += 16;
    }
    v4 = *(char **)a1;
    v5 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v6 = (char *)*((_QWORD *)v4 - 1);
      v7 = (char *)(v4 - v6);
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v5);
        __debugbreak();
        JUMPOUT(0x180051EDCLL);
      }
      v4 = v6;
    }
    operator delete(v4, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
