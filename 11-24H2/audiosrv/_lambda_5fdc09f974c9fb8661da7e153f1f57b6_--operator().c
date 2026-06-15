/*
 * XREFs of _lambda_5fdc09f974c9fb8661da7e153f1f57b6_::operator() @ 0x1800C0BA0
 * Callers:
 *     std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___ @ 0x1800737E4 (std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std-.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_5fdc09f974c9fb8661da7e153f1f57b6_::operator()(__int64 a1, __int64 a2)
{
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 56LL) + 32LL))(*(_QWORD *)(*(_QWORD *)a2 + 56LL)) != **(_QWORD **)a1 )
    return 0;
  if ( **(_QWORD **)(a1 + 8) )
    ***(_QWORD ***)(a1 + 8) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 56LL) + 16LL))(*(_QWORD *)(*(_QWORD *)a2 + 56LL));
  return 1;
}
