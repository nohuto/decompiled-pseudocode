/*
 * XREFs of LdrInitializeMrdata @ 0x180066D00
 * Callers:
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 * Callees:
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS LdrInitializeMrdata()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+38h] [rbp-40h]
  __int64 v3; // [rsp+48h] [rbp-30h]

  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  LdrpMrdataLock = 0LL;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    LdrpAllocationGranularity = v2;
    LdrpMaximumUserModeAddress = v3;
    return 0;
  }
  return result;
}
