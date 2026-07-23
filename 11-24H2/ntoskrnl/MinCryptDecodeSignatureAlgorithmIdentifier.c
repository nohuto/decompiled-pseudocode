/*
 * XREFs of MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140825088
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140825124 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MinCryptDecodeOid @ 0x140825004 (MinCryptDecodeOid.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x140827664 (MinAsn1ParseAlgorithmIdentifier.c)
 */

__int64 __fastcall MinCryptDecodeSignatureAlgorithmIdentifier(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  _BYTE v4[32]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v5[4]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v6[4]; // [rsp+50h] [rbp-28h] BYREF

  v1 = MinAsn1ParseAlgorithmIdentifier(a1, v4);
  v2 = 0;
  if ( v1 >= 0 )
  {
    v2 = MinCryptDecodeOid((__int64)&qword_140B3EE10, 2u, v5);
    if ( v2 == 11776 )
      return (unsigned int)MinCryptDecodeOid((__int64)&qword_140B3F6D0, 3u, v6);
  }
  return v2;
}
