/*
 * XREFs of SymCryptSizeofEcpointFromCurve @ 0x14052B2D0
 * Callers:
 *     SymCryptEckeyCreate @ 0x140522D3C (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140522DF8 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1405233FC (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140529D00 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x14052A830 (SymCryptOfflinePrecomputation.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x14052BA6C (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14052C4BC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassAdd @ 0x14052CBB0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x14052DF44 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptEcDhSecretAgreement @ 0x140538EE8 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSizeofEcpointFromCurve(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8) & 0xF;
  if ( (unsigned int)(v1 - 1) > 3 )
    return 0;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 36) * v1 + 32);
}
