/*
 * XREFs of RtlpGetNonLegacyXStateAreaLength @ 0x1403D3A3C
 * Callers:
 *     KiInitializeUserApc @ 0x1403D2E04 (KiInitializeUserApc.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1403D3F50 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlpGetNonLegacyXStateAreaLength(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    a2 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
    a1 &= a2;
  }
  return (unsigned int)RtlpGetEntireXStateAreaLength(a1, a2, a3, a4) - 512;
}
