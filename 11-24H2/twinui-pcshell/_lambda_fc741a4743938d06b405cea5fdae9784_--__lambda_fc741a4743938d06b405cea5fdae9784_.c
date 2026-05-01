/*
 * XREFs of _lambda_fc741a4743938d06b405cea5fdae9784_::__lambda_fc741a4743938d06b405cea5fdae9784_ @ 0x1802F3370
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::_CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x1802F33AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___--_CTask.c)
 *     ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x1802F3B00 (-_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall lambda_fc741a4743938d06b405cea5fdae9784_::__lambda_fc741a4743938d06b405cea5fdae9784_(void **a1)
{
  int result; // eax
  void *v3; // rcx

  result = wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1 + 1);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
