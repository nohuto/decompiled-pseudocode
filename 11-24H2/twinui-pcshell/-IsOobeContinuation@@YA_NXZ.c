/*
 * XREFs of ?IsOobeContinuation@@YA_NXZ @ 0x1803C97EC
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803CC8B4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60253563@@@details@wil@@QEAA_NXZ @ 0x1803CCDC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60253563@@@details@wil@@QEAA_NXZ.c)
 */

bool IsOobeContinuation(void)
{
  unsigned int v0; // r9d
  bool result; // al
  int v2; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60253563>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60253563>::GetImpl'::`2'::impl)
        && (v2 = 0,
            (int)SHRegGetBOOLWithREGSAM(
                   HKEY_CURRENT_USER,
                   L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
                   L"LaunchNextApp",
                   v0,
                   &v2) >= 0)
        && v2 != 0;
  return result;
}
