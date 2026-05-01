/*
 * XREFs of SdbpGetBinaryRuntimePlatform @ 0x180094E70
 * Callers:
 *     SdbInitDatabaseEx @ 0x1800949E4 (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180094810 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A6898 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A6DEC (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpGetBinaryRuntimePlatform(__int16 a1)
{
  __int16 *v1; // rbx
  __int16 v2; // ax
  __int16 v4; // [rsp+40h] [rbp+8h] BYREF
  __int16 v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v5 = 0;
  if ( a1 == 0x7FFF )
  {
    v4 = -1;
  }
  else
  {
    v2 = AslImageFileToArchitecture();
    v4 = v2;
    if ( v2 != -1 )
      return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
  }
  if ( (int)AslEnvGetProcessWowInfo(&v5, &v4) < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v2 = v4;
  v1 = &v5;
  return SdbGuestHostArchsToRuntimePlatformFlag(v2, v1);
}
