/*
 * XREFs of ?AddInterface@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180050970
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x1800508E0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAU23@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x180050744 (--$_Emplace_reallocate@AEAV-$CComPtr@UISessionInternalEvents@@@ATL@@H@-$vector@ULockedListEntry@.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@AEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$$QEAH@Z @ 0x180050A34 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolumeCal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  __int64 v4; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v5; // rdx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+48h] [rbp+10h]
  LPCRITICAL_SECTION v12; // [rsp+50h] [rbp+18h]

  v11 = a2;
  EnterCriticalSection(lpCriticalSection);
  v12 = lpCriticalSection;
  v5 = *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo == v5 )
    goto LABEL_6;
  v4 = *a2;
  do
  {
    if ( *(_QWORD *)&DebugInfo->Type == v4 )
      break;
    DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 16);
  }
  while ( DebugInfo != v5 );
  if ( DebugInfo == v5 )
  {
LABEL_6:
    v10 = 1;
    if ( v5 == lpCriticalSection[1].OwningThread )
    {
      try
      {
        std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Emplace_reallocate<ATL::CComPtr<ISessionInternalEvents> &,int>(
          (__int64 *)&lpCriticalSection[1],
          (__int64)v5,
          (__int64)a2,
          (__int64)&v10);
      }
      catch ( ... )
      {
        v10 = wil::details::in1diag3::Return_CaughtException(
                retaddr,
                (void *)0x85,
                (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                v8);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
        return v10;
      }
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry,ATL::CComPtr<IAudioEndpointVolumeCallback> &,int>(
        v4,
        v5,
        a2,
        &v10);
      *(_QWORD *)&lpCriticalSection[1].LockCount += 16LL;
    }
  }
  else
  {
    ++LODWORD(DebugInfo->CriticalSection);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return 0LL;
}
