/*
 * XREFs of ?AddInterface@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180018A60
 * Callers:
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800189A0 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU23@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800C5558 (--$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAVCAudioSessionNotificationProcess@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800C5894 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotifica_ea_1800C5894.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *v5; // r15
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  __int64 v7; // r13
  int v8; // r12d
  PRTL_CRITICAL_SECTION_DEBUG v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+10h]
  LPCRITICAL_SECTION v15; // [rsp+70h] [rbp+18h]

  v14 = a2;
  EnterCriticalSection(lpCriticalSection);
  v15 = lpCriticalSection;
  v5 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  try
  {
    while ( DebugInfo != v5 )
    {
      v7 = *(_QWORD *)&DebugInfo->Type;
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7) == v8 )
        break;
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 16);
    }
    v9 = *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount;
    if ( DebugInfo == v9 )
    {
      v13 = 1;
      if ( v9 == lpCriticalSection[1].OwningThread )
      {
        std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::_Emplace_reallocate<CAudioSessionNotificationProcess &,int>(
          &lpCriticalSection[1],
          v9,
          a2,
          &v13);
      }
      else
      {
        std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,CAudioSessionNotificationProcess &,int>(
          v4,
          v9,
          a2,
          &v13);
        *(_QWORD *)&lpCriticalSection[1].LockCount += 16LL;
      }
    }
    else
    {
      ++LODWORD(DebugInfo->CriticalSection);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    v13 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x85,
            (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
            v10);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
    return v13;
  }
  return result;
}
