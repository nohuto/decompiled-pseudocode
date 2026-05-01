/*
 * XREFs of _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::__lambda_af26cd4e336a58c3fc15d2bb79fbb070_ @ 0x1801C4E54
 * Callers:
 *     _CApplicationManager::_GetLastActiveModernApp_::_1_::dtor$1 @ 0x1806CB810 (_CApplicationManager--_GetLastActiveModernApp_--_1_--dtor$1.c)
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x1806CDD99 (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::GetAllApplicationsByHostIDSafe_::_1_::dtor$3 @ 0x1806CE72D (_CApplicationManager--GetAllApplicationsByHostIDSafe_--_1_--dtor$3.c)
 *     _CApplicationManager::TerminateApplication_::_1_::dtor$4 @ 0x1806CED59 (_CApplicationManager--TerminateApplication_--_1_--dtor$4.c)
 *     _JointResize::OnArrangedWindowResizeStarted_::_1_::dtor$4 @ 0x1806F2368 (_JointResize--OnArrangedWindowResizeStarted_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_af26cd4e336a58c3fc15d2bb79fbb070_::__lambda_af26cd4e336a58c3fc15d2bb79fbb070_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
