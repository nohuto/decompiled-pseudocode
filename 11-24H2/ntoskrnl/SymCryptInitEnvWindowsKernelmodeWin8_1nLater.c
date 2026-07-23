/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140518538
 * Callers:
 *     SymCryptInit @ 0x1405AE418 (SymCryptInit.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x1404E71D0 (RtlGetEnabledExtendedFeatures.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14051B2D8 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x14051B458 (SymCryptInitEnvCommon.c)
 *     SymCryptFatal @ 0x1405AE400 (SymCryptFatal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGetVersion @ 0x140A04F30 (RtlGetVersion.c)
 */

__int64 __fastcall SymCryptInitEnvWindowsKernelmodeWin8_1nLater(unsigned int a1)
{
  __int64 result; // rax
  char EnabledExtendedFeatures; // al
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

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
