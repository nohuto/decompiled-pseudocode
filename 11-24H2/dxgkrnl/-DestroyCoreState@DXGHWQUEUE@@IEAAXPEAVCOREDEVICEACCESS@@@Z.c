/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CDD74
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1402BB7A8 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CDB4C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CF0E0 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140051DE8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D8240 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402CE5A0 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403B4F34 (-DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // di
  _QWORD *v7; // r14
  const char *v8; // rdx
  void *v9; // rdx
  DXGDEVICESYNCOBJECT *v10; // rcx
  DXGDEVICESYNCOBJECT *v11; // rcx
  __int64 v12; // rax

  v6 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 89;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetDevice()->GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      89LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    *((_BYTE *)this + 112) = 1;
    return;
  }
  if ( !*((_BYTE *)this + 112) )
  {
    *((_BYTE *)this + 112) = 1;
    if ( *((_QWORD *)this + 18) )
      DXGHWQUEUE::DestroyDoorbell(this, v4, v5);
    if ( !*((_QWORD *)this + 5) )
      goto LABEL_17;
    v7 = (_QWORD *)((char *)this + 40);
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
LABEL_14:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                               + 736LL)
                                                   + 8LL)
                                       + 312LL))(*((_QWORD *)this + 5));
        if ( v6 )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v8);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                               + 736LL)
                                                   + 8LL)
                                       + 264LL))(*((_QWORD *)this + 5));
        *v7 = 0LL;
LABEL_17:
        v9 = (void *)*((_QWORD *)this + 4);
        if ( v9 )
        {
          ADAPTER_RENDER::DdiDestroyHwQueue(*(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), v9);
          *((_QWORD *)this + 4) = 0LL;
        }
        v10 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 9);
        if ( v10 )
          DXGDEVICESYNCOBJECT::DestroyCoreState(v10);
        v11 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 11);
        if ( v11 )
          DXGDEVICESYNCOBJECT::DestroyCoreState(v11);
        v12 = *((_QWORD *)this + 6);
        if ( v12 )
        {
          *(_DWORD *)(v12 + 44) = 0;
          DXGDEVICESYNCOBJECT::DestroyCoreState(*((DXGDEVICESYNCOBJECT **)this + 6));
        }
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              &EventDestroyHwQueue,
              v5,
              *((_QWORD *)this + 2),
              0LL,
              this);
        }
        return;
      }
      v7 = (_QWORD *)((char *)this + 40);
    }
    v6 = 0;
    goto LABEL_14;
  }
}
