/*
 * XREFs of ??R_lambda_c13b110588b4e2f99da684d72199d508_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x18032D66C
 * Callers:
 *     ??$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@Z @ 0x18032A864 (--$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@-$factory_cache_entry@UApplicationActiva.c)
 *     ?ActivateApplicationForContractByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUUser@System@56@AEBUhstring@param@6@1AEBUIInspectable@Foundation@56@AEBUIApplicationActivationProperties@23456@@Z @ 0x18032DC2C (-ActivateApplicationForContractByAumid@ApplicationActivation@Private@Activation@ApplicationModel.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_c13b110588b4e2f99da684d72199d508_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v3; // r10
  __int64 *v4; // r11
  __int64 *v6; // rdx
  __int64 *v7; // r9
  __int64 *v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // eax
  __int64 v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+48h] [rbp-20h] BYREF
  __int128 v20; // [rsp+50h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+10h] BYREF

  v22 = a2;
  v3 = a1[4];
  v4 = a1[3];
  v6 = *a1;
  v7 = a1[2];
  v8 = a1[1];
  v9 = *a3;
  v10 = *v3;
  v11 = *v7;
  v12 = *v6;
  v13 = *v8;
  v21 = 0LL;
  v19 = 0;
  v14 = *v9;
  v18 = v10;
  v15 = *v4;
  v20 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64 *))(v14 + 96))(
          v9,
          v12,
          v13,
          v11,
          v15,
          v18,
          &v21);
  winrt::check_hresult((int *)&v22, v16, (__int64)&v19);
  *a2 = v21;
  return a2;
}
