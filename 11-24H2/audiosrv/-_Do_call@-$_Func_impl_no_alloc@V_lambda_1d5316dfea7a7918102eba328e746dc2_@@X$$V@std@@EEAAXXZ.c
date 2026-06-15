/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEAAXXZ @ 0x1800D8C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D26E0 (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration@@@details@wil@@QEAA_NXZ @ 0x1800D96E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferO.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D975C (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc<_lambda_1d5316dfea7a7918102eba328e746dc2_,void,>::_Do_call(__int64 a1)
{
  char IsEnabled; // al
  __int64 v3; // r8
  __int64 v4; // rcx
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::operation_guard::acquire(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), &v5);
  if ( v5 )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::GetImpl'::`2'::impl);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(v3 + 128);
    if ( v4 )
    {
      if ( !IsEnabled )
      {
LABEL_6:
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 24LL))(v4, 0LL, v3 + 84);
        goto LABEL_7;
      }
      if ( *(_BYTE *)(v3 + 168) )
      {
        v3 = *(_QWORD *)(a1 + 8);
        v4 = *(_QWORD *)(v3 + 128);
        goto LABEL_6;
      }
    }
  }
LABEL_7:
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(&v5);
}
