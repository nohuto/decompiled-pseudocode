/*
 * XREFs of ?IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA?AW4LinkedPhonesPolicyState@12@XZ @ 0x180034380
 * Callers:
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18003F300 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 * Callees:
 *     ?IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z @ 0x18003449C (-IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56845155@@@details@wil@@QEAA_NXZ @ 0x18003DF68 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56845155@@@details@wil@@QEAA_NXZ.c)
 */

__int64 Mobility::Policy::IsPhoneLinkingBlockedByPolicy()
{
  BOOL IsPreventedByMdmOrPolicy; // edi
  BOOL v1; // ebx
  int v2; // esi
  unsigned __int16 *v4; // [rsp+20h] [rbp-18h]
  unsigned __int16 *v5; // [rsp+20h] [rbp-18h]
  unsigned __int16 *v6; // [rsp+20h] [rbp-18h]
  unsigned __int16 *v7; // [rsp+20h] [rbp-18h]
  unsigned int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+28h] [rbp-10h]
  unsigned int v11; // [rsp+28h] [rbp-10h]

  LODWORD(v4) = 1;
  IsPreventedByMdmOrPolicy = Mobility::Policy::IsPreventedByMdmOrPolicy(
                               (Mobility::Policy *)L"Experience",
                               L"AllowWindowsConsumerFeatures",
                               L"Software\\Policies\\Microsoft\\Windows\\CloudContent",
                               L"DisableWindowsConsumerFeatures",
                               v4,
                               v8);
  LODWORD(v5) = 1;
  v1 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Accounts",
         L"AllowMicrosoftAccountConnection",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         L"NoConnectedUser",
         v5,
         v9);
  LODWORD(v6) = 3;
  v2 = (2 * IsPreventedByMdmOrPolicy) | v1 | Mobility::Policy::IsPreventedByMdmOrPolicy(
                                               (Mobility::Policy *)L"Accounts",
                                               L"AllowMicrosoftAccountConnection",
                                               L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
                                               L"NoConnectedUser",
                                               v6,
                                               v10);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56845155>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56845155>::GetImpl'::`2'::impl) )
  {
    LODWORD(v7) = 0;
    v2 |= 4
        * Mobility::Policy::IsPreventedByMdmOrPolicy(
            (Mobility::Policy *)L"Connectivity",
            L"AllowConnectedDevices",
            L"Software\\Policies\\Microsoft\\Windows\\System",
            L"EnableCdp",
            v7,
            v11);
  }
  LODWORD(v7) = 0;
  return v2 | (8
             * (unsigned int)Mobility::Policy::IsPreventedByMdmOrPolicy(
                               (Mobility::Policy *)L"Connectivity",
                               L"AllowPhonePCLinking",
                               L"Software\\Policies\\Microsoft\\Windows\\System",
                               L"EnableMmx",
                               v7,
                               v11));
}
