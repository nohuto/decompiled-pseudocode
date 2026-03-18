/*
 * XREFs of ADAPTER_RENDER_DdiNotifyContextPriorityChange @ 0x14006BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiNotifyContextPriorityChange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE@@@Z @ 0x1401A6698 (-DdiNotifyContextPriorityChange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE@@@.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiNotifyContextPriorityChange(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_NOTIFYCONTEXTPRIORITYCHANGE *a2)
{
  return ADAPTER_RENDER::DdiNotifyContextPriorityChange(a1, a2);
}
