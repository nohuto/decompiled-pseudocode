/*
 * XREFs of KeComputeSha256 @ 0x14049C950
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x1407C4CB4 (ExpKdPullRemoteFileForUser.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 * Callees:
 *     SymCryptSha256 @ 0x14051ADAC (SymCryptSha256.c)
 */

__int64 __fastcall KeComputeSha256(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptSha256(a1, a2, a3);
}
