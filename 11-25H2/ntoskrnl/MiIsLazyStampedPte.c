/*
 * XREFs of MiIsLazyStampedPte @ 0x14040AF1C
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiIsPdeOrAboveAccessible @ 0x14040AE10 (MiIsPdeOrAboveAccessible.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsLazyStampedPte(__int16 a1)
{
  return (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 && (a1 & 0x3E0) == 768LL;
}
