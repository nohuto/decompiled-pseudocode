/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_341c9eb6bde2f5519c2c695a2218853a___::Invoke @ 0x1804534F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?ShowRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801E437C (-ShowRequested@CVirtualTouchpadExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRe.c)
 *     ??$As@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804518FC (--$As@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microso.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_341c9eb6bde2f5519c2c695a2218853a___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager>(
              (Microsoft::WRL::WeakRef *)(a1 + 16),
              &v9) >= 0
    && v9 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v7[0] = a3;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v7);
    CVirtualTouchpadExperienceManager::ShowRequested(v5, (__int64)&v8, (winrt::Windows::Foundation::IUnknown *)v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
