/*
 * XREFs of ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18002D024
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002CEC0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18002867C (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002B974 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_Uniqu.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002BE88 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCD.c)
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x18002C478 (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<CDuckingNotification,0>::AddInterface(
        __int64 a1,
        CDuckingNotification *a2)
{
  CDuckingNotification *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+28h] [rbp-20h] BYREF
  CDuckingNotification *v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v10 = (struct _RTL_CRITICAL_SECTION *)a1;
  v4 = *(CDuckingNotification **)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 40);
  try
  {
    while ( (CDuckingNotification *)v5 != v4 )
    {
      if ( operator==(v5, (__int64)a2) )
      {
        ++*(_DWORD *)(v6 + 56);
        goto LABEL_9;
      }
      v5 = v6 + 64;
    }
    v9 = 1;
    if ( v4 == *(CDuckingNotification **)(a1 + 56) )
    {
      std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
        (_QWORD *)(a1 + 40),
        (__int64)v4,
        (__int64)a2,
        (__int64)&v9);
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,CDuckingNotification &,int>(
        v5,
        v4,
        a2,
        (int *)&v9);
      *(_QWORD *)(a1 + 48) += 64LL;
    }
LABEL_9:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
    CDuckingNotification::~CDuckingNotification(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    v9 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x85,
           (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
           v7);
    CDuckingNotification::~CDuckingNotification(v11);
    return v9;
  }
  return result;
}
