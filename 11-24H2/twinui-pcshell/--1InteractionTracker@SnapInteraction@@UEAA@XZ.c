/*
 * XREFs of ??1InteractionTracker@SnapInteraction@@UEAA@XZ @ 0x18059D110
 * Callers:
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18059CE04 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??_EInteractionTracker@SnapInteraction@@UEAAPEAXI@Z @ 0x18059D974 (--_EInteractionTracker@SnapInteraction@@UEAAPEAXI@Z.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$25 @ 0x1806F6760 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$25.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18059CC00 (--1-$_Tree@V-$_Tmap_traits@U-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VInteractionRecor.c)
 */

void __fastcall SnapInteraction::InteractionTracker::~InteractionTracker(SnapInteraction::InteractionTracker *this)
{
  std::_Ref_count_base *v2; // rcx

  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((SnapInteraction::InteractionTracker *)((char *)this + 112));
  std::_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>::~_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>((void **)this + 11);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  if ( *((_QWORD *)this + 5) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 5);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)this + 24);
}
