/*
 * XREFs of ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x14004BFA8
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x140111EAC (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
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
