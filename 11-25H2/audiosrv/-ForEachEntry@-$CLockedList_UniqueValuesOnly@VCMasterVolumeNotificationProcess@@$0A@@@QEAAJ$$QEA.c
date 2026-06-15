/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F178
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18001EC10 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@_K@Z @ 0x18001F7EC (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotifi.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180022D4C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, _QWORD))
{
  const char *v4; // r9
  void *v5; // rcx
  unsigned int *i; // rbx
  unsigned int *v7; // rdi
  unsigned __int128 v8; // kr10_16
  const struct std::nothrow_t *v9; // rdx
  __int64 result; // rax
  unsigned __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v14 = (unsigned __int64)lpCriticalSection;
    if ( &v11 != (unsigned __int128 *)&lpCriticalSection[1] )
      std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *>(
        &v11,
        lpCriticalSection[1].DebugInfo,
        (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 3);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v8 = v11;
    v7 = (unsigned int *)(v8 >> 64);
    v5 = (void *)v8;
    for ( i = (unsigned int *)v11; i != v7; i += 2 )
    {
      (**a2)(a2, *i);
      v5 = (void *)v11;
    }
    if ( v5 )
    {
      v9 = (const struct std::nothrow_t *)(8 * ((v12 - (__int64)v5) >> 3));
      v14 = (unsigned __int64)v9;
      v15 = v5;
      if ( (unsigned __int64)v9 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v15, &v14);
        v9 = (const struct std::nothrow_t *)v14;
        v5 = v15;
      }
      operator delete(v5, v9);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC7,
                           (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                           v4);
  }
  return result;
}
