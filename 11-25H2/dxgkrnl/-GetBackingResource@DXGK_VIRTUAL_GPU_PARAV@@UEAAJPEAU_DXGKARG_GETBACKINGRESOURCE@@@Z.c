/*
 * XREFs of ?GetBackingResource@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x14020FF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::GetBackingResource(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_GETBACKINGRESOURCE *a2)
{
  __int64 result; // rax

  result = 0LL;
  a2->Resource = 0LL;
  a2->pMdl = 0LL;
  return result;
}
