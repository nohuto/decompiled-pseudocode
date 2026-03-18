/*
 * XREFs of ADAPTER_RENDER_DdiSetSchedulingLogBuffer @ 0x14006BE20
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x1401A868C (-DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetSchedulingLogBuffer(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *a2)
{
  return ADAPTER_RENDER::DdiSetSchedulingLogBuffer(a1, a2);
}
