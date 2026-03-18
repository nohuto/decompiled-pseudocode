/*
 * XREFs of HvipApertureDetectParameters @ 0x1406043BC
 * Callers:
 *     HviEnterKernelAperture @ 0x14060429C (HviEnterKernelAperture.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x1404A3740 (HviGetHardwareFeatures.c)
 *     HviIsKernelApertureAvailable @ 0x1406042FC (HviIsKernelApertureAvailable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char HvipApertureDetectParameters()
{
  bool v5; // di
  char v6; // bl
  char result; // al
  char v8; // si
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  _RAX = 0LL;
  __asm { cpuid }
  v5 = 0;
  v9 = 0LL;
  if ( (_DWORD)_RBX != 1970169159 || (_DWORD)_RDX != 1231384169 || (v6 = 1, (_DWORD)_RCX != 1818588270) )
    v6 = 0;
  result = HviIsKernelApertureAvailable();
  if ( result )
  {
    v8 = 0;
    result = HviGetHardwareFeatures((__int64)&v9);
    v5 = (v9 & 0x8000) != 0;
  }
  else
  {
    v8 = 1;
  }
  byte_140E678E0 = v6;
  byte_140E0CC42 = v8;
  byte_140E678E1 = v5;
  byte_140E678E2 = 1;
  return result;
}
