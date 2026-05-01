/*
 * XREFs of wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_03899bd9ba5a14c04410ab955a36d1b6__void_ @ 0x18060F268
 * Callers:
 *     ?RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806152A8 (-RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_03899bd9ba5a14c04410ab955a36d1b6__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rax

  a1[14] = 0LL;
  a1[1] = &off_180759068;
  a1[2] = *a2;
  v3 = a2[1];
  a2[1] = 0LL;
  a1[3] = v3;
  a1[14] = a1 + 1;
  if ( a2[1] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2 + 1);
  return a1;
}
