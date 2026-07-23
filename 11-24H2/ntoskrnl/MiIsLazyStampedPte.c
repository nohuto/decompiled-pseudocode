/*
 * XREFs of MiIsLazyStampedPte @ 0x1403F4D00
 * Callers:
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiIsPdeOrAboveAccessible @ 0x1403F4C00 (MiIsPdeOrAboveAccessible.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsLazyStampedPte(__int16 a1)
{
  return (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 && (a1 & 0x3E0) == 768LL;
}
