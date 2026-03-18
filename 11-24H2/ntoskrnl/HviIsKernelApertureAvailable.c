/*
 * XREFs of HviIsKernelApertureAvailable @ 0x1406042FC
 * Callers:
 *     HvipApertureDetectParameters @ 0x1406043BC (HvipApertureDetectParameters.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x140663AB0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140663DA0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char HviIsKernelApertureAvailable()
{
  __int64 v0; // rcx
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  HviGetHypervisorFeatures(&v8);
  if ( (v8 & 0x100000000000LL) != 0 && (unsigned __int8)HviIsHypervisorVendorMicrosoft(v0) )
  {
    _RAX = 1073741831LL;
    __asm { cpuid }
    BYTE8(v7) = _RCX;
  }
  return BYTE8(v7) & 1;
}
