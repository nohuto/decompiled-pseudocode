/*
 * XREFs of MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x14021CBE8
 * Callers:
 *     MiGetSlabRepurposedStandbyListWorker @ 0x14021C78C (MiGetSlabRepurposedStandbyListWorker.c)
 * Callees:
 *     MiSetPfnNodeBlinkLow @ 0x1403E68E0 (MiSetPfnNodeBlinkLow.c)
 *     MiSetNextStandbyPageSecondaryNoLockAsserts @ 0x1403E6940 (MiSetNextStandbyPageSecondaryNoLockAsserts.c)
 */

__int64 __fastcall MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2 & 0xFFFFFFFFFFLL;
  MiSetPfnNodeBlinkLow(a1, a2 & 0xFFFFFFFFFFLL);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0xFFE00000 | (v2 >> 19);
  return MiSetNextStandbyPageSecondaryNoLockAsserts(a1, a2 >> 40);
}
