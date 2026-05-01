/*
 * XREFs of ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x1800BAF24
 * Callers:
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1800BE900 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180585C48 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061250C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x1800BB98C (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 */

__int64 __fastcall std::filesystem::path::path(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2[2];
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  v7[0] = a2;
  v7[1] = v5;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(a1, v7, a3, a4);
  return a1;
}
