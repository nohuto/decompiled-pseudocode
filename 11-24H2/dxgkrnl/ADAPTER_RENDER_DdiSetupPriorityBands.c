/*
 * XREFs of ADAPTER_RENDER_DdiSetupPriorityBands @ 0x14006BE60
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1401A94C8 (-DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetupPriorityBands(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETUPPRIORITYBANDS *a2)
{
  return ADAPTER_RENDER::DdiSetupPriorityBands(a1, a2);
}
