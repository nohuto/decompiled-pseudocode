/*
 * XREFs of ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x180056F08
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x180061E24 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x1802986D8 (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEAFC (_anonymous_namespace_--CreateTemporaryFile.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18061250C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180056F50 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall std::filesystem::operator/(void *Src, __int64 a2, std::filesystem::path *a3)
{
  std::wstring::wstring(Src, a2);
  std::filesystem::path::operator/=(Src, a3);
  return Src;
}
