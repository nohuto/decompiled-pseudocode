/*
 * XREFs of ADAPTER_RENDER_DdiSetContextSchedulingProperties @ 0x140052670
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1403B3EC4 (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetContextSchedulingProperties(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *a2)
{
  return ADAPTER_RENDER::DdiSetContextSchedulingProperties(a1, a2);
}
