/*
 * XREFs of ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801F485C
 * Callers:
 *     ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801F4820 (--_E-$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?clear@?$com_array@UIrisCreative@Iris@Services@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x1801F48F0 (-clear@-$com_array@UIrisCreative@Iris@Services@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1802C0E80 (--$_Destroy_range@V-$allocator@U-$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal.c)
 *     ??1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C9728 (--1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CE9C0 (--1-$com_ptr_t@V-$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@ti.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::~MeetAndChatIris(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *this)
{
  __int64 v2; // rcx

  wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>,wil::err_returncode_policy>((char *)this + 136);
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp>>>(
      v2,
      *((_QWORD *)this + 15));
    std::_Deallocate<16,0>(
      *((void **)this + 14),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 16) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  winrt::Windows::Internal::Shell::MeetAndChatFallbackContent::~MeetAndChatFallbackContent((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 80));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 56));
  winrt::com_array<winrt::WindowsUdk::Services::Iris::IrisCreative>::clear((char *)this + 40);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *)((char *)this + 32));
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)this + 8);
}
