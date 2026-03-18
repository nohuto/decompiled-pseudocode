/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x1407FC0A8
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1407F5A20 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x1407F64A0 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1407F6550 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407F7350 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  int SystemInformation; // ebx
  int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  v7 = 0LL;
  v9 = 0LL;
  v8 = 0;
  v10 = 0;
  if ( !a1 )
  {
LABEL_6:
    if ( a2 )
    {
      SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v9);
      if ( SystemInformation < 0 )
      {
        v5 = 1876;
        goto LABEL_4;
      }
      *a2 = v9;
    }
    return 0;
  }
  SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v7);
  if ( SystemInformation >= 0 )
  {
    *a1 = v7;
    goto LABEL_6;
  }
  v5 = 1833;
LABEL_4:
  AslLogCallPrintf(1, (unsigned int)"AslEnvGetProcessWowInfo", v5, (unsigned int)"ZwQuerySystemInformation failed [%x]");
  return (unsigned int)SystemInformation;
}
