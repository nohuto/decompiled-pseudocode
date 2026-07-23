/*
 * XREFs of SdbGuestHostArchsToRuntimePlatformFlag @ 0x140806750
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140806800 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x14080C358 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
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
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGuestHostArchsToRuntimePlatformFlag",
        248,
        (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
      return 0LL;
    }
    v4 = v7;
  }
  for ( i = 0LL; i < 16; i += 2LL )
  {
    if ( a1 == WORD2(qword_14003D410[i]) && v4 == HIWORD(qword_14003D410[i]) )
      return LODWORD(qword_14003D410[2 * v3 + 1]);
    ++v3;
  }
  return 0LL;
}
