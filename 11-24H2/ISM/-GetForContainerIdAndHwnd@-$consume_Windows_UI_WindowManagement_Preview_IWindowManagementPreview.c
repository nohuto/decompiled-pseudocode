/*
 * XREFs of ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_K@Z @ 0x1800FCC0C
 * Callers:
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800FD1D8 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800A7AD8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::GetForContainerIdAndHwnd(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4)
{
  __int64 *v4; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+70h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v10 = 0;
  v11 = 0LL;
  v6 = *v4;
  v9 = *a3;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD *))(v6 + 48))(v4, &v9, a4, a2);
  winrt::check_hresult(&v12, v7, (__int64)&v10);
  return a2;
}
