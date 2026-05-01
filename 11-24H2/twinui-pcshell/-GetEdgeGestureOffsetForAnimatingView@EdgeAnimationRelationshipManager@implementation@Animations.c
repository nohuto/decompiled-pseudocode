/*
 * XREFs of ?GetEdgeGestureOffsetForAnimatingView@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAA_KW4ShellView@4UI@WindowsUdk@7@@Z @ 0x18069B378
 * Callers:
 *     ?AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXUShellAnimationCoordinator@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@AEBUPoint@Foundation@67@@Z @ 0x18069B0D8 (-AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 * Callees:
 *     _lambda_2707938463de754926d7d6334e653630_::operator() @ 0x18069AFE4 (_lambda_2707938463de754926d7d6334e653630_--operator().c)
 *     ?EdgeGestureOffset@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18069B158 (-EdgeGestureOffset@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Sh.c)
 *     ?at@?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAAAEAUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBW4ShellView@4567@@Z @ 0x18069C33C (-at@-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::GetEdgeGestureOffsetForAnimatingView(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall ****v4)(_QWORD, void *, __int64 *); // rax
  __int64 v6; // [rsp+30h] [rbp+10h] BYREF
  int v7; // [rsp+38h] [rbp+18h] BYREF

  v7 = a2;
  v2 = 0LL;
  v6 = a1;
  if ( ((a2 - 2) & 0xFFFFFFFB) != 0 )
  {
    if ( a2 == 16 )
    {
      v7 = 2;
      if ( lambda_2707938463de754926d7d6334e653630_::operator()(&v6, (__int64)&v7) )
      {
        v7 = 2;
LABEL_10:
        v4 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
                                                                     a1 + 152,
                                                                     &v7);
        return winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::EdgeGestureOffset(v4);
      }
      v7 = 6;
      if ( lambda_2707938463de754926d7d6334e653630_::operator()(&v6, (__int64)&v7) )
      {
        v7 = 6;
        goto LABEL_10;
      }
    }
  }
  else if ( !lambda_2707938463de754926d7d6334e653630_::operator()(&v6, (__int64)&v7) )
  {
    v7 = 16;
    if ( !lambda_2707938463de754926d7d6334e653630_::operator()(&v6, (__int64)&v7) )
    {
      v7 = 16;
      goto LABEL_10;
    }
  }
  return v2;
}
