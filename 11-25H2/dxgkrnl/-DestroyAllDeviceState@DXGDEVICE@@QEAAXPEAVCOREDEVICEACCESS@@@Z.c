/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403B5958
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403B1998 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403B205C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x140188AE4 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x140188BA8 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1401B73F0 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1402E5BFC (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403349D8 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334CA4 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033599C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x14034FFCC (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x140350240 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1403ABFF8 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1403AC098 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403BE5B8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  struct DXGOVERLAY ****i; // rbx
  struct COREDEVICEACCESS *v5; // r8
  char v6; // bl
  const char *v7; // rdx
  struct DXGCONTEXT ****j; // rbx
  struct DXGPAGINGQUEUE **k; // rbx
  unsigned int v10; // edx
  DXGADAPTER *v11; // rcx
  struct _ERESOURCE *v12; // rcx
  _BYTE v13[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 773;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      773LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 117), *((_QWORD *)this + 5));
  WdLogGlobalForLineNumber = 779;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 432));
  *((_BYTE *)this + 72) = 1;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 55) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 432, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  for ( i = (struct DXGOVERLAY ****)((char *)this + 512);
        *i != (struct DXGOVERLAY ***)i;
        DXGDEVICE::DestroyOverlay(this, *i) )
  {
    ;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  if ( *((_DWORD *)this + 152) == 4 )
  {
    DXGDEVICE::DrainClientResources(this);
    DXGDEVICE::DrainClientAllocations((struct _KTHREAD **)this);
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((struct DXGADAPTER **)this + 235), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 1u, 0);
    if ( *((_QWORD *)this + 100) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v6 = 0;
      }
      else
      {
        v6 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1, 0xFFFFFFFD, 0);
      if ( v6 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v7);
      if ( *((DXGDEVICE **)this + 105) != (DXGDEVICE *)((char *)this + 840) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 152LL))(*((_QWORD *)this + 100));
    }
    DXGDEVICE::DrainResources((struct _KTHREAD **)this);
    DXGDEVICE::DrainAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice(this, a2);
  }
  for ( j = (struct DXGCONTEXT ****)((char *)this + 496);
        *j != (struct DXGCONTEXT ***)j;
        DXGDEVICE::DestroyContext(this, *j, 0LL) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 105) != (DXGDEVICE *)((char *)this + 840) )
  {
    WdLogSingleEntry5(0LL, 275LL, 43LL, this, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 0LL);
    WdLogGlobalForLineNumber = 915;
  }
  for ( k = (struct DXGPAGINGQUEUE **)((char *)this + 528);
        *k != (struct DXGPAGINGQUEUE *)k;
        DXGDEVICE::DestroyPagingQueue(this, *k, v5) )
  {
    ;
  }
  DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  DXGDEVICE::DestroyAllTrackedWorkloads(this);
  v10 = *((_DWORD *)this + 117);
  if ( v10 )
  {
    DXGPROCESS::FreeResourceHandleNoRefSafe(*((DXGPROCESS **)this + 5), v10);
    *((_DWORD *)this + 117) = 0;
  }
  v11 = (DXGADAPTER *)*((_QWORD *)this + 235);
  if ( v11 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
    *((_QWORD *)this + 235) = 0LL;
  }
  v12 = (struct _ERESOURCE *)*((_QWORD *)this + 17);
  if ( v12 )
  {
    ExDeleteResourceLite(v12);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
}
