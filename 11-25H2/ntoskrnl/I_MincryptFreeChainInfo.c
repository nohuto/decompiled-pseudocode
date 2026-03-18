/*
 * XREFs of I_MincryptFreeChainInfo @ 0x140817AE8
 * Callers:
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140816A74 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MincryptAddChainInfo @ 0x140817828 (I_MincryptAddChainInfo.c)
 *     MincryptFreePolicyInfo @ 0x140817B08 (MincryptFreePolicyInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall I_MincryptFreeChainInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x72634943u);
}
