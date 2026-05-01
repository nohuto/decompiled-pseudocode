/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationCompletedEventArgs___lambda_b6ea5fa9d7f8330af75e8a61a2f4c6ef___::Invoke @ 0x180591240
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1805902EC (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationCompletedEventArgs___lambda_b6ea5fa9d7f8330af75e8a61a2f4c6ef___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  TouchGestureProcessor *v3; // rbx
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+2Ch] [rbp-2Ch]
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(TouchGestureProcessor **)(a1 + 16);
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v6);
  try
  {
    winrt::check_hresult(&v11, v4, (__int64)&v9);
    TouchGestureProcessor::FinishSwipe(v3, (const struct winrt::Windows::Foundation::Point *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v11);
  }
  return result;
}
