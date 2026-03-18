/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019CD40
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x14019C368 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1400338D0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034740 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140036D88 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x14006817C (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x14020D13C (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x14036CF30 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403AD330 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // rcx
  DXGVIRTUALGPUMANAGER *v3; // rcx
  DXGGLOBAL *Global; // rax
  _QWORD *v5; // rsi
  _QWORD *i; // r14
  __int64 v7; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+51h] [rbp+9h]

  v13 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v12);
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 234);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v2, 0LL);
  v3 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 233);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v3, 0LL);
  if ( *((_QWORD *)this + 113) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 113), 0, 0);
    *((_QWORD *)this + 113) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v5 = (_QWORD *)((char *)this + 296);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 37); i != v5; i = (_QWORD *)*i )
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(
      (DXGPROCESS_RENDER_ADAPTER_INFO *)(i - 11),
      (struct DXGPROCESS *)*(i - 3),
      this);
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
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  while ( (_QWORD *)*v5 != v5 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v5 - 24LL), (struct DXGPROCESS_RENDER_ADAPTER_INFO *)(*v5 - 88LL));
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 122, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v7 = 0LL;
  for ( j = 2; (unsigned int)v7 < *((_DWORD *)this + 252); v7 = (unsigned int)(v7 + 1) )
  {
    v8 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 127) + 8 * v7);
    if ( v8 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v8);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 127));
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v12);
}
