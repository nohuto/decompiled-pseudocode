/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402EDDFC
 * Callers:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiAbandonPrivatePfn @ 0x140269D68 (MiAbandonPrivatePfn.c)
 *     MiDecommitHandleTransitionPte @ 0x14029685C (MiDecommitHandleTransitionPte.c)
 *     MiAddToReservationCluster @ 0x1402EBEB0 (MiAddToReservationCluster.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v3; // ax

  v3 = MI_READ_PTE_LOCK_FREE(a2);
  return (*(_WORD *)(*(_QWORD *)(a1 + 8LL * (v3 >> 12) + 18528) + 172LL) & 0x10) != 0
      || (*(_WORD *)(*(_QWORD *)(a1 + 8LL * (v3 >> 12) + 18528) + 172LL) & 0x20) != 0 && (v3 & 2) != 0;
}
