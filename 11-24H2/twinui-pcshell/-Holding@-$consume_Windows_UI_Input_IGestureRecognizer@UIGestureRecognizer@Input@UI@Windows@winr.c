/*
 * XREFs of ?Holding@?$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UGestureRecognizer@Input@UI@Windows@winrt@@UHoldingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805911AC
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Input_IGestureRecognizer<winrt::Windows::UI::Input::IGestureRecognizer>::Holding(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v4; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v11 = 0;
  v7 = *a3;
  v8 = *v4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v8 + 400))(v4, v7, a2);
  winrt::check_hresult(&v13, v9, (__int64)&v11);
  return a2;
}
