/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@2@@Z @ 0x18049F73C
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18049F6F0 (-ReplaceAll@-$produce@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Compositi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Assign_counted_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@_K@Z @ 0x18049B438 (--$_Assign_counted_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v4; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( &v8 != (__int128 *)v3 )
  {
    v4 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)v3;
    *(_QWORD *)&v8 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
    v5 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v3 + 8);
    *((_QWORD *)&v8 + 1) = v5;
    *(_QWORD *)(v3 + 8) = 0LL;
    v6 = *(_QWORD *)(v3 + 16);
    v9 = v6;
    *(_QWORD *)(v3 + 16) = 0LL;
  }
  v7 = (__int64)(a1 + 2);
  if ( !a1 )
    v7 = 48LL;
  std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Assign_counted_range<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *>(
    v7,
    *(__int64 **)a2,
    *(unsigned int *)(a2 + 8));
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v4, v5);
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
