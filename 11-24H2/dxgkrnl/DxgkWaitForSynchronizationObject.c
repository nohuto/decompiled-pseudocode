/*
 * XREFs of DxgkWaitForSynchronizationObject @ 0x14039A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x14029E0BC (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObject(const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 1, 0LL);
}
