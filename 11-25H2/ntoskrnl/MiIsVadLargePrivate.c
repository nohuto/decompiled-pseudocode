/*
 * XREFs of MiIsVadLargePrivate @ 0x1402A82E0
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiPrefetchJumpVad @ 0x1404CDF78 (MiPrefetchJumpVad.c)
 *     MiScrubProcessLargePage @ 0x1407EDCB0 (MiScrubProcessLargePage.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 *     MiMapChildLargePageVads @ 0x140AB0E64 (MiMapChildLargePageVads.c)
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
