/*
 * XREFs of ??$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAU23@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18010E23C
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180067A88 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJVCMas.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@AEAVCMasterVolumeNotificationProcess@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x180067B24 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@.c)
 *     ?_Calculate_growth@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x180079804 (-_Calculate_growth@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A5E74 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 */

char *__fastcall std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::_Emplace_reallocate<CMasterVolumeNotificationProcess &,int>(
        char **a1,
        char *a2,
        unsigned int *a3,
        int *a4)
{
  char *v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rcx
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rsi
  char *v15; // r14
  char *v16; // r8
  char *v17; // rcx
  signed __int64 v18; // rdx
  signed __int64 v19; // rdx
  char *v20; // rdx
  signed __int64 v21; // rcx
  char *result; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  char *v24; // [rsp+58h] [rbp+10h]

  v6 = a2;
  v8 = (a2 - *a1) >> 3;
  v9 = (a1[1] - *a1) >> 3;
  if ( v9 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v10 = v9 + 1;
  v23 = std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Calculate_growth(a1, v9 + 1);
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                  v11,
                  (unsigned __int64 *)&v23);
  v14 = v12;
  v24 = v12;
  try
  {
    v15 = &v12[8 * v8];
    std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,CMasterVolumeNotificationProcess &,int>(
      v13,
      v15,
      a3,
      a4);
    v16 = a1[1];
    v17 = *a1;
    if ( v6 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = v14 - v17;
        do
        {
          *(_QWORD *)&v17[v18] = *(_QWORD *)v17;
          v17 += 8;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v6 )
      {
        v19 = v14 - v17;
        do
        {
          *(_QWORD *)&v17[v19] = *(_QWORD *)v17;
          v17 += 8;
        }
        while ( v17 != v6 );
      }
      v20 = a1[1];
      if ( v6 != v20 )
      {
        v21 = v15 + 8 - v6;
        do
        {
          *(_QWORD *)&v6[v21] = *(_QWORD *)v6;
          v6 += 8;
        }
        while ( v6 != v20 );
      }
    }
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *a1 = v14;
    a1[1] = &v14[8 * v10];
    a1[2] = &v14[8 * v23];
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(8 * v23));
    throw;
  }
  return result;
}
