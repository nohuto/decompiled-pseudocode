/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334CA4
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401B927C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403B5958 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004E3CC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x140223B28 (-VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334BBC (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x140334FFC (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x140335298 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403354B4 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403356E0 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140335B54 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
  char *v12; // rsi
  int HostProcess; // eax
  __int64 v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]

  if ( *((_QWORD *)this + 239) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1175;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"!pCoreDeviceAccess->IsExclusiveOwner()",
          1175LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    KeWaitForSingleObject(*((PVOID *)this + 239), Executive, 0, 0, 0LL);
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, (const char *)a2);
  }
  for ( i = 0; i < *((_DWORD *)this + 472); *((_QWORD *)this + v5 + 211) = 0LL )
  {
    v5 = i;
    v6 = (ReferenceCounted *)*((_QWORD *)this + i + 195);
    if ( v6 )
    {
      ReferenceCounted::Release(v6);
      *((_QWORD *)this + i + 195) = 0LL;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + i++ + 211));
  }
  for ( j = (DXGPAGINGQUEUE *)*((_QWORD *)this + 66); j != (DXGDEVICE *)((char *)this + 528) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, (struct COREDEVICEACCESS *)a2);
  for ( k = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 68);
        k != (DXGDEVICE *)((char *)this + 544) && k;
        k = *(DXGDEVICESYNCOBJECT **)k )
  {
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  }
  if ( *((_QWORD *)this + 240) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 624LL))();
    *((_QWORD *)this + 240) = 0LL;
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
  v12 = (char *)this + 16;
  if ( *((_QWORD *)this + 100) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)*v11 + 92) + 8LL) + 120LL))();
    *((_QWORD *)this + 100) = 0LL;
    v12 = (char *)this + 16;
  }
  IterateOutputDuplMgrsForRender(this, W32kStub_UserRemoveWindowedSwapChain, this);
  if ( *((_BYTE *)this + 1902) )
  {
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)this + 5), *v11);
    *((_BYTE *)this + 1902) = 0;
  }
  if ( *((_DWORD *)this + 118) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyDevice(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)v12 + 16LL) + 4664LL),
      HostProcess,
      *((_DWORD *)this + 118));
    *((_DWORD *)this + 118) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v16) = *((unsigned __int8 *)this + 1898);
      LODWORD(v15) = *((unsigned __int8 *)this + 1897);
      LODWORD(v14) = *((_DWORD *)this + 116);
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        &EventDestroyDevice,
        *((unsigned __int8 *)this + 1898),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        *(_QWORD *)(*(_QWORD *)v12 + 16LL),
        v14,
        this,
        v15,
        v16,
        *((_DWORD *)this + 117),
        0LL,
        0,
        0LL);
    }
  }
}
