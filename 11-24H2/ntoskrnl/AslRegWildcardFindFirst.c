/*
 * XREFs of AslRegWildcardFindFirst @ 0x14080B5A0
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x14080467C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslRegWildcardFindClose @ 0x14080B52C (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x14080B660 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x14080B820 (AslpParsePattern.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  v6 = (_QWORD *)AslAlloc(a1, 32LL);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v6[1] = v6;
  *v6 = v6;
  Next = AslStringDuplicate(v6 + 3, a3);
  if ( Next < 0
    || (Next = AslpParsePattern(v7[3], v7), Next < 0)
    || (v7[2] = *v7, Next = AslRegWildcardFindNext(a1, v7), Next < 0) )
  {
    AslRegWildcardFindClose(v7);
  }
  else
  {
    *a2 = v7;
  }
  return (unsigned int)Next;
}
