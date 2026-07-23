/*
 * XREFs of MinCryptIsCertPresent @ 0x1406A0610
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall MinCryptIsCertPresent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int i; // ebx
  unsigned int v7; // eax

  for ( i = 0; i < a3; ++i )
  {
    v7 = *(_DWORD *)(a2 + 16LL * i);
    if ( *(_DWORD *)a1 == v7 && !memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 16LL * i + 8), v7) )
      return 1LL;
  }
  return 0LL;
}
