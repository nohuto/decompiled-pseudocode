/*
 * XREFs of ?IsPhoneLinkingBlockedByPolicy@Policy@Mobility@@YA?AW4LinkedPhonesPolicyState@12@XZ @ 0x180034310
 * Callers:
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18003F120 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 * Callees:
 *     ?IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z @ 0x18003441C (-IsPreventedByMdmOrPolicy@Policy@Mobility@@YA_NPEBG000K@Z.c)
 */

__int64 Mobility::Policy::IsPhoneLinkingBlockedByPolicy()
{
  BOOL IsPreventedByMdmOrPolicy; // esi
  BOOL v1; // ebx
  bool v2; // al
  int v3; // edi
  bool v4; // al
  unsigned __int16 *v6; // [rsp+20h] [rbp-18h]
  unsigned __int16 *v7; // [rsp+20h] [rbp-18h]
  unsigned __int16 *v8; // [rsp+20h] [rbp-18h]
  unsigned __int16 *v9; // [rsp+20h] [rbp-18h]
  unsigned __int16 *v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+28h] [rbp-10h]
  unsigned int v12; // [rsp+28h] [rbp-10h]
  unsigned int v13; // [rsp+28h] [rbp-10h]
  unsigned int v14; // [rsp+28h] [rbp-10h]
  unsigned int v15; // [rsp+28h] [rbp-10h]

  LODWORD(v6) = 1;
  IsPreventedByMdmOrPolicy = Mobility::Policy::IsPreventedByMdmOrPolicy(
                               (Mobility::Policy *)L"Experience",
                               L"AllowWindowsConsumerFeatures",
                               L"Software\\Policies\\Microsoft\\Windows\\CloudContent",
                               L"DisableWindowsConsumerFeatures",
                               v6,
                               v11);
  LODWORD(v7) = 1;
  v1 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Accounts",
         L"AllowMicrosoftAccountConnection",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         L"NoConnectedUser",
         v7,
         v12);
  LODWORD(v8) = 3;
  v2 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Accounts",
         L"AllowMicrosoftAccountConnection",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         L"NoConnectedUser",
         v8,
         v13);
  LODWORD(v9) = 0;
  v3 = (2 * IsPreventedByMdmOrPolicy) | (v1 || v2);
  v4 = Mobility::Policy::IsPreventedByMdmOrPolicy(
         (Mobility::Policy *)L"Connectivity",
         L"AllowConnectedDevices",
         L"Software\\Policies\\Microsoft\\Windows\\System",
         L"EnableCdp",
         v9,
         v14);
  LODWORD(v10) = 0;
  return v3 | (4 * v4) | (8
                        * (unsigned int)Mobility::Policy::IsPreventedByMdmOrPolicy(
                                          (Mobility::Policy *)L"Connectivity",
                                          L"AllowPhonePCLinking",
                                          L"Software\\Policies\\Microsoft\\Windows\\System",
                                          L"EnableMmx",
                                          v10,
                                          v15));
}
