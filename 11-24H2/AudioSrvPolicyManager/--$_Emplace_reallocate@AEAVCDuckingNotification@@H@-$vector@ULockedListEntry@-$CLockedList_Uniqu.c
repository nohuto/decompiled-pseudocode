/*
 * XREFs of ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002B974
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18002D024 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x180028004 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotifica.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@AEA_K@Z @ 0x18002B650 (--$_Allocate_at_least_helper@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuck.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@@Z @ 0x18002BDAC (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@U12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@$$QEAU34@@Z @ 0x18002BE54 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@U12@@-.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18002BE88 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCD.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x18002E8C8 (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotificatio.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Emplace_reallocate<CDuckingNotification &,int>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r14
  CDuckingNotification *v18; // rdi
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  char *v21; // [rsp+28h] [rbp-60h]
  void *v22; // [rsp+30h] [rbp-58h]
  _QWORD *v23; // [rsp+38h] [rbp-50h]
  CDuckingNotification *v24; // [rsp+40h] [rbp-48h]
  _QWORD *v25; // [rsp+48h] [rbp-40h]
  CDuckingNotification *v26; // [rsp+90h] [rbp+8h]
  CDuckingNotification *v27; // [rsp+98h] [rbp+10h]

  v7 = a2 - *a1;
  v8 = (__int64)(a1[1] - *a1) >> 6;
  if ( v8 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::_Calculate_growth(
          a1,
          v9);
  v20 = v10;
  v13 = std::_Allocate_at_least_helper<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
          v11,
          &v20);
  v22 = v13;
  v14 = (char *)v13 + (v7 & 0xFFFFFFFFFFFFFFC0uLL);
  v21 = v14;
  v27 = (CDuckingNotification *)(v14 + 64);
  try
  {
    std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,CDuckingNotification &,int>(
      v12,
      v14,
      a3,
      a4);
    v26 = (CDuckingNotification *)v14;
    v16 = a1[1];
    v17 = *a1;
    if ( a2 == v16 )
    {
      v23 = v13;
      v18 = (CDuckingNotification *)v13;
      v24 = (CDuckingNotification *)v13;
      v25 = a1;
      while ( v17 != v16 )
      {
        std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>(
          v15,
          v18,
          v17);
        v18 = (CDuckingNotification *)((char *)v18 + 64);
        v24 = v18;
        v17 += 64LL;
      }
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        v18,
        v18);
    }
    else
    {
      std::_Uninitialized_move<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        *a1,
        a2,
        v13,
        a1);
      v26 = (CDuckingNotification *)v13;
      std::_Uninitialized_move<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
        a2,
        a1[1],
        v27,
        a1);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(v26, v27);
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(v20 << 6));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>(
      (CDuckingNotification *)*a1,
      (CDuckingNotification *)a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL));
  }
  *a1 = v13;
  a1[1] = &v13[8 * v9];
  a1[2] = &v13[8 * v10];
  return v21;
}
