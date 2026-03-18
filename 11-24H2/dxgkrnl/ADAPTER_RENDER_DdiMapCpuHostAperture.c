/*
 * XREFs of ADAPTER_RENDER_DdiMapCpuHostAperture @ 0x14003B810
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x14032CD30 (-DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiMapCpuHostAperture(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_MAPCPUHOSTAPERTURE *a2)
{
  return ADAPTER_RENDER::DdiMapCpuHostAperture(a1, a2);
}
