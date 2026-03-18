/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE23C
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401BBA38 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7C64 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004DCCC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x14022A414 (-VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE154 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402CE5A0 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402CE84C (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402CEA6C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1402CEC6C (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CF0E0 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(DXGDEVICE *this, PERESOURCE **a2)
{
  unsigned int i; // edi
  __int64 v5; // rbp
  ReferenceCounted *v6; // rcx
  DXGPAGINGQUEUE *j; // rdi
  DXGDEVICESYNCOBJECT *k; // rdi
  DXGCONTEXT *m; // rdi
  void *v10; // rdx
  ADAPTER_RENDER **v11; // rdi
  __int64 *v12; // rsi
  int v13; // edi
  int v14; // ebp
  int v15; // r14d
  int v16; // r15d
  __int64 ProcessID; // rax
  int HostProcess; // eax
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+48h] [rbp-40h]
  int v23; // [rsp+58h] [rbp-30h]

  if ( *((_QWORD *)this + 241) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1192;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"!pCoreDeviceAccess->IsExclusiveOwner()",
          1192LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    KeWaitForSingleObject(*((PVOID *)this + 241), Executive, 0, 0, 0LL);
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, (const char *)a2);
  }
  for ( i = 0; i < *((_DWORD *)this + 476); *((_QWORD *)this + v5 + 213) = 0LL )
  {
    v5 = i;
    v6 = (ReferenceCounted *)*((_QWORD *)this + i + 197);
    if ( v6 )
    {
      ReferenceCounted::Release(v6);
      *((_QWORD *)this + i + 197) = 0LL;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + i++ + 213));
  }
  for ( j = (DXGPAGINGQUEUE *)*((_QWORD *)this + 66); j != (DXGDEVICE *)((char *)this + 528) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, (struct COREDEVICEACCESS *)a2);
  for ( k = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 68);
        k != (DXGDEVICE *)((char *)this + 544) && k;
        k = *(DXGDEVICESYNCOBJECT **)k )
  {
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  }
  if ( *((_QWORD *)this + 242) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 624LL))();
    *((_QWORD *)this + 242) = 0LL;
  }
  for ( m = (DXGCONTEXT *)*((_QWORD *)this + 62); m != (DXGDEVICE *)((char *)this + 496) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (struct COREDEVICEACCESS *)a2);
  v10 = (void *)*((_QWORD *)this + 77);
  v11 = (ADAPTER_RENDER **)((char *)this + 16);
  if ( v10 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(*v11, v10);
    *((_QWORD *)this + 77) = 0LL;
  }
  if ( *((_QWORD *)this + 99) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)*v11 + 95) + 8LL) + 376LL))();
    *((_QWORD *)this + 99) = 0LL;
  }
  v12 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 100) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)*v11 + 92) + 8LL) + 120LL))();
    *((_QWORD *)this + 100) = 0LL;
    v12 = (__int64 *)((char *)this + 16);
  }
  IterateOutputDuplMgrsForRender(this, W32kStub_UserRemoveWindowedSwapChain, this);
  if ( *((_BYTE *)this + 1918) )
  {
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)this + 5), *v11);
    *((_BYTE *)this + 1918) = 0;
  }
  if ( *((_DWORD *)this + 118) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyDevice(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*v12 + 16) + 4664LL),
      HostProcess,
      *((_DWORD *)this + 118));
    *((_DWORD *)this + 118) = 0;
  }
  if ( bTracingEnabled )
  {
    v13 = *((_DWORD *)this + 117);
    v14 = *((unsigned __int8 *)this + 1914);
    v15 = *((unsigned __int8 *)this + 1913);
    v16 = *((_DWORD *)this + 116);
    ProcessID = DXGPROCESS::GetProcessID(*((DXGPROCESS **)this + 5));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      v23 = 0;
      v22 = v13;
      LODWORD(v21) = v14;
      LODWORD(v20) = v15;
      LODWORD(v19) = v16;
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        *v12,
        &EventDestroyDevice,
        *(_QWORD *)(*v12 + 16),
        ProcessID,
        *(_QWORD *)(*v12 + 16),
        v19,
        this,
        v20,
        v21,
        v22,
        0LL,
        v23,
        0LL);
    }
  }
}
