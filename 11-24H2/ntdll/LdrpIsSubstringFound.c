/*
 * XREFs of LdrpIsSubstringFound @ 0x18015D258
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800A3254 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, PCWCH *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned __int64 i; // rbx

  v4 = 0;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    8988,
    (__int64)"LdrpIsSubstringFound",
    2,
    "Searching for \"%wZ\" in \"%wZ\"\n",
    a2,
    a1);
  v5 = *(unsigned __int16 *)a2;
  if ( *a1 >= (unsigned __int16)v5 )
  {
    for ( i = ((unsigned __int64)*a1 - v5) >> 1;
          RtlCompareUnicodeStrings(
            (PCWCH)(*((_QWORD *)a1 + 1) + 2 * i),
            (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
            a2[1],
            (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
            1u);
          --i )
    {
      if ( !i )
        return v4;
    }
    return 1;
  }
  return v4;
}
