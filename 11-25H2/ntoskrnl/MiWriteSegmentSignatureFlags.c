/*
 * XREFs of MiWriteSegmentSignatureFlags @ 0x1404AECDC
 * Callers:
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 */

char __fastcall MiWriteSegmentSignatureFlags(__int64 a1, __int64 a2)
{
  signed __int8 v2; // bl
  signed __int8 v3; // di
  __int64 v4; // rbp
  int v5; // eax
  bool v6; // zf

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
      v5 = SeCompareSigningLevels(a1, a2);
      if ( !v5 )
        break;
    }
    LOBYTE(v5) = _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 15), v3, v2);
    v6 = v2 == (signed __int8)v5;
    v2 = v5;
  }
  while ( !v6 );
  return v5;
}
