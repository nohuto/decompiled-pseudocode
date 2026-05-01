/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1800948C0
 * Callers:
 *     SdbResolveDatabaseEx @ 0x18009602C (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x180094810 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A6898 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned int v1; // edi
  __int16 v2; // si
  unsigned __int64 i; // rbx
  __int16 v4; // cx
  unsigned __int64 j; // rax
  __int16 v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+52h] [rbp+Ah]

  v8 = HIWORD(a1);
  v7 = 0;
  v1 = 0;
  if ( (int)AslEnvGetProcessWowInfo(&v7, 0LL) >= 0 )
  {
    v2 = v7;
    for ( i = 0LL; i < 0x3C; i += 12LL )
    {
      if ( (byte_1800C9420[i] & 0x1F) != 0 )
      {
        v4 = *(_WORD *)&algn_1800C9417[i + 5];
        for ( j = 0LL; j < 0x80; j += 16LL )
        {
          if ( *(_WORD *)((char *)&unk_1800E8500 + j) == v2 && *(_WORD *)((char *)&unk_1800E8502 + j) == v4 )
          {
            v1 |= SdbGuestHostArchsToRuntimePlatformFlag(v4, &v7);
            break;
          }
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v1;
}
