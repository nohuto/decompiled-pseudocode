/*
 * XREFs of ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x140049A30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisFreeSharedMemoryInternal @ 0x140049C20 (ndisFreeSharedMemoryInternal.c)
 */

void __fastcall ndisMQueuedFreeSharedHandler(_QWORD *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)a1[4];
  ndisFreeSharedMemoryInternal((ULONG_PTR)v1, a1[8]);
  ndisDereferenceMiniport(v1, 0x42u);
}
