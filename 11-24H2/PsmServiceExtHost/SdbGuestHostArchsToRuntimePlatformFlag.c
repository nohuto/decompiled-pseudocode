/*
 * XREFs of SdbGuestHostArchsToRuntimePlatformFlag @ 0x180094810
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1800948C0 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x180094E70 (SdbpGetBinaryRuntimePlatform.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A6898 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestHostArchsToRuntimePlatformFlag(__int16 a1, __int16 *a2)
{
  __int64 v3; // rbx
  __int16 v4; // dx
  unsigned __int64 i; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == -1 )
    return 0LL;
  v3 = 0LL;
  v7 = -1;
  if ( !a2 || (v4 = *a2, v7 = v4, v4 == -1) )
  {
    if ( (int)AslEnvGetProcessWowInfo(&v7, 0LL) < 0 )
    {
      AslLogCallPrintf(1LL);
      return 0LL;
    }
    v4 = v7;
  }
  for ( i = 0LL; i < 32; i += 4LL )
  {
    if ( a1 == LOWORD(dword_1800C9460[i + 1]) && v4 == HIWORD(dword_1800C9460[i + 1]) )
      return dword_1800C9460[4 * v3 + 2];
    ++v3;
  }
  return 0LL;
}
