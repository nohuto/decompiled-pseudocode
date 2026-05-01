/*
 * XREFs of ?TagWindowForSnapAnimation@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x1806BE154
 * Callers:
 *     ?SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1802B2384 (-SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::TagWindowForSnapAnimation(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, __int128 *, __int64 *); // rax
  int v7; // eax
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-28h] BYREF
  __int128 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *a1;
  v12 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(*(_QWORD *)v4 + 72LL);
  v9 = *a4;
  v7 = v6(v4, a3, &v9, &v12);
  winrt::check_hresult((int *)&v13, v7, (__int64)&v10);
  *a2 = v12;
  return a2;
}
