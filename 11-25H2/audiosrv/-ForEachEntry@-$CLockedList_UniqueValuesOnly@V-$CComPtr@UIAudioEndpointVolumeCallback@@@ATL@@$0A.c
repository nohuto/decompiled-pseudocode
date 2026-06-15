/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F280
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18001EC10 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@AEAAXXZ @ 0x18001F41C (-_Tidy@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolume.c)
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@_K@Z @ 0x18001F654 (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEn.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800537D0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, LPCRITICAL_SECTION *))
{
  _QWORD *i; // rdi
  const char *v5; // r9
  __int64 result; // rax
  void (__fastcall *v7)(_QWORD, LPCRITICAL_SECTION *); // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPCRITICAL_SECTION v11; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v11 = lpCriticalSection;
    if ( &v8 != (__int128 *)&lpCriticalSection[1] )
      std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry *>(
        &v8,
        lpCriticalSection[1].DebugInfo,
        (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    for ( i = (_QWORD *)v8; i != *((_QWORD **)&v8 + 1); i += 2 )
    {
      v7 = **a2;
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v11, *i);
      v7(a2, &v11);
    }
    std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>::_Tidy(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC7,
                           (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                           v5);
  }
  return result;
}
