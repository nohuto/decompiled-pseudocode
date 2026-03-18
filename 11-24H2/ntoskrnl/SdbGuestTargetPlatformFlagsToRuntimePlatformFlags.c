/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1408060C0
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1408065C4 (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140806010 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslEnvGetProcessWowInfo @ 0x14080BC18 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned int v1; // edi
  unsigned __int64 i; // rbx
  __int16 v3; // r8
  unsigned __int64 j; // rcx
  __int16 v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+52h] [rbp+Ah]

  v7 = HIWORD(a1);
  v6 = 0;
  v1 = 0;
  if ( (int)AslEnvGetProcessWowInfo(&v6, 0LL) >= 0 )
  {
    for ( i = 0LL; i < 0x3C; i += 12LL )
    {
      if ( (*(_DWORD *)((_BYTE *)qword_14003CFC0 + i) & 0x1F) != 0 )
      {
        v3 = *(_WORD *)&algn_14003CFB7[i + 5];
        for ( j = 0LL; j < 0x80; j += 16LL )
        {
          if ( *(_WORD *)((char *)&unk_140E0A170 + j) == v6 && *(_WORD *)((char *)&unk_140E0A172 + j) == v3 )
          {
            v1 |= SdbGuestHostArchsToRuntimePlatformFlag(v3, &v6);
            break;
          }
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGuestTargetPlatformFlagsToRuntimePlatformFlags",
      325,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
  }
  return v1;
}
