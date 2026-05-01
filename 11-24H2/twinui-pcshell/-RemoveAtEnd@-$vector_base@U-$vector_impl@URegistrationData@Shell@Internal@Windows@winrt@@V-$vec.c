/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXXZ @ 0x18049F630
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18049F600 (-RemoveAtEnd@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18033D4FC (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$assign@AEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$removed_value@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAAXAEAUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x18049B884 (--$assign@AEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$removed_value@UMeetAndCha.c)
 *     ??1?$_Optional_destruct_base@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@$0A@@std@@QEAA@XZ @ 0x18049C260 (--1-$_Optional_destruct_base@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::RegistrationData>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rbx
  const struct winrt::impl::slim_source_location *v5; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[32]; // [rsp+48h] [rbp-20h] BYREF

  v6[8] = 0;
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  if ( *(_QWORD *)v2 == *(_QWORD *)(v2 + 8) )
  {
    v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v8);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v5);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 4);
  if ( !a1 )
    v3 = 56LL;
  winrt::impl::removed_value<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,void>::assign<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp &>(
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6,
    (__int64 *)(*(_QWORD *)v3 - 8LL));
  v4 = (__int64)(a1 + 4);
  if ( !a1 )
    v4 = 56LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(*(_QWORD *)v4 - 8LL));
  *(_QWORD *)v4 -= 8LL;
  std::_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>::~_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6);
}
