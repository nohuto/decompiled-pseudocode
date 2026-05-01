/*
 * XREFs of _anonymous_namespace_::TryLookupStringProperty @ 0x1805D99F4
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D8E08 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x1800564F0 (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180056638 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall anonymous_namespace_::TryLookupStringProperty(
        winrt::hstring *this,
        _QWORD *a2,
        void (__fastcall ****a3)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v4)(_QWORD, void *, _QWORD); // rcx
  _QWORD v6[5]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // [rsp+68h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v7 = (void (__fastcall ***)(_QWORD, void *, __int64 *))this;
  v6[0] = *a2;
  v4 = *(void (__fastcall ****)(_QWORD, void *, _QWORD))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                          a3,
                                                          (winrt *)&v9,
                                                          v6);
  if ( v4 )
  {
    v8 = 0LL;
    (**v4)(v4, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v8);
    v7 = v8;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  anonymous_namespace_::TryGetTextFromProperty(this, &v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  return this;
}
