/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805EC734
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E8230 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8DE0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_resume(
        __int64 a1,
        winrt *a2)
{
  enum AsyncStatus v4; // edx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void **); // rbx
  struct IUnknown *v8; // rdx
  void **v9; // rax
  int v10; // eax
  int v12; // [rsp+24h] [rbp-34h] BYREF
  int v13; // [rsp+28h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  winrt *v15; // [rsp+40h] [rbp-18h]

  v15 = a2;
  v13 = 0;
  v14 = 0LL;
  winrt::check_hresult(&v12, *(_DWORD *)(a1 + 20), (__int64)&v13);
  winrt::impl::check_status_canceled((winrt::impl *)*(unsigned int *)(a1 + 16), v4);
  v5 = *(__int64 **)(a1 + 8);
  *(_QWORD *)a2 = 0LL;
  v6 = *v5;
  v13 = 0;
  v14 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 64LL);
  v9 = winrt::put_abi(a2, v8);
  v10 = v7(v6, v9);
  winrt::check_hresult(&v12, v10, (__int64)&v13);
  return a2;
}
