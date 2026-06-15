/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_::instance___ @ 0x180169780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_::instance___()
{
  __int64 result; // rax

  if ( byte_1801D0A90 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_1801D0A78)(&qword_1801D0A78, 0LL);
    byte_1801D0A90 = 0;
  }
  return result;
}
