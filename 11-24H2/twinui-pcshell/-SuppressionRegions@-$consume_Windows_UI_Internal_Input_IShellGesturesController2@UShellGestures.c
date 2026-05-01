/*
 * XREFs of ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IShellGesturesController2@UShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x18059271C
 * Callers:
 *     ?SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180592338 (-SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV-$vector@URect@Foundation@Windows@winrt@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x18022E6C4 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController2<winrt::Windows::UI::Internal::Input::ShellGesturesController>::SuppressionRegions(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64); // r9
  int v8; // eax
  _BYTE v9[24]; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+48h] [rbp-18h]
  int v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v13 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Internal::Input::IShellGesturesController2>, &v13);
    v5 = v13;
    v14 = v13;
  }
  else
  {
    v4 = 0;
    v14 = 0LL;
    v5 = 0LL;
  }
  *(_DWORD *)v9 = 0;
  *(_OWORD *)&v9[8] = 0LL;
  winrt::check_hresult(&v12, v4, (__int64)v9);
  v10 = 0;
  v11 = 0LL;
  *(_OWORD *)v9 = *(_OWORD *)a2;
  v6 = winrt::get_abi<unsigned int const>(v9);
  v8 = v7(v5, *(unsigned int *)(a2 + 8), v6);
  winrt::check_hresult(&v12, v8, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
}
