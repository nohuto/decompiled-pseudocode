/*
 * XREFs of ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1402069C0
 * Callers:
 *     ??_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z @ 0x14007A470 (--_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(DXGVIRTUALGPUMANAGER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // r15
  char *v3; // rbx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER *)((char *)this + 40));
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 13);
  while ( v2 != (DXGVIRTUALGPUMANAGER *)((char *)this + 104) )
  {
    v3 = (char *)v2 - 120;
    v2 = *(DXGVIRTUALGPUMANAGER **)v2;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
    (**(void (__fastcall ***)(char *, __int64))v3)(v3, 1LL);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 3));
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 6) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
}
