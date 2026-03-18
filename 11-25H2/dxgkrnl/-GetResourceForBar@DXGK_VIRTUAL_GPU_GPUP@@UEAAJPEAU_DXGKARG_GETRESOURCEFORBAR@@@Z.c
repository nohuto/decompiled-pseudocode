/*
 * XREFs of ?GetResourceForBar@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z @ 0x140212910
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetResourceForBar@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z @ 0x14020C1B0 (-DdiGetResourceForBar@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETRESOURCEFORBAR@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetResourceForBar(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETRESOURCEFORBAR *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiGetResourceForBar(this[1], a2, a3);
}
