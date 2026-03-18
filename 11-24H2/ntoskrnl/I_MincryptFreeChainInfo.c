/*
 * XREFs of I_MincryptFreeChainInfo @ 0x1408278DC
 * Callers:
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140826868 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MincryptAddChainInfo @ 0x14082761C (I_MincryptAddChainInfo.c)
 *     MincryptFreePolicyInfo @ 0x1408278FC (MincryptFreePolicyInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall I_MincryptFreeChainInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x72634943u);
}
