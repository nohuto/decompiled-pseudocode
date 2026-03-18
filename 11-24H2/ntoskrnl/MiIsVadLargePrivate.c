/*
 * XREFs of MiIsVadLargePrivate @ 0x14025FD90
 * Callers:
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x1404CDD58 (MiPrefetchJumpVad.c)
 *     MiScrubProcessLargePage @ 0x1407FDB40 (MiScrubProcessLargePage.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 *     MiMapChildLargePageVads @ 0x140AB5D2C (MiMapChildLargePageVads.c)
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
