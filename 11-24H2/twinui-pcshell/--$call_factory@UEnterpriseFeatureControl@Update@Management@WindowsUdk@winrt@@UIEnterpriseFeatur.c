/*
 * XREFs of ??$call_factory@UEnterpriseFeatureControl@Update@Management@WindowsUdk@winrt@@UIEnterpriseFeatureControlStatics@2345@V_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d87b56c9fee8963e2cb1aea67b29a52d_@@@Z @ 0x18058F2AC
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591634 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics,_lambda_d87b56c9fee8963e2cb1aea67b29a52d_>(
        unsigned int **a1)
{
  __int64 v1; // rdx
  int v2; // eax
  int v4; // [rsp+28h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]
  char v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_1808CC3B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics> )
  {
    v1 = **a1;
    v6 = 0;
    v4 = 0;
    v5 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics>
                                                             + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics>,
           v1,
           &v6);
    winrt::check_hresult(&v7, v2, (__int64)&v4);
    _InterlockedDecrement64(&qword_1808CC3B8);
    return v6;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC3B8);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Update::EnterpriseFeatureControl,winrt::WindowsUdk::Management::Update::IEnterpriseFeatureControlStatics>::call<_lambda_d87b56c9fee8963e2cb1aea67b29a52d_ &>(
             0LL,
             a1);
  }
}
