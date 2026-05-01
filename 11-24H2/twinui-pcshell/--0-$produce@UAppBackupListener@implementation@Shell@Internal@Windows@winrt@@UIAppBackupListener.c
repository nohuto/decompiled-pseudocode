/*
 * XREFs of ??0?$produce@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupListener@3456@@impl@winrt@@QEAA@XZ @ 0x180610EF4
 * Callers:
 *     ??0?$producer@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupListener@3456@X@impl@winrt@@QEAA@XZ @ 0x180610F30 (--0-$producer@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupListene.c)
 * Callees:
 *     ??0?$produce_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupListener@3456@X@impl@winrt@@QEAA@XZ @ 0x180610F18 (--0-$produce_base@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@UIAppBackupLis.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::IAppBackupListener>::produce<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::IAppBackupListener>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::IAppBackupListener,void>::produce_base<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::IAppBackupListener,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::IAppBackupListener>::`vftable';
  return result;
}
