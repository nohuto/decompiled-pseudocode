/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_9d145c474c1ca3988ea2d0119a9f5c39_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18063B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180241B40 (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::Windows::Foundation::IInspectable>,_lambda_9d145c474c1ca3988ea2d0119a9f5c39_>::Invoke(
        __int64 a1)
{
  __int64 *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 104LL);
  try
  {
    v3 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType(v2);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 96LL);
    if ( v3 )
    {
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    }
    else if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
