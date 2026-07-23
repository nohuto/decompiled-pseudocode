/*
 * XREFs of ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140486280
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1404861DC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(__int64 a1)
{
  __int64 Pool2; // rax
  signed __int64 v3; // rsi

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7416), -1LL, 0LL) )
    return 3221226614LL;
  Pool2 = ExAllocatePool2(0x40uLL, 4 * (((unsigned __int64)*(unsigned int *)(a1 + 7020) + 31) >> 5) + 24, 0x77536D73u);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_DWORD *)(Pool2 + 8) = *(_DWORD *)(a1 + 7020);
    *(_QWORD *)(Pool2 + 16) = Pool2 + 24;
    RtlSetAllBits((PRTL_BITMAP)(Pool2 + 8));
    _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7416), v3, -1LL);
    return 0LL;
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 7416), 0LL);
    return 3221225626LL;
  }
}
