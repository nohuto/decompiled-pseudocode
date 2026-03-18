/*
 * XREFs of MiGetSlabAllocatorRepurposedStandbyList @ 0x14021E2D0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiUpdatePageAttributeStamp @ 0x140476CA0 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     MiGetSlabRepurposedStandbyListWorker @ 0x14021C78C (MiGetSlabRepurposedStandbyListWorker.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x14021E35C (MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 */

__int64 __fastcall MiGetSlabAllocatorRepurposedStandbyList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rbx
  unsigned int v8; // eax

  v4 = (int)a2;
  if ( (a3 & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY(a1, a2, a3, a4) + 56) + 80LL);
  v7 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v8 = MI_NODE_FROM_PFN(a1);
  return MiGetSlabRepurposedStandbyListWorker(232 * v4 + 57216LL * v8 + 15696 + *(_QWORD *)(v7 + 16), a1);
}
