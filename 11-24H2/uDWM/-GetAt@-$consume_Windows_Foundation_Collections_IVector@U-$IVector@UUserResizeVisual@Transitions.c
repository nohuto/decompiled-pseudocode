/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800E514C
 * Callers:
 *     ??D?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@2@XZ @ 0x1800E4F44 (--D-$fast_iterator@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@.c)
 * Callees:
 *     ??0CDisplayBroker@@QEAA@XZ @ 0x180095604 (--0CDisplayBroker@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18009A75C (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CDisplayBroker *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::GetAt(
        __int64 a1,
        CDisplayBroker *a2,
        unsigned int a3)
{
  __int64 *v5; // r9
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, void **); // rbx
  struct IUnknown *v8; // rdx
  winrt *v9; // rcx
  void **v10; // rax
  int v11; // eax
  int v13; // [rsp+28h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+60h] [rbp+8h] BYREF
  CDisplayBroker *v16; // [rsp+68h] [rbp+10h]

  v16 = a2;
  CDisplayBroker::CDisplayBroker(a2);
  v6 = *v5;
  v13 = 0;
  v14 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v6 + 48LL);
  v10 = winrt::put_abi(v9, v8);
  v11 = v7(v6, a3, v10);
  winrt::check_hresult(&v15, v11, (__int64)&v13);
  return a2;
}
