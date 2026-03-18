/*
 * XREFs of ?GetBackingResource@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x140218EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetBackingResource@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x140211E10 (-DdiGetBackingResource@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETBACKINGRESOURCE@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetBackingResource(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETBACKINGRESOURCE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetBackingResource(this[1], a2, a3);
}
