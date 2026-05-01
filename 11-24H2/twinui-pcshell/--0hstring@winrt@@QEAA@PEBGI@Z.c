/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800546F0
 * Callers:
 *     _dynamic_initializer_for__c_remoteSystemSwitchAPPURI__ @ 0x180055D50 (_dynamic_initializer_for__c_remoteSystemSwitchAPPURI__.c)
 *     _dynamic_initializer_for__c_bootSystemId__ @ 0x1800562E0 (_dynamic_initializer_for__c_bootSystemId__.c)
 *     ?ParseArgs@UndockedSearchAppExperienceManager@@AEAA?AUWwwFormUrlDecoder@Foundation@Windows@winrt@@AEBUhstring@5@@Z @ 0x180148D4C (-ParseArgs@UndockedSearchAppExperienceManager@@AEAA-AUWwwFormUrlDecoder@Foundation@Windows@winrt.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801A5BC0 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x180218A38 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     _dynamic_initializer_for__c_remoteSystemSettingsUri__ @ 0x1802210C0 (_dynamic_initializer_for__c_remoteSystemSettingsUri__.c)
 *     _dynamic_initializer_for__c_remoteSystemProviderUriScheme__ @ 0x180221100 (_dynamic_initializer_for__c_remoteSystemProviderUriScheme__.c)
 *     _dynamic_initializer_for__c_remoteSystemAvailabilityRegPath__ @ 0x180221140 (_dynamic_initializer_for__c_remoteSystemAvailabilityRegPath__.c)
 *     _dynamic_initializer_for__c_hostServiceSystemId__ @ 0x180221180 (_dynamic_initializer_for__c_hostServiceSystemId__.c)
 *     ??$hstring_convert@I@impl@winrt@@YA?AUhstring@1@I@Z @ 0x180294228 (--$hstring_convert@I@impl@winrt@@YA-AUhstring@1@I@Z.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x18005487C (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_3 @ 0x1802DFCA8 (memcpy_s_3.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2, unsigned int a3)
{
  struct winrt::impl::shared_hstring_header *v3; // rdi
  winrt::hstring *result; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v3 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)a3, (unsigned int)a2);
    memcpy_s_3((char *)v3 + 28, 2LL * a3, a2, 2LL * a3);
  }
  result = this;
  *(_QWORD *)this = v3;
  return result;
}
