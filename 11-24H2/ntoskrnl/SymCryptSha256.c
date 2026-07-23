/*
 * XREFs of SymCryptSha256 @ 0x14051867C
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140463B10 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x140497580 (KeComputeSha256.c)
 * Callees:
 *     SymCryptSha256Append @ 0x140518710 (SymCryptSha256Append.c)
 *     SymCryptSha256Init @ 0x140519EB0 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x140519EE0 (SymCryptSha256Result.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
