/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14051AC68
 * Callers:
 *     SymCryptInit @ 0x1405B14A8 (SymCryptInit.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x1404EEFB0 (RtlGetEnabledExtendedFeatures.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14051DA08 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x14051DB88 (SymCryptInitEnvCommon.c)
 *     SymCryptFatal @ 0x1405B1490 (SymCryptFatal.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlGetVersion @ 0x140A08A00 (RtlGetVersion.c)
 */

__int64 __fastcall SymCryptInitEnvWindowsKernelmodeWin8_1nLater(unsigned int a1)
{
  __int64 result; // rax
  char EnabledExtendedFeatures; // al
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  result = (unsigned int)g_SymCryptFlags;
  if ( (g_SymCryptFlags & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      SymCryptFatal(1853059702LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      SymCryptFatal(1853059702LL);
    }
    SymCryptDetectCpuFeaturesByCpuid(1LL);
    EnabledExtendedFeatures = RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL);
    if ( (EnabledExtendedFeatures & 4) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x10u;
    if ( (EnabledExtendedFeatures & 0xE0) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x1000u;
    g_SymCryptCpuFeaturesNotPresent &= ~0x20u;
    return SymCryptInitEnvCommon(a1);
  }
  return result;
}
