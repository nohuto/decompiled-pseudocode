/*
 * XREFs of LdrpIsSubstringFound @ 0x18015EE98
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x180087790 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned __int64 i; // rbx

  v4 = 0;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    8988,
    (__int64)"LdrpIsSubstringFound",
    2,
    "Searching for \"%wZ\" in \"%wZ\"\n",
    (char)a2);
  v5 = *a2;
  if ( *a1 >= (unsigned __int16)v5 )
  {
    for ( i = ((unsigned __int64)*a1 - v5) >> 1;
          (unsigned int)RtlCompareUnicodeStrings(
                          (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * i),
                          (unsigned __int64)*a2 >> 1,
                          *((_BYTE **)a2 + 1),
                          (unsigned __int64)*a2 >> 1,
                          1);
          --i )
    {
      if ( !i )
        return v4;
    }
    return 1;
  }
  return v4;
}
