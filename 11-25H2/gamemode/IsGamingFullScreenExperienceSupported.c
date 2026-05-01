/*
 * XREFs of IsGamingFullScreenExperienceSupported @ 0x18000DC10
 * Callers:
 *     CanSetGamingFullScreenExperience @ 0x18000D920 (CanSetGamingFullScreenExperience.c)
 *     IsGamingFullScreenExperienceActive @ 0x18000DAB0 (IsGamingFullScreenExperienceActive.c)
 *     RegisterGamingFullScreenExperienceChangeNotification @ 0x18000DCB0 (RegisterGamingFullScreenExperienceChangeNotification.c)
 *     SetGamingFullScreenExperience @ 0x18000DE60 (SetGamingFullScreenExperience.c)
 *     UnregisterGamingFullScreenExperienceChangeNotification @ 0x18000E080 (UnregisterGamingFullScreenExperienceChangeNotification.c)
 * Callees:
 *     ?HasHandheldScreenSize@@YA_NXZ @ 0x18000A63C (-HasHandheldScreenSize@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x18000D404 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x18000D444 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

_BOOL8 IsGamingFullScreenExperienceSupported()
{
  BOOL v0; // ebx
  __int64 v1; // r8
  const char *v2; // r9
  _BOOL8 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v0 = 0;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    {
      v5 = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, 0LL, &v5);
      if ( v5 == 46 )
        v0 = HasHandheldScreenSize() != 0;
      result = v0;
    }
    else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
    {
      v5 = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, 0LL, &v5);
      LOBYTE(v0) = v5 == 46;
      result = v0;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x92, v1, v2);
    return 0LL;
  }
  return result;
}
