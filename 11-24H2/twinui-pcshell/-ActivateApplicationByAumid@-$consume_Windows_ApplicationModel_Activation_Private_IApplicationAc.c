/*
 * XREFs of ?ActivateApplicationByAumid@?$consume_Windows_ApplicationModel_Activation_Private_IApplicationActivationStatics@UIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@AEBUhstring@param@3@1AEBUIApplicationActivationProperties@Private@Activation@ApplicationModel@63@@Z @ 0x18032DB18
 * Callers:
 *     ??R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x18032D62C (--R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Act.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Activation_Private_IApplicationActivationStatics<winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>::ActivateApplicationByAumid(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5,
        _QWORD *a6)
{
  __int64 v6; // rcx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int64 *); // rax
  int v11; // eax
  int v13; // [rsp+48h] [rbp-20h] BYREF
  __int128 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  v6 = *a1;
  v15 = 0LL;
  v13 = 0;
  v9 = *a5;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 88LL);
  v14 = 0LL;
  v11 = v10(v6, *a3, *a4, v9, *a6, &v15);
  winrt::check_hresult((int *)&v16, v11, (__int64)&v13);
  *a2 = v15;
  return a2;
}
