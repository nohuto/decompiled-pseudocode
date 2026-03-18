/*
 * XREFs of DxgkSubmitSignalSyncObjectsToHwQueue @ 0x14039CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x14029D7B8 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueue(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkSubmitSignalSyncObjectsToHwQueueInternal(a1, 1, a3);
}
