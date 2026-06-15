/*
 * XREFs of ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@_K@Z @ 0x18002B6BC
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002B558 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x18002B660 (--$_Uninitialized_copy_n@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotifi.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAU12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAU34@@Z @ 0x18002B870 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180059010 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x18007CFA8 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNot.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@AEA_K@Z @ 0x1800A22C8 (--$_Allocate_at_least_helper@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@.c)
 */

__int64 __fastcall std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *>(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rbp
  char *i; // rbp
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(char **)a1;
  v5 = a3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  if ( a3 <= v7 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = (v13 - (__int64)v3) >> 4;
    if ( v5 > v14 )
    {
      while ( v3 != (char *)v13 )
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v3, *a2);
        *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
        v3 += 16;
        v13 = *(_QWORD *)(a1 + 8);
        a2 += 2;
      }
      result = std::_Uninitialized_copy_n<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
                 (__int64)a2,
                 v5 - v14,
                 v13);
      *(_QWORD *)(a1 + 8) = result;
    }
    else
    {
      for ( i = &v3[16 * v5]; v5; --v5 )
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v3, *a2);
        v16 = *((_DWORD *)a2 + 2);
        a2 += 2;
        *((_DWORD *)v3 + 2) = v16;
        v3 += 16;
      }
      result = std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
                 i,
                 *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = i;
    }
  }
  else
  {
    v8 = 0xFFFFFFFFFFFFFFFLL;
    if ( a3 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v9 = v7 >> 1;
    if ( v7 <= 0xFFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v8 = v9 + v7;
      if ( v9 + v7 < a3 )
        v8 = a3;
    }
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
        v3,
        *(_QWORD *)(a1 + 8));
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    v17 = v8;
    v11 = std::_Allocate_at_least_helper<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(v7, &v17);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v11;
    for ( *(_QWORD *)(a1 + 16) = v11 + 16 * v8; v5; --v5 )
    {
      std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry &>(
        v10,
        v11,
        a2);
      v11 += 16LL;
      a2 += 2;
    }
    result = std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
               v11,
               v11);
    *(_QWORD *)(a1 + 8) = v11;
  }
  return result;
}
