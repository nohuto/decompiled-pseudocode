/*
 * XREFs of RtlpFtInitialize @ 0x1801474CC
 * Callers:
 *     RtlpFtInitOnceCallback @ 0x1801474B0 (RtlpFtInitOnceCallback.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180003190 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlQueryFeatureConfiguration @ 0x18009F560 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 RtlpFtInitialize()
{
  unsigned int v0; // ebx
  int v1; // eax
  NTSTATUS v2; // eax
  ULONGLONG v4; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION v5; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)&v5.FeatureId = 0LL;
  v0 = 0;
  v5.VariantPayload = 0;
  v4 = 0LL;
  if ( RtlQueryFeatureConfiguration(0x303579Au, RtlFeatureConfigurationBoot, &v4, &v5) < 0
    || (v1 = 1, (v5.Flags & 0x30) != 0x20) )
  {
    v1 = 0;
  }
  _ft_g_isTestReadyMedia = v1;
  v2 = RtlRegisterFeatureConfigurationChangeNotification(
         (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)RtlpFtFeatureConfigChangeCallback,
         0LL,
         0LL,
         &_ft_g_feature_store_change_registration_handle);
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v0;
}
