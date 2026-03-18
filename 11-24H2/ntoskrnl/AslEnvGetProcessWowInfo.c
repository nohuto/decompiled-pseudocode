/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x14080BC18
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140805590 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140806010 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1408060C0 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140806EC0 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
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
