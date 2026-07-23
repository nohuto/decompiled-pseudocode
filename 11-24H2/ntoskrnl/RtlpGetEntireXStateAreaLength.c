/*
 * XREFs of RtlpGetEntireXStateAreaLength @ 0x1403D3F50
 * Callers:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x1403D3A3C (RtlpGetNonLegacyXStateAreaLength.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetEntireXStateAreaLength(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  __int64 v4; // r8
  __int64 v5; // rcx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return MEMORY[0xFFFFF780000003E8];
  result = 576LL;
  v3 = 2;
  v4 = 4LL;
  do
  {
    if ( (v4 & a1) != 0 )
    {
      if ( (v4 & MEMORY[0xFFFFF780000005F8]) != 0 )
        LODWORD(result) = (result + 63) & 0xFFFFFFC0;
      result = (unsigned int)(*(_DWORD *)(4LL * v3 - 0x87FFFFFF9FCLL) + result);
    }
    v5 = __ROL8__(v4, 1);
    if ( (v5 & a1) != 0 )
    {
      if ( (v5 & MEMORY[0xFFFFF780000005F8]) != 0 )
        LODWORD(result) = (result + 63) & 0xFFFFFFC0;
      result = (unsigned int)(*(_DWORD *)(4LL * (v3 + 1) - 0x87FFFFFF9FCLL) + result);
    }
    v3 += 2;
    v4 = __ROL8__(v4, 2);
  }
  while ( v3 < 0x40 );
  return result;
}
