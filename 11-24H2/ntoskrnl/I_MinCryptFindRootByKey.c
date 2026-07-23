/*
 * XREFs of I_MinCryptFindRootByKey @ 0x140825478
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 */

__int64 *__fastcall I_MinCryptFindRootByKey(const void **a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < 0x13; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)a1 == LODWORD(RootTable[5 * i + 2])
      && RtlCompareMemory(a1[1], (const void *)RootTable[5 * i + 3], *(unsigned int *)a1) == *(_DWORD *)a1 )
    {
      return &RootTable[5 * i];
    }
  }
  return 0LL;
}
