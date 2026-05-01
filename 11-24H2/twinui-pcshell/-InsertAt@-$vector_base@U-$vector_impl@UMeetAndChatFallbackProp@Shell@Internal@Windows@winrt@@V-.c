/*
 * XREFs of ?InsertAt@?$vector_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@@winrt@@QEAAXIAEBUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x18049EDDC
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x18049EDA0 (-InsertAt@-$produce@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18033D4FC (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$emplace@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@1@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Z @ 0x18049B9FC (--$emplace@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@-.c)
 */

__int64 **__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::InsertAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  const struct winrt::impl::slim_source_location *v7; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64)(a1 + 2);
  v4 = 48LL;
  if ( !a1 )
    v3 = 48LL;
  if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v7);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  if ( a1 )
  {
    v5 = (__int64)(a1 + 2);
    v4 = (__int64)(a1 + 2);
  }
  else
  {
    v5 = 48LL;
  }
  return std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::emplace<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner const &>(
           v5,
           &v10,
           (__int64 *)(*(_QWORD *)v4 + 8LL * a2),
           a3);
}
