/*
 * XREFs of ?AddInterface@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180067A88
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x1800738D0 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@AEAVCMasterVolumeNotificationProcess@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x180067B24 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@.c)
 *     ??$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAU23@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18010E23C (--$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  __int64 v4; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v5; // rdx
  PRTL_CRITICAL_SECTION_DEBUG i; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h] BYREF
  LPCRITICAL_SECTION v12; // [rsp+40h] [rbp+18h]

  v11 = a2;
  EnterCriticalSection(lpCriticalSection);
  v12 = lpCriticalSection;
  v5 = *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount;
  for ( i = lpCriticalSection[1].DebugInfo; i != v5; i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 8) )
  {
    if ( *(_DWORD *)&i->Type == a2 )
    {
      ++*(_DWORD *)(&i->CreatorBackTraceIndex + 1);
      goto LABEL_7;
    }
  }
  v10 = 1;
  if ( v5 == lpCriticalSection[1].OwningThread )
  {
    try
    {
      std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::_Emplace_reallocate<CMasterVolumeNotificationProcess &,int>();
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x85,
                             (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                             v8);
    }
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,CMasterVolumeNotificationProcess &,int>(
      v4,
      v5,
      &v11,
      &v10);
    *(_QWORD *)&lpCriticalSection[1].LockCount += 8LL;
  }
LABEL_7:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
