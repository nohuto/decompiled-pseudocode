/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x14080C358
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140806750 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140806800 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140807600 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS v4; // ebx
  int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  v7 = 0LL;
  SystemInformation = 0LL;
  v8 = 0;
  v10 = 0;
  if ( !a1 )
  {
LABEL_6:
    if ( a2 )
    {
      v4 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
      if ( v4 < 0 )
      {
        v5 = 1876;
        goto LABEL_4;
      }
      *a2 = SystemInformation;
    }
    return 0;
  }
  v4 = ZwQuerySystemInformation(SystemProcessorInformation, &v7, 0xCu, 0LL);
  if ( v4 >= 0 )
  {
    *a1 = v7;
    goto LABEL_6;
  }
  v5 = 1833;
LABEL_4:
  AslLogCallPrintf(1, (unsigned int)"AslEnvGetProcessWowInfo", v5, (unsigned int)"ZwQuerySystemInformation failed [%x]");
  return (unsigned int)v4;
}
