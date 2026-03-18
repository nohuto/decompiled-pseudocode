/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019A850
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x140199E78 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x140033A00 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034810 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140037274 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1400684B0 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140206A74 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x14038128C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B920C (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // rcx
  DXGVIRTUALGPUMANAGER *v3; // rcx
  DXGGLOBAL *Global; // rax
  struct _KTHREAD **v5; // rsi
  _QWORD *v6; // r15
  _QWORD *i; // r14
  bool v8; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // edi
  DXGPRESENTHISTORYTOKENQUEUE *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-30h]
  int j; // [rsp+30h] [rbp-28h]
  char v15; // [rsp+60h] [rbp+8h] BYREF
  char v16; // [rsp+61h] [rbp+9h]

  v16 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v15);
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 234);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v2, 0LL);
  v3 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 233);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v3, 0LL);
  if ( *((_QWORD *)this + 113) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 113), 0);
    *((_QWORD *)this + 113) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v5 = (struct _KTHREAD **)((char *)this + 80);
  v6 = (_QWORD *)((char *)this + 296);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 37); i != v6; i = (_QWORD *)*i )
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(
      (DXGPROCESS_RENDER_ADAPTER_INFO *)(i - 11),
      (struct DXGPROCESS *)*(i - 3),
      this);
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    v5 = (struct _KTHREAD **)((char *)this + 80);
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 96) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 16LL))();
    *((_QWORD *)this + 96) = 0LL;
  }
  if ( *((_QWORD *)this + 93) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 32LL))();
    *((_QWORD *)this + 93) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v8 = (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() == 0;
  CurrentThread = KeGetCurrentThread();
  if ( v8 )
    *v5 = CurrentThread;
  else
    *((_QWORD *)this + 10) = CurrentThread;
  while ( (_QWORD *)*v6 != v6 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v6 - 24LL), (struct DXGPROCESS_RENDER_ADAPTER_INFO *)(*v6 - 88LL));
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    *((_QWORD *)this + 10) = 0LL;
  else
    *v5 = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)this + 122, 0);
  DXGPUSHLOCK::AcquireExclusive(v13);
  v10 = 0;
  for ( j = 2; v10 < *((_DWORD *)this + 252); ++v10 )
  {
    v11 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 127) + 8LL * v10);
    if ( v11 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v11);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 127));
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v15);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v15);
}
