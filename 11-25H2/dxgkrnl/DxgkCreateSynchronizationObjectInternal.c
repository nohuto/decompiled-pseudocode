/*
 * XREFs of DxgkCreateSynchronizationObjectInternal @ 0x1401EF614
 * Callers:
 *     ?CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z @ 0x140099490 (-CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z.c)
 * Callees:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectInternal(unsigned int a1, __int64 a2)
{
  return DxgkCreateSynchronizationObjectImpl(a2, a1, 0LL, 0LL, 0LL);
}
