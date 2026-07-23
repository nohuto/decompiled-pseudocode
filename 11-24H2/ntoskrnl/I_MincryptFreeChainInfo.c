/*
 * XREFs of I_MincryptFreeChainInfo @ 0x1408280AC
 * Callers:
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MincryptAddChainInfo @ 0x140827DEC (I_MincryptAddChainInfo.c)
 *     MincryptFreePolicyInfo @ 0x1408280CC (MincryptFreePolicyInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall I_MincryptFreeChainInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x72634943u);
}
