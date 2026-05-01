/*
 * XREFs of _lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x1807605C0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___::Invoke @ 0x180760C60 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180760C60.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18012944C (-unconditional_release_ref@-$com_ptr@UEdgeAnimationRelationshipManager@implementation@Animations.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AnimateView@?$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@_KAEBUGestureAnimationData@Input@673@AEBUPoint@Foundation@Windows@3@@Z @ 0x1807609B4 (-AnimateView@-$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnima.c)
 *     ?EdgeGestureOffset@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180760AB4 (-EdgeGestureOffset@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Sh.c)
 *     ?at@?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAAAEAUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBW4ShellView@4567@@Z @ 0x1807614AC (-at@-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4.c)
 *     ?get@?$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180761500 (-get@-$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const___winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const___(
        __int64 *a1,
        __int64 a2,
        volatile __int64 *a3)
{
  __int64 v4; // rcx
  volatile __int64 *v5; // rbx
  volatile __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r14d
  int v10; // eax
  volatile __int64 *v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF
  volatile __int64 *v13; // [rsp+70h] [rbp+40h] BYREF

  v13 = a3;
  v12 = a2;
  v4 = *a1;
  if ( v4 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *, volatile __int64 **))(*(_QWORD *)v4 + 24LL))(
      v4,
      winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>,
      &v13);
    v5 = v13;
    if ( v13 )
      v5 = v13 - 2;
    v6 = v5;
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
  }
  v11 = v5;
  if ( v6 )
  {
    winrt::weak_ref<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::get(a1[1] + 176, &v12);
    if ( v12 )
    {
      v7 = a1[1] + 88;
      LODWORD(v13) = 16;
      v8 = std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
             v7,
             &v13);
      v9 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::EdgeGestureOffset(v8);
      v10 = std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
              a1[1] + 88,
              a1 + 4);
      winrt::impl::consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::AnimateView(
        (unsigned int)&v12,
        (_DWORD)a1 + 32,
        v10,
        v9,
        (__int64)(a1 + 2),
        (__int64)a1 + 36);
    }
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>::unconditional_release_ref(&v11);
}
