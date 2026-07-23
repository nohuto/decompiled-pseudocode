/*
 * XREFs of MiGetSlabAllocatorRepurposedStandbyList @ 0x1403E2438
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiUpdatePageAttributeStamp @ 0x1403F034C (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1403E24C4 (MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1403E2544 (MiGetSlabRepurposedStandbyListWorker.c)
 */

__int64 __fastcall MiGetSlabAllocatorRepurposedStandbyList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rbx
  unsigned int v8; // eax

  v4 = (int)a2;
  if ( (a3 & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY(a1, a2, a3, a4) + 56) + 80LL);
  v7 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v8 = MI_NODE_FROM_PFN(a1);
  return MiGetSlabRepurposedStandbyListWorker(232 * v4 + 57216LL * v8 + 15696 + *(_QWORD *)(v7 + 16), a1);
}
