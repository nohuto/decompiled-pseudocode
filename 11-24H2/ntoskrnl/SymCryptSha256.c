/*
 * XREFs of SymCryptSha256 @ 0x14051ADAC
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14046B090 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x14049C950 (KeComputeSha256.c)
 * Callees:
 *     SymCryptSha256Append @ 0x14051AE40 (SymCryptSha256Append.c)
 *     SymCryptSha256Init @ 0x14051C5E0 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x14051C610 (SymCryptSha256Result.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v8; // [rsp+24h] [rbp-A4h]

  v8 = 0;
  memset_0(v7, 0, 0x7CuLL);
  SymCryptSha256Init(v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
