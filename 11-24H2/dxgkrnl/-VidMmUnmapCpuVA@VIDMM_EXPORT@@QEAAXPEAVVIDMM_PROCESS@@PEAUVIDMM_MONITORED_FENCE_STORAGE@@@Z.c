/*
 * XREFs of ?VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004A2DC
 * Callers:
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x14018A9CC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401D804C (-DestroyCoreState@DXGDOORBELL@@IEAAXXZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1402CD2EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmUnmapCpuVA(
        VIDMM_EXPORT *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  (*(void (__fastcall **)(struct VIDMM_PROCESS *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*((_QWORD *)this + 1) + 904LL))(
    a2,
    a3);
}
