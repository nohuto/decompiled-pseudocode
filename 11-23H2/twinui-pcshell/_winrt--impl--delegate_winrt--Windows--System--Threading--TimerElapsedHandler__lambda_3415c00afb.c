/*
 * XREFs of _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___::Invoke_::_1_::catch$0 @ 0x18066186A
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___::Invoke_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
