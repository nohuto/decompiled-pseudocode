/*
 * XREFs of _wil::GetProcessHandleForClientOfObject_::_1_::dtor$0 @ 0x1806D60C7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802D0E08 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 */

BOOL __fastcall wil::GetProcessHandleForClientOfObject_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  BOOL result; // eax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(void ***)(a2 + 64));
  }
  return result;
}
