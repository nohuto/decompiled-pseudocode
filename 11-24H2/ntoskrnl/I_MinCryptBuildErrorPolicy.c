/*
 * XREFs of I_MinCryptBuildErrorPolicy @ 0x140827CB4
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x140825FE8 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptGetSigningTime @ 0x1408269F0 (I_MinCryptGetSigningTime.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall I_MinCryptBuildErrorPolicy(unsigned int a1, __int64 a2, int a3)
{
  int v3; // eax

  if ( a2 && !*(_DWORD *)a2 )
  {
    *(_OWORD *)a2 = 0LL;
    v3 = 0x10000000;
    *(_OWORD *)(a2 + 16) = 0LL;
    if ( a3 )
      v3 = a3;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_DWORD *)a2 = 48;
    *(_DWORD *)(a2 + 8) = v3;
    *(_DWORD *)(a2 + 4) = a1;
  }
  return a1;
}
