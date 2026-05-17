/*
 * XREFs of RtlpFtInitialize @ 0x180145F1C
 * Callers:
 *     RtlpFtInitOnceCallback @ 0x180145F00 (RtlpFtInitOnceCallback.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180097B20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlQueryFeatureConfiguration @ 0x1800D6290 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 RtlpFtInitialize()
{
  unsigned int v0; // ebx
  int v1; // eax
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v0 = 0;
  v6 = 0;
  v4 = 0LL;
  if ( (int)RtlQueryFeatureConfiguration(50550682LL, 0, &v4, (__int64)&v5) < 0 || (v1 = 1, (BYTE4(v5) & 0x30) != 0x20) )
    v1 = 0;
  _ft_g_isTestReadyMedia = v1;
  v2 = RtlRegisterFeatureConfigurationChangeNotification(
         (__int64)RtlpFtFeatureConfigChangeCallback,
         0LL,
         0LL,
         &_ft_g_feature_store_change_registration_handle);
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v0;
}
