/*
 * XREFs of ?erase@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@2@0@Z @ 0x180031B64
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002FB80 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180027E64 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002EDD8 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 *__fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v8; // r15
  CDuckingNotification *v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // eax
  __int64 *result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = (CDuckingNotification *)a3;
    if ( a4 != v8 )
    {
      v10 = a4 - a3;
      v11 = a3 - a4;
      do
      {
        CDuckingNotification::operator=((__int64)v9, v4, a3);
        v12 = v4 + v11;
        v9 = (CDuckingNotification *)((char *)v9 + 64);
        v13 = *(_DWORD *)(v4 + v11 + v10 + 56);
        v4 += 64LL;
        *(_DWORD *)(v12 + 56) = v13;
      }
      while ( v4 != v8 );
    }
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
      v9,
      *(CDuckingNotification **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
