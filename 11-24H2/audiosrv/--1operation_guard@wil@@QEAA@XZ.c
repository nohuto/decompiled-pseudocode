/*
 * XREFs of ??1operation_guard@wil@@QEAA@XZ @ 0x1800D27EC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@Voperation_guard@wil@@@std@@EEAAXXZ @ 0x1800D8C50 (-_Destroy@-$_Ref_count_obj2@Voperation_guard@wil@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180053478 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800592FC (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D26E0 (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D975C (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1800D97A4 (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 */

void __fastcall wil::operation_guard::~operation_guard(wil::operation_guard *this)
{
  volatile signed __int32 *v2; // rbx
  PVOID v3; // rcx
  PVOID Address; // [rsp+40h] [rbp+18h] BYREF
  char v5; // [rsp+48h] [rbp+20h] BYREF

  wil::operation_guard::acquire(this, &Address);
  v2 = (volatile signed __int32 *)Address;
  if ( Address )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    if ( _InterlockedExchangeAdd(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      v3 = Address;
      *(_DWORD *)Address = 1;
      WakeByAddressAll(v3);
    }
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
    Address = 0LL;
    wil::operation_guard::close_and_wait(this);
  }
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ((volatile signed __int32 **)&Address);
}
