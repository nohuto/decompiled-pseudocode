/*
 * XREFs of ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x1400462A8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x140029540 (VidSchiSetFlipDevice.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1400D761C (VidSchiEnsureHwFlipQueueLog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *))DxgCoreInterface[24])(
           this,
           a2);
}
