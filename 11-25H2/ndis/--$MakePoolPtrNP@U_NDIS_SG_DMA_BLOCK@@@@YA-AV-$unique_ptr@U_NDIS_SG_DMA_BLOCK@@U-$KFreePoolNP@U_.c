/*
 * XREFs of ??$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA?AV?$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U?$KFreePoolNP@U_NDIS_SG_DMA_BLOCK@@@@@wistd@@K@Z @ 0x140003C34
 * Callers:
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x1401556E0 (ndisRegisterScatterGatherDmaForGenericObject.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x140028B00 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14009C2D8 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall MakePoolPtrNP<_NDIS_SG_DMA_BLOCK>(__int64 a1)
{
  void *Pool2; // rax
  void *v3; // rdi

  Pool2 = (void *)ExAllocatePool2(64LL, 176LL, 1650738254LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xB0uLL);
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      a1,
      v3);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
  }
  return a1;
}
