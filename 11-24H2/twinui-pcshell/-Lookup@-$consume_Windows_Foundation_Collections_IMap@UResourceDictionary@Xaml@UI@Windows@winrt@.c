/*
 * XREFs of ?Lookup@?$consume_Windows_Foundation_Collections_IMap@UResourceDictionary@Xaml@UI@Windows@winrt@@UIInspectable@Foundation@45@U6745@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@@Z @ 0x180599A2C
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180598574 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::UI::Xaml::ResourceDictionary,winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::IInspectable>::Lookup(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        winrt *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, void **); // rbx
  struct IUnknown *v9; // rdx
  void **v10; // rax
  int v11; // eax
  int v13; // [rsp+28h] [rbp-18h] BYREF
  __int128 v14; // [rsp+30h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+30h] BYREF
  winrt *v16; // [rsp+78h] [rbp+38h]
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  v16 = a2;
  *(_QWORD *)a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v17 = 0LL;
    v6 = (**v5)(
           v5,
           &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::IInspectable>>,
           &v17);
    v7 = v17;
    v18 = v17;
  }
  else
  {
    v6 = 0;
    v18 = 0LL;
    v7 = 0LL;
  }
  v13 = 0;
  v14 = 0LL;
  winrt::check_hresult(&v15, v6, (__int64)&v13);
  v13 = 0;
  v14 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v7 + 48LL);
  v10 = winrt::put_abi(a2, v9);
  v11 = v8(v7, *a3, v10);
  winrt::check_hresult(&v15, v11, (__int64)&v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  return a2;
}
