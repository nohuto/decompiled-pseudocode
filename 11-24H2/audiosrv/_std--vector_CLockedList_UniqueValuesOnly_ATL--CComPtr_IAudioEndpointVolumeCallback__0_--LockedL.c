/*
 * XREFs of _std::vector_CLockedList_UniqueValuesOnly_ATL::CComPtr_IAudioEndpointVolumeCallback__0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_ATL::CComPtr_IAudioEndpointVolumeCallback__0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_IAudioEndpointVolumeCallback__&_int__::_1_::catch$0 @ 0x18016DD40
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x180047FBC (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNot.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CLockedList_UniqueValuesOnly_ATL::CComPtr_IAudioEndpointVolumeCallback__0_::LockedListEntry_std::allocator_CLockedList_UniqueValuesOnly_ATL::CComPtr_IAudioEndpointVolumeCallback__0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_IAudioEndpointVolumeCallback____int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 32));
  std::_Deallocate<16,0>(*(char **)(a2 + 40), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 120)));
  throw;
}
