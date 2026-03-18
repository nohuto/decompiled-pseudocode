/*
 * XREFs of MinCryptIsCertificateRevoked @ 0x140815CA0
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408150B4 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     I_MinCryptIsCertificateHashRevokedV2 @ 0x140693D70 (I_MinCryptIsCertificateHashRevokedV2.c)
 */

__int64 __fastcall MinCryptIsCertificateRevoked(int a1, const void *a2, unsigned int a3, _QWORD *a4)
{
  return I_MinCryptIsCertificateHashRevokedV2(a1, a2, a3, a4, 0LL, 0LL) != 0 ? 0xC0000603 : 0;
}
