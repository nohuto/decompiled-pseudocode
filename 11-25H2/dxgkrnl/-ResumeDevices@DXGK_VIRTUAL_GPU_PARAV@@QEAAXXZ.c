/*
 * XREFs of ?ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x140210480
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x140210A70 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x1400547F0 (-VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::ResumeDevices(DXGK_VIRTUAL_GPU_PARAV *this)
{
  volatile signed __int32 *v1; // rdi
  __int64 **v2; // rsi
  __int64 *i; // rbx

  v1 = (volatile signed __int32 *)((char *)this + 288);
  v2 = (__int64 **)((char *)this + 320);
  DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 39));
    if ( *((_DWORD *)i + 122) == 1 && !*((_BYTE *)i - 48) )
      VIDMM_EXPORT::VidMmSuspendResumeDevice(
        *(VIDMM_EXPORT **)(*(i - 13) + 760),
        (struct VIDMM_DEVICE *)i[84],
        0LL,
        *((_DWORD *)i + 122));
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    i[40] = 0LL;
    ExReleasePushLockExclusiveEx(i + 39, 0LL);
    KeLeaveCriticalRegion();
  }
  _InterlockedDecrement(v1 + 4);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
