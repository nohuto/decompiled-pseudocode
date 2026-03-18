/*
 * XREFs of ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003E560
 * Callers:
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003DF8C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x14005D4A8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x14005D708 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x140189FE8 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401D804C (-DestroyCoreState@DXGDOORBELL@@IEAAXXZ.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1402FAA68 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
        VIDMM_EXPORT *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        char a3)
{
  struct VIDMM_MONITORED_FENCE_STORAGE *v3; // r9

  v3 = a2;
  LOBYTE(a2) = a3;
  (*(void (__fastcall **)(struct VIDMM_MONITORED_FENCE_STORAGE *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*((_QWORD *)this + 1) + 872LL))(
    v3,
    a2);
}
