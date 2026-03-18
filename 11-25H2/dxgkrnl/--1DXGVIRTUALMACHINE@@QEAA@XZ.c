/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1401E6394
 * Callers:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1400770F8 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this)
{
  struct DXGGLOBAL *Global; // rdi
  char *v3; // rbx
  __int64 v4; // rax
  char **v5; // rdx

  Global = DXGGLOBAL::GetGlobal();
  v3 = (char *)this + 8;
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 488));
  v4 = *((_QWORD *)this + 1);
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)this + 2), *v5 != v3) )
    __fastfail(3u);
  *v5 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  --*((_DWORD *)Global + 418);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)Global + 62) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 488, 0LL);
  KeLeaveCriticalRegion();
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 27));
}
