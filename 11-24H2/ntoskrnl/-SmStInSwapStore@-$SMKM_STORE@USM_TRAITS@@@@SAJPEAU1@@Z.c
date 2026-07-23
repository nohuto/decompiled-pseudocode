/*
 * XREFs of ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14048633C
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1404861DC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     MmInSwapVirtualAddresses @ 0x140A03180 (MmInSwapVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInSwapStore(__int64 a1)
{
  PVOID *v1; // rsi
  unsigned int v3; // edi

  v1 = *(PVOID **)(a1 + 7416);
  if ( (unsigned __int64)v1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v1 == (PVOID *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7416), -1LL, (signed __int64)v1) )
    {
      if ( *v1 )
        v3 = MmInSwapVirtualAddresses(KeGetCurrentThread()->ApcState.Process, *v1);
      else
        v3 = -1073741661;
      _InterlockedExchange64((volatile __int64 *)(a1 + 7416), 0LL);
      StLockAcquireShared((struct VLOCK *)(a1 + 6840));
      StLockReleaseShared((struct VLOCK *)(a1 + 6840));
      ExFreePoolWithTag(v1, 0);
    }
    else
    {
      return (unsigned int)-1073740682;
    }
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v3;
}
