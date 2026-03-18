/*
 * XREFs of KiGetCpuVendor @ 0x140B5E944
 * Callers:
 *     HvlpProcessIommu @ 0x1404D4A40 (HvlpProcessIommu.c)
 *     KiGetIptInfo @ 0x1405B4B28 (KiGetIptInfo.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140797578 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407978A8 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407992C4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407995D8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x140799E1C (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     KiIsNXSupported @ 0x140B468B4 (KiIsNXSupported.c)
 *     PopIsMktmeEnabled @ 0x140B4D574 (PopIsMktmeEnabled.c)
 *     KiInitializeNxSupportDiscard @ 0x140C185A8 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     strncmp @ 0x1406B4820 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[16]; // [rsp+20h] [rbp-20h] BYREF

  _RAX = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)&Str1[4] = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&Str1[12] = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = *(_DWORD *)&Str1[12];
  CurrentPrcb->VendorString[12] = 0;
  if ( strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
  {
    if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      return 2LL;
    if ( !strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
      return 3LL;
    if ( strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
      return strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) == 0 ? 3 : 0;
  }
  return 1LL;
}
