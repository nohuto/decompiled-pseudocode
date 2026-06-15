/*
 * XREFs of ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@U12@@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@$$QEAU34@@Z @ 0x1800C58E4
 * Callers:
 *     ??$_Emplace_back@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@?$_Uninitialized_backout_al@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@QEAAX$$QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@Z @ 0x1800C5534 (--$_Emplace_back@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a2 = v3;
  result = *((unsigned int *)a3 + 2);
  *(_DWORD *)(a2 + 8) = result;
  return result;
}
