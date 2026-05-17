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
