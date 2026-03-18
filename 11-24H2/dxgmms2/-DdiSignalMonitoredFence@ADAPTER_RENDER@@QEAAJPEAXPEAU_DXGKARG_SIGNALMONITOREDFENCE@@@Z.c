/*
 * XREFs of ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x14004B6B8
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140110C24 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSignalMonitoredFence(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_SIGNALMONITOREDFENCE *a3)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *, struct _DXGKARG_SIGNALMONITOREDFENCE *))DxgCoreInterface[38])(
           this,
           a2,
           a3);
}
