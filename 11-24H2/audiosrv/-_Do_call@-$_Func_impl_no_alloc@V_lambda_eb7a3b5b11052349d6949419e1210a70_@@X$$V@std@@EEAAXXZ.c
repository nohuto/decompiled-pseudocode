/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_eb7a3b5b11052349d6949419e1210a70_@@X$$V@std@@EEAAXXZ @ 0x1800D8D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D26E0 (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800D5A6C (-OnBidirectionalModeChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothCon.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D975C (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_eb7a3b5b11052349d6949419e1210a70_,void,>::_Do_call(__int64 a1)
{
  volatile signed __int32 *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::operation_guard::acquire(*(_QWORD *)(a1 + 16), &v2);
  if ( v2 )
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::OnBidirectionalModeChanged(*(_QWORD *)(a1 + 8));
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(&v2);
}
