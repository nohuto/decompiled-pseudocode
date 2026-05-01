/*
 * XREFs of ?GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1802BED00
 * Callers:
 *     ?HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NAEBUhstring@7@@Z @ 0x18033AF14 (-HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Inte.c)
 *     _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x1805EAFA8 (_anonymous_namespace_--TryGetPackagedAppDisplayName.c)
 * Callees:
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x18010ECF0 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ??$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@Z @ 0x180314AC8 (--$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 */

const struct winrt::param::hstring *__fastcall winrt::Windows::ApplicationModel::AppInfo::GetFromAppUserModelId(
        const struct winrt::param::hstring *a1,
        __int64 *a2)
{
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808CA048;
  _InterlockedIncrement64(&qword_1808CA048);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics> )
  {
    winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>,
      a1,
      a2);
    _InterlockedDecrement64(&qword_1808CA048);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA048);
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_93cf3dd1a637ea07f09c92a2c241488e_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
