/*
 * XREFs of ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x140054440
 * Callers:
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1401EE050 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 *     ?ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x140216AE8 (-ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?SuspendDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x140216FEC (-SuspendDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403BAAD8 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmSuspendResumeDevice(
        VIDMM_EXPORT *this,
        struct VIDMM_DEVICE *a2,
        __int64 a3,
        char a4)
{
  char v4; // r10
  struct VIDMM_DEVICE *v5; // r11

  v4 = a3;
  v5 = a2;
  LOBYTE(a3) = a4;
  LOBYTE(a2) = v4;
  (*(void (__fastcall **)(struct VIDMM_DEVICE *, struct VIDMM_DEVICE *, __int64))(*((_QWORD *)this + 1) + 1064LL))(
    v5,
    a2,
    a3);
}
