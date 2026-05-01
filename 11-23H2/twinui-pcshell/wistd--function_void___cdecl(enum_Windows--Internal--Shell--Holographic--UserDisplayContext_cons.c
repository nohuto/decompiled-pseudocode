/*
 * XREFs of wistd::function_void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::function_void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)___lambda_0e377e64aae41d271781dea56205f73a__void_ @ 0x1801FB300
 * Callers:
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x1800F3BE0 (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::function_void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const______lambda_0e377e64aae41d271781dea56205f73a__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rax

  a1[14] = 0LL;
  a1[1] = &off_1807C62C8;
  a1[2] = *a2;
  v3 = a2[1];
  a2[1] = 0LL;
  a1[3] = v3;
  a1[14] = a1 + 1;
  if ( a2[1] )
    winrt::com_ptr<XamlLauncher>::unconditional_release_ref(a2 + 1);
  return a1;
}
