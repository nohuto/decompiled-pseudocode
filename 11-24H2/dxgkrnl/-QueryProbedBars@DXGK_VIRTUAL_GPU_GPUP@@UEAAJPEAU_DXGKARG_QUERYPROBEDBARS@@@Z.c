/*
 * XREFs of ?QueryProbedBars@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x14021A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryProbedBars@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1402136B0 (-DdiQueryProbedBars@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYPROBEDBARS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryProbedBars(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYPROBEDBARS *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryProbedBars(this[1], a2, a3);
}
