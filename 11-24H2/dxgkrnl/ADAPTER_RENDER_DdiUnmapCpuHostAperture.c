/*
 * XREFs of ADAPTER_RENDER_DdiUnmapCpuHostAperture @ 0x14003DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x140331C90 (-DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUnmapCpuHostAperture(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_UNMAPCPUHOSTAPERTURE *a2)
{
  return ADAPTER_RENDER::DdiUnmapCpuHostAperture(a1, a2);
}
