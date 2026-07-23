/*
 * XREFs of MiWriteSegmentSignatureFlags @ 0x1404A7950
 * Callers:
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 */

char __fastcall MiWriteSegmentSignatureFlags(__int64 a1, __int64 a2)
{
  signed __int8 v2; // bl
  signed __int8 v3; // di
  __int64 v4; // rbp
  bool v5; // zf
  int v6; // eax

  v2 = *(_BYTE *)(a1 + 15);
  v3 = a2;
  v4 = a1;
  do
  {
    LOBYTE(a2) = 12;
    LOBYTE(a1) = v2 & 0xF;
    if ( (unsigned int)SeCompareSigningLevels(a1, a2) )
    {
      LOBYTE(a2) = v2 & 0xF;
      LOBYTE(a1) = v3 & 0xF;
      v6 = SeCompareSigningLevels(a1, a2);
      if ( !v6 )
        break;
    }
    LOBYTE(v6) = _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 15), v3, v2);
    v5 = v2 == (signed __int8)v6;
    v2 = v6;
  }
  while ( !v5 );
  return v6;
}
