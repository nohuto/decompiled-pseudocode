/*
 * XREFs of PiCompareDDBCacheEntries @ 0x14088D380
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PiCompareDDBCacheEntries(__int64 a1, __int64 a2, __int64 a3)
{
  LONG v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx

  v6 = RtlCompareUnicodeStrings(
         *(PCWCH *)(a2 + 24),
         (unsigned __int64)*(unsigned __int16 *)(a2 + 16) >> 1,
         *(PCWCH *)(a3 + 24),
         (unsigned __int64)*(unsigned __int16 *)(a3 + 16) >> 1,
         1u);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 > 0 )
    return 1LL;
  if ( *(_QWORD *)(a1 + 96) )
    return 2LL;
  v7 = *(_DWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a3 + 32);
  if ( v8 > v7 )
    return 0LL;
  return 2 - (unsigned int)(v8 < v7);
}
