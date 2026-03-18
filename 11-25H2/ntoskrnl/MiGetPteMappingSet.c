/*
 * XREFs of MiGetPteMappingSet @ 0x140211850
 * Callers:
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x14066CA94 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x14066EE80 (MiCopyFilePage.c)
 *     MiFillPageWithImageExtentContents @ 0x14066F534 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x140682A90 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiCreatePteCopyList @ 0x14047DD90 (MiCreatePteCopyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
