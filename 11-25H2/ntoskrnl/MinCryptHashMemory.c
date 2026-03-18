/*
 * XREFs of MinCryptHashMemory @ 0x140693D50
 * Callers:
 *     MinCrypK_HashMemory @ 0x140814A04 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408150B4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140816590 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408167A4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x14081693C (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140816A74 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     HashpHashMemory @ 0x14081FDCC (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1);
}
