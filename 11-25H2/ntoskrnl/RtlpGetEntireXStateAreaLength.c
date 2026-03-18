/*
 * XREFs of RtlpGetEntireXStateAreaLength @ 0x140261E20
 * Callers:
 *     RtlpGetNonLegacyXStateAreaLength @ 0x140260C70 (RtlpGetNonLegacyXStateAreaLength.c)
 *     RtlGetExtendedContextLength @ 0x140261030 (RtlGetExtendedContextLength.c)
 *     KiContinuePreviousModeUser @ 0x140261330 (KiContinuePreviousModeUser.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetEntireXStateAreaLength(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r10d
  unsigned int i; // r9d
  __int64 v4; // rax

  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return MEMORY[0xFFFFF780000003E8];
  v1 = 4LL;
  v2 = 576;
  for ( i = 2; i < 0x40; i += 2 )
  {
    if ( (v1 & a1) != 0 )
    {
      if ( (v1 & MEMORY[0xFFFFF780000005F8]) != 0 )
        v2 = (v2 + 63) & 0xFFFFFFC0;
      v2 += *(_DWORD *)(4LL * i - 0x87FFFFFF9FCLL);
    }
    v4 = __ROL8__(v1, 1);
    if ( (v4 & a1) != 0 )
    {
      if ( (v4 & MEMORY[0xFFFFF780000005F8]) != 0 )
        v2 = (v2 + 63) & 0xFFFFFFC0;
      v2 += *(_DWORD *)(4LL * (i + 1) - 0x87FFFFFF9FCLL);
    }
    v1 = __ROL8__(v1, 2);
  }
  return v2;
}
