/*
 * XREFs of MiGetPteMappingSet @ 0x140335DF0
 * Callers:
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x140679570 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x14067B820 (MiCopyFilePage.c)
 *     MiFillPageWithImageExtentContents @ 0x14067BED4 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x14068F450 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiCreatePteCopyList @ 0x14047968C (MiCreatePteCopyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetPteMappingSet(int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *MmInternal; // rdi
  unsigned __int64 result; // rax

  if ( !a1 || KeGetCurrentIrql() >= 2u || (result = MiCreatePteCopyList(a2, a3), !*(_DWORD *)(a3 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    *(_BYTE *)(a3 + 8) = CurrentIrql;
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    result = (((unsigned __int64)MiGetUltraMapping(MmInternal + 13, 3LL, a2, 4LL) >> 9) & 0x7FFFFFFFF8LL)
           - 0x98000000000LL;
    *MmInternal = result;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = a2;
    *(_QWORD *)(a3 + 16) = result;
    *(_BYTE *)(a3 + 9) = 1;
  }
  return result;
}
