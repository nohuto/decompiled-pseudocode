/*
 * XREFs of I_MinCryptFindRootByName @ 0x1408254EC
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 */

__int64 *__fastcall I_MinCryptFindRootByName(const void **a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int i; // edi

  v2 = 0;
  for ( i = 0; i < 0x13; ++i )
  {
    if ( *(_DWORD *)a1 == LODWORD(RootTable[5 * i])
      && RtlCompareMemory(a1[1], (&off_140B40D28)[5 * i], *(unsigned int *)a1) == *(_DWORD *)a1 )
    {
      return &RootTable[5 * i];
    }
  }
  if ( a2 && (*(_DWORD *)(a2 + 4) & 0x80u) != 0 )
  {
    while ( v2 < 2 )
    {
      if ( *(_DWORD *)a1 == *(_DWORD *)&AltRootTable[20 * v2]
        && RtlCompareMemory(a1[1], *(&off_140B3E698 + 5 * v2), *(unsigned int *)a1) == *(_DWORD *)a1 )
      {
        return (__int64 *)&AltRootTable[20 * v2];
      }
      ++v2;
    }
  }
  return 0LL;
}
