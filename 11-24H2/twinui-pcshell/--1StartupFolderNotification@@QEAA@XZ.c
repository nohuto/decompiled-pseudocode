/*
 * XREFs of ??1StartupFolderNotification@@QEAA@XZ @ 0x180583BFC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ @ 0x1805848D0 (-_Destroy@-$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall StartupFolderNotification::~StartupFolderNotification(void **this)
{
  std::wstring::_Tidy_deallocate(this + 8);
  StartupNotification::~StartupNotification((StartupNotification *)this);
}
