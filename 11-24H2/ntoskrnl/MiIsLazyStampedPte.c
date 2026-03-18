/*
 * XREFs of MiIsLazyStampedPte @ 0x1403114C0
 * Callers:
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiIsPdeOrAboveAccessible @ 0x1403113C0 (MiIsPdeOrAboveAccessible.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsLazyStampedPte(__int16 a1)
{
  return (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 && (a1 & 0x3E0) == 768LL;
}
