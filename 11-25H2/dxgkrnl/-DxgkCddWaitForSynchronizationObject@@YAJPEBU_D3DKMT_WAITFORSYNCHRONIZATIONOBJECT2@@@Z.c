/*
 * XREFs of ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1402AA550
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x1402AADEC (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z.c)
 */

__int64 __fastcall DxgkCddWaitForSynchronizationObject(const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1)
{
  return DxgkWaitForSynchronizationObjectInternal(a1, 0, 1);
}
