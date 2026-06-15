/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D0714
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D0708 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1800D0748 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800D2250 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ @ 0x1800D22A0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800D2310 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     <none>
 */

void __fastcall __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      *v1 = 1;
      WakeByAddressAll((PVOID)v1);
    }
  }
}
