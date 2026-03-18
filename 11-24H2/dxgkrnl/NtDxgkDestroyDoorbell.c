/*
 * XREFs of NtDxgkDestroyDoorbell @ 0x1401DB300
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z @ 0x1401D9494 (-DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z.c)
 */

__int64 __fastcall NtDxgkDestroyDoorbell(struct _D3DKMT_DESTROY_DOORBELL *a1, __int64 a2, __int64 a3)
{
  return DxgkDestroyDoorbellInternal(a1, a2, a3);
}
