/*
 * XREFs of _lambda_2707938463de754926d7d6334e653630_::operator() @ 0x18069AFE4
 * Callers:
 *     ?GetEdgeGestureOffsetForAnimatingView@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAA_KW4ShellView@4UI@WindowsUdk@7@@Z @ 0x18069B378 (-GetEdgeGestureOffsetForAnimatingView@EdgeAnimationRelationshipManager@implementation@Animations.c)
 * Callees:
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180241B40 (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     ?at@?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAAAEAUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBW4ShellView@4567@@Z @ 0x18069C33C (-at@-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4.c)
 */

bool __fastcall lambda_2707938463de754926d7d6334e653630_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rax

  v2 = (__int64 *)std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
                    *a1 + 152LL,
                    a2);
  return (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType(v2) == 0;
}
