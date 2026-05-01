/*
 * XREFs of ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C
 * Callers:
 *     _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x1801C5198 (_lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke @ 0x1801D1350 (winrt--impl--delegate_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoundaryH.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke @ 0x180214420 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_ee45b684567.c)
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180272010 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180272C50 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShellViewGestureReportedArgs___lambda_81777c60ccc5db889236df1644364211___::Invoke @ 0x18058CFF0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18058CFF0.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180594CA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595230 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x1805959F0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa13.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B1950 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_95fe7ae5c51dffe541392b6a2acce5a3___::Invoke @ 0x1805B3330 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805B3330.c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_3e333fce58f1b64b3b5408f1e7ea980e_@@@impl@winrt@@UEAAHPEAX@Z @ 0x1805B33B0 (-Invoke@-$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lamb.c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_e7e6bc5189a9e0c7fe0bbbff3c3afb53_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x1805B34A0 (-Invoke@-$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_89d43c20f0f7bb0e860cd8602b20fbb7___::Invoke @ 0x1805B35A0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_89d43c20f0f.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x1805B3D60 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<SnapFlyoutHost>::get(__int64 *a1, struct IUnknown *a2)
{
  __int64 v2; // r14
  struct IUnknownVtbl *v3; // rdi
  void (__fastcall *v5)(__int64, __int64 *, void **); // rbx
  void **v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( *a1 )
  {
    v8 = 0LL;
    v5 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v6 = winrt::put_abi((winrt *)&v8, a2);
    v5(v2, &winrt::impl::guid_v<IInspectable>, v6);
    if ( v8 )
      v3 = (struct IUnknownVtbl *)(v8 - 16);
    a2->lpVtbl = v3;
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
