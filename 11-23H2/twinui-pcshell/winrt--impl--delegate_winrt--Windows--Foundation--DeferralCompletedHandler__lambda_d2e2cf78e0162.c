/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d2e2cf78e01620d7c4ea8812dfd8399a___::Invoke @ 0x1801690B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800DECB0 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d2e2cf78e01620d7c4ea8812dfd8399a___::Invoke(
        __int64 a1)
{
  Microsoft::WRL::WeakRef *v1; // rbx
  int v2; // eax
  __int64 result; // rax
  struct IInspectable *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = *(Microsoft::WRL::WeakRef **)(a1 + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v4);
  v2 = Microsoft::WRL::WeakRef::InternalResolve(v1, &GUID_d4211406_e345_4633_bd48_e4e2b0cec865, &v4);
  try
  {
    if ( v2 < 0 )
      winrt::throw_hresult((unsigned int)v2);
    if ( v4 )
      ((void (*)(void))v4->lpVtbl[1].QueryInterface)();
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
