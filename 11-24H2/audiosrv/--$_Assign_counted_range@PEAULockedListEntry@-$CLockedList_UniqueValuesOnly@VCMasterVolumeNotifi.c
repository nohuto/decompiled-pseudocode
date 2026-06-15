/*
 * XREFs of ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@_K@Z @ 0x180054140
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180054038 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char *__fastcall std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *>(
        __int64 a1,
        void **a2,
        unsigned __int64 a3)
{
  char *v3; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  char *result; // rax
  char **v11; // rdx
  __int64 v12; // rbp
  char *v13; // rcx
  unsigned __int64 v14; // rbp
  char **v15; // rcx
  void **v16; // rsi
  unsigned __int64 i; // rdi
  __int64 v18; // rbx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(char **)a1;
  v5 = a3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( a3 <= v7 )
  {
    v12 = *(_QWORD *)(a1 + 8) - (_QWORD)v3;
    v13 = *(char **)a1;
    v14 = v12 >> 3;
    if ( a3 <= v14 )
    {
      v18 = 8 * a3;
      memmove_0(v13, a2, 8 * a3);
      result = &v3[v18];
      *(_QWORD *)(a1 + 8) = &v3[v18];
    }
    else
    {
      result = (char *)memmove_0(v13, a2, 8 * v14);
      v15 = *(char ***)(a1 + 8);
      v16 = &a2[v14];
      for ( i = v5 - v14; i; --i )
      {
        result = (char *)*v16++;
        *v15++ = result;
      }
      *(_QWORD *)(a1 + 8) = v15;
    }
  }
  else
  {
    v8 = 0x1FFFFFFFFFFFFFFFLL;
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v9 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v8 = v9 + v7;
      if ( v9 + v7 < a3 )
        v8 = a3;
    }
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(8 * v7));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    v19 = v8;
    result = (char *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                       v9,
                       &v19);
    *(_QWORD *)a1 = result;
    v11 = (char **)result;
    *(_QWORD *)(a1 + 8) = result;
    for ( *(_QWORD *)(a1 + 16) = &result[8 * v8]; v5; --v5 )
    {
      result = (char *)*a2++;
      *v11++ = result;
    }
    *(_QWORD *)(a1 + 8) = v11;
  }
  return result;
}
