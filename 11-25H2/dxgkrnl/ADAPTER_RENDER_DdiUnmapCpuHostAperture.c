/*
 * XREFs of ADAPTER_RENDER_DdiUnmapCpuHostAperture @ 0x14003E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x140343B10 (-DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiUnmapCpuHostAperture(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_UNMAPCPUHOSTAPERTURE *a2)
{
  return ADAPTER_RENDER::DdiUnmapCpuHostAperture(a1, a2);
}
