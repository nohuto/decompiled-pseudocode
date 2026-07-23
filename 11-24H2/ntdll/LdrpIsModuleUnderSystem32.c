/*
 * XREFs of LdrpIsModuleUnderSystem32 @ 0x1800EFFE4
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 */

char __fastcall LdrpIsModuleUnderSystem32(__int64 a1)
{
  char v1; // bl

  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)(unsigned __int16)LdrpSystem32
                                                                                      + 2 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * ((unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1)) != 92 )
    return 0;
  v1 = 1;
  if ( RtlCompareUnicodeStrings(
         (PCWCH)_mm_srli_si128(*(__m128i *)(a1 + 72), 8).m128i_i64[0],
         (unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1,
         *((PCWCH *)&LdrpSystem32 + 1),
         (unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1,
         1u) )
  {
    return 0;
  }
  return v1;
}
