/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180056638
 * Callers:
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x1800564F0 (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 *     _anonymous_namespace_::TryLookupStringProperty @ 0x1805D99F4 (_anonymous_namespace_--TryLookupStringProperty.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1806446D4 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@AEBUslim_source_location@12@@Z @ 0x18033FC74 (-check_hresult_allow_bounds@impl@winrt@@YA-AUhresult@2@U32@AEBUslim_source_location@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        winrt *a2,
        _QWORD *a3)
{
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 (__fastcall *v7)(__int64, _QWORD, void **); // rdi
  void **v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+28h] [rbp-18h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  char v13; // [rsp+70h] [rbp+30h] BYREF
  winrt *v14; // [rsp+78h] [rbp+38h]
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v14 = a2;
  v5 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v6 = *a1;
  if ( v6 )
  {
    v15 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::impl::IStaticLifetimeCollection>, &v15);
    v5 = v15;
  }
  v16 = v5;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v5 + 48LL);
  v8 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v9 = v7(v5, *a3, v8);
  winrt::impl::check_hresult_allow_bounds(&v13, v9, &v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  return a2;
}
