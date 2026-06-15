/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::SvcHostModule_::isInitialized__ @ 0x180007FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x1800A1AB0 (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 */

__int64 dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::SvcHostModule_::isInitialized__()
{
  __int64 result; // rax

  result = Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create();
  Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::isInitialized = 1;
  return result;
}
