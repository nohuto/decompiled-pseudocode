/*
 * XREFs of ADAPTER_RENDER_DdiSetFlipQueueLogBuffer @ 0x14006BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x1401A7F68 (-DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetFlipQueueLogBuffer(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *a2)
{
  return ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(a1, a2);
}
