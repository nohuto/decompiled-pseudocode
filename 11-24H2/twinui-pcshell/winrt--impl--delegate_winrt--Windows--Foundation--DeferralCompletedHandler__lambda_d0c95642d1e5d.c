/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::Invoke @ 0x1803BCB40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1801936DC (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::Invoke(
        __int64 a1)
{
  Microsoft::WRL::WeakRef *v1; // rbx
  int v2; // eax
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+50h] [rbp+8h] BYREF
  struct IInspectable *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v1 = *(Microsoft::WRL::WeakRef **)(a1 + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  v2 = Microsoft::WRL::WeakRef::InternalResolve(v1, &GUID_d4211406_e345_4633_bd48_e4e2b0cec865, &v7);
  try
  {
    winrt::check_hresult(&v6, v2, (__int64)&v4);
    if ( v7 )
      ((void (__fastcall *)(struct IInspectable *))v7->lpVtbl[1].QueryInterface)(v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
