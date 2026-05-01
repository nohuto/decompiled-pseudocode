/*
 * XREFs of wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::destroy @ 0x180201760
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::destroy(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 16);
  if ( *v1 )
    return winrt::com_ptr<XamlLauncher>::unconditional_release_ref(v1);
  return result;
}
