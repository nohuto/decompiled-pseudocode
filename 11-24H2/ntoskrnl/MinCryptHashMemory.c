/*
 * XREFs of MinCryptHashMemory @ 0x14069F0F0
 * Callers:
 *     MinCrypK_HashMemory @ 0x140824824 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140824ED4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826384 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x140826598 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x140826730 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140826868 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     HashpHashMemory @ 0x14082FB0C (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1);
}
