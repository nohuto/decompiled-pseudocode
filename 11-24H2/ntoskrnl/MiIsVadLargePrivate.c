/*
 * XREFs of MiIsVadLargePrivate @ 0x1402903A0
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x1404C7128 (MiPrefetchJumpVad.c)
 *     MiScrubProcessLargePage @ 0x1407FE2B0 (MiScrubProcessLargePage.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 *     MiMapChildLargePageVads @ 0x140AAFFF4 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x200000) != 0 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000)
      || (v1 & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 1) != 0;
}
