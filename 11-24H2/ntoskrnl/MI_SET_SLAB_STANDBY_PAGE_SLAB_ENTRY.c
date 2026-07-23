/*
 * XREFs of MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1403E2718
 * Callers:
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403E2544 (MiGetSlabRepurposedStandbyListWorker.c)
 * Callees:
 *     MiSetNextStandbyPageSecondaryNoLockAsserts @ 0x1403E2780 (MiSetNextStandbyPageSecondaryNoLockAsserts.c)
 *     MiSetPfnNodeBlinkLow @ 0x1403E2820 (MiSetPfnNodeBlinkLow.c)
 */

__int64 __fastcall MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2 & 0xFFFFFFFFFFLL;
  MiSetPfnNodeBlinkLow(a1, a2 & 0xFFFFFFFFFFLL);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0xFFE00000 | (v2 >> 19);
  return MiSetNextStandbyPageSecondaryNoLockAsserts(a1, a2 >> 40);
}
