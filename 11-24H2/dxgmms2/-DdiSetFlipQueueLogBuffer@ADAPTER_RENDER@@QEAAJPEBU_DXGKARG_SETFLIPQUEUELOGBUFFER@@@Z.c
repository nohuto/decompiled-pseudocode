/*
 * XREFs of ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x140044478
 * Callers:
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1400D327C (VidSchiEnsureHwFlipQueueLog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETFLIPQUEUELOGBUFFER *))DxgCoreInterface[24])(
           this,
           a2);
}
