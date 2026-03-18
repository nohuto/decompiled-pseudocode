/*
 * XREFs of ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x14004BF60
 * Callers:
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140052150 (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x140052888 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetSchedulingLogBuffer(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETSCHEDULINGLOGBUFFER *))DxgCoreInterface[23])(
           this,
           a2);
}
