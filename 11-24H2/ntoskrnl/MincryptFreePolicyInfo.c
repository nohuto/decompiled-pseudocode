/*
 * XREFs of MincryptFreePolicyInfo @ 0x1408280CC
 * Callers:
 *     SecureDump_ValidateAmeCertChain @ 0x14059F7F0 (SecureDump_ValidateAmeCertChain.c)
 * Callees:
 *     I_MincryptFreeChainInfo @ 0x1408280AC (I_MincryptFreeChainInfo.c)
 */

void __fastcall MincryptFreePolicyInfo(__int64 a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
    {
      I_MincryptFreeChainInfo(*(void **)(a1 + 16));
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_OWORD *)(a1 + 32) = 0LL;
    }
  }
}
