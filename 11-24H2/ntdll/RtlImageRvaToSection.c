/*
 * XREFs of RtlImageRvaToSection @ 0x1800E46A0
 * Callers:
 *     RtlImageRvaToVa @ 0x1800E4610 (RtlImageRvaToVa.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageRvaToSection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int i; // eax
  unsigned int v5; // edx

  v3 = a1 + *(unsigned __int16 *)(a1 + 20) + 24LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 6); ++i )
  {
    v5 = *(_DWORD *)(v3 + 12);
    if ( a3 >= v5 && a3 < *(_DWORD *)(v3 + 16) + v5 )
      return v3;
    v3 += 40LL;
  }
  return 0LL;
}
