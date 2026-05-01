/*
 * XREFs of _anonymous_namespace_::TryGetTextFromProperty @ 0x1800564F0
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryLookupStringProperty @ 0x1805D99F4 (_anonymous_namespace_--TryLookupStringProperty.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180056638 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetString@?$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180056730 (-GetString@-$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall anonymous_namespace_::TryGetTextFromProperty(
        winrt::hstring *this,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v13[4]; // [rsp+40h] [rbp-20h] BYREF
  const unsigned __int16 *v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v17 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v17);
    v4 = v17;
    v5 = v17;
  }
  else
  {
    v4 = 0LL;
    v5 = 0LL;
  }
  v16 = v4;
  if ( !v5 )
  {
LABEL_11:
    winrt::hstring::hstring(this, &pvData);
    goto LABEL_15;
  }
  v13[0] = 1;
  v13[1] = 5;
  v14 = L"#text";
  v12 = v13;
  v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                             &v16,
                                                             &v11,
                                                             &v12);
  if ( v6 )
  {
    v10 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::Foundation::IPropertyValue>, &v10);
    v7 = v10;
    v8 = v10;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  v15 = v7;
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  if ( !v8
    || (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v15) != 12 )
  {
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
    goto LABEL_11;
  }
  winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IPropertyValue>::GetString(
    &v15,
    this);
  if ( v15 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
LABEL_15:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
  return this;
}
