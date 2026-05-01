/*
 * XREFs of ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801F12C8
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801F119C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1804330B4 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator() @ 0x1804383E4 (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator().c)
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1806797E0 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003D4E8 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1802DAEC0 (IsWPDeveloperAppAllowedPresent.c)
 *     ?GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z @ 0x1806C7E80 (-GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
        CallerIdentity::ApiPolicyChecker *this,
        unsigned __int16 *a2,
        int *a3)
{
  int PackageActivationSettings; // ebx
  LONG PackagesByPackageFamily; // eax
  int v6; // eax
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 count; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  UINT32 bufferLength; // [rsp+3Ch] [rbp-C4h] BYREF
  PWSTR packageFullNames; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR packageFamilyName[3]; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR buffer[128]; // [rsp+60h] [rbp-A0h] BYREF

  *(_DWORD *)a2 = 0;
  packageFamilyName[0] = 0LL;
  packageFamilyName[1] = (PCWSTR)-1LL;
  packageFamilyName[2] = (PCWSTR)-1LL;
  PackageActivationSettings = ParseAppUserModelId((char *)this, (LPVOID *)packageFamilyName, 0LL);
  if ( PackageActivationSettings >= 0 )
  {
    packageFullNames = 0LL;
    count = 1;
    bufferLength = 128;
    PackagesByPackageFamily = GetPackagesByPackageFamily(
                                packageFamilyName[0],
                                &count,
                                &packageFullNames,
                                &bufferLength,
                                buffer);
    PackageActivationSettings = PackagesByPackageFamily;
    if ( PackagesByPackageFamily > 0 )
      PackageActivationSettings = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( PackageActivationSettings >= 0 && count == 1 )
    {
      v8 = 0;
      v6 = (unsigned __int8)IsWPDeveloperAppAllowedPresent()
         ? WPDeveloperAppAllowed(packageFullNames, &v8)
         : IsDeveloperModeEnabled(&v8);
      PackageActivationSettings = v6;
      if ( v6 >= 0 )
      {
        if ( v8 )
        {
          v10 = 0;
          PackageActivationSettings = GetPackageActivationSettings(
                                        packageFullNames,
                                        (enum PACKAGEACTIVATIONSETTINGS *)&v10);
          if ( PackageActivationSettings >= 0 && (v10 & 2) != 0 )
            *(_DWORD *)a2 = 1;
        }
      }
    }
  }
  if ( packageFamilyName[0] )
    CoTaskMemFree((LPVOID)packageFamilyName[0]);
  return (unsigned int)PackageActivationSettings;
}
