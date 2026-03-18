/*
 * XREFs of ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x14020FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1403968EC (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::DestroyVirtualGpu(struct _KTHREAD **this, struct DXGK_VIRTUAL_GPU *a2)
{
  DXGPUSHLOCK *v2; // rsi
  __int64 v5; // rbp
  struct DXGK_VIRTUAL_GPU **v6; // r8
  struct DXGK_VIRTUAL_GPU **v7; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v2 = (DXGPUSHLOCK *)(this + 5);
  v10 = (char *)(this + 5);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  if ( this[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v2);
    v11 = 2;
  }
  v5 = *((unsigned int *)a2 + 6);
  --*((_DWORD *)this + 4);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 9));
  v6 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 15);
  if ( v6[1] != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 120)
    || (v7 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 16), *v7 != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 120)) )
  {
    __fastfail(3u);
  }
  *v7 = (struct DXGK_VIRTUAL_GPU *)v6;
  v6[1] = (struct DXGK_VIRTUAL_GPU *)v7;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  this[10] = 0LL;
  ExReleasePushLockExclusiveEx(this + 9, 0LL);
  KeLeaveCriticalRegion();
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 8LL))(a2);
  DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(a2);
  *((_QWORD *)this[3] + v5) = 0LL;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  return 0LL;
}
