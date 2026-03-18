/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14040EC84
 * Callers:
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 *     MiAbandonPrivatePfn @ 0x1402CC258 (MiAbandonPrivatePfn.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140382A54 (MiDecommitHandlePageFileFormatPte.c)
 *     MiDecommitHandleTransitionPte @ 0x140383AF4 (MiDecommitHandleTransitionPte.c)
 *     MiAddToReservationCluster @ 0x14040D120 (MiAddToReservationCluster.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v3; // ax
  __int16 v4; // dx
  unsigned int v5; // ecx

  v3 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * (v3 >> 12) + 18528) + 172LL);
  v5 = 1;
  if ( (v4 & 0x10) == 0 && ((v4 & 0x20) == 0 || (v3 & 2) == 0) )
    return 0;
  return v5;
}
