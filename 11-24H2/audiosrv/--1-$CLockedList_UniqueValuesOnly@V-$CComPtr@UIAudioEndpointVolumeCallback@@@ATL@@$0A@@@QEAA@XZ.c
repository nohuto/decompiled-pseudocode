/*
 * XREFs of ??1?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAA@XZ @ 0x180047A98
 * Callers:
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x18004799C (--1CVolumeStrip@@MEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@@std@@@std@@AEAAXXZ @ 0x180047BE8 (-_Tidy@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolume.c)
 */

void __fastcall CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::~CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>(
        struct _RTL_CRITICAL_SECTION *a1)
{
  std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::LockedListEntry>>::_Tidy(&a1[1]);
  DeleteCriticalSection(a1);
}
