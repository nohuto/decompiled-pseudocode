/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___lambda_3f668fd8da20f4c22fbcac233ea61c9e___::Invoke @ 0x18028A800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReevaluateAll@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802EC9BE (-ReevaluateAll@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwi.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___lambda_3f668fd8da20f4c22fbcac233ea61c9e___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  winrt::Windows::Foundation::IUnknown *v4; // rbx
  int v5; // eax
  _BYTE v7[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-30h]
  winrt::Windows::Foundation::IUnknown *v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = a1 + 8;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)&v13,
    &v12);
  v8 = &v13;
  v4 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
         (winrt::Windows::Foundation::IUnknown *)v7,
         &v11);
  v9 = v4;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v10);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v10 == 2 )
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::ReevaluateAll(v3);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
  return 0LL;
}
