/*
 * XREFs of ?SuspendDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x140216FEC
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1402170D0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x140054440 (-VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::SuspendDevices(DXGK_VIRTUAL_GPU_PARAV *this)
{
  volatile signed __int32 *v1; // rdi
  __int64 **v2; // rsi
  __int64 *i; // rbx
  __int64 v4; // r8

  v1 = (volatile signed __int32 *)((char *)this + 288);
  v2 = (__int64 **)((char *)this + 320);
  DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 39));
    if ( *((_DWORD *)i + 122) == 1 && !*((_BYTE *)i - 48) )
    {
      LOBYTE(v4) = *((_DWORD *)i + 122);
      VIDMM_EXPORT::VidMmSuspendResumeDevice(*(VIDMM_EXPORT **)(*(i - 13) + 760), (struct VIDMM_DEVICE *)i[84], v4, v4);
    }
    i[40] = 0LL;
    ExReleasePushLockExclusiveEx(i + 39, 0LL);
    KeLeaveCriticalRegion();
  }
  _InterlockedDecrement(v1 + 4);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
