/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CF0E0
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE23C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402CEF28 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402CFA78 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003498C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400427E4 (-VidMmEndDmaBufferCPUAccess@VIDMM_EXPORT@@QEAAXPEBUVIDMM_DMA_BUFFER@@@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x14004C0D8 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004CEB0 (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14004F00C (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VidSchFlushContext@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_FLUSH_DATA@@@Z @ 0x140053A40 (-VidSchFlushContext@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_FLUSH_DATA@@@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x14005D708 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x14022A344 (-VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CDD74 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402CE5A0 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1402CF798 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  DXGDEVICESYNCOBJECT *v7; // rcx
  DXGHWQUEUE *i; // rdi
  char v9; // di
  __int64 v10; // rcx
  struct _VIDSCH_CONTEXT *v11; // rdx
  char v12; // di
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct VIDMM_DMA_BUFFER *v15; // rdx
  DXGDEVICESYNCOBJECT *v16; // rcx
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  void *v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // xmm1
  int v21; // edx
  __int64 v22; // r9
  int HostProcess; // eax
  __int64 v24; // [rsp+20h] [rbp-88h]
  __int64 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  int v29; // [rsp+48h] [rbp-60h]
  int v30; // [rsp+50h] [rbp-58h]
  int v31; // [rsp+58h] [rbp-50h]
  __int128 v32; // [rsp+80h] [rbp-28h] BYREF
  __int128 v33; // [rsp+90h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1724;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      1724LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 428) )
  {
    v4 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 428) = 1;
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
    if ( *(_BYTE *)(v5 + 209) && *((_DWORD *)this + 7) )
    {
      HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v4 + 40));
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyContext(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 4664),
        HostProcess,
        *((_DWORD *)this + 7));
      *((_DWORD *)this + 7) = 0;
    }
    ADAPTER_RENDER::RemoveFromCddPrimarySyncContextListSafe(
      *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
      (struct _LIST_ENTRY *)this + 10);
    v7 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v7 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v7);
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 50); i != (DXGCONTEXT *)((char *)this + 400) && i; i = *(DXGHWQUEUE **)i )
      DXGHWQUEUE::DestroyCoreState(i, a2);
    if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 33) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      v10 = *((_QWORD *)this + 32);
      v32 = 0LL;
      LODWORD(v32) = 11;
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 304LL))(
          v10,
          &v32);
      v11 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 33);
      if ( v11 )
        VIDSCH_EXPORT::VidSchFlushContext(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
          v11,
          (struct _VIDSCH_FLUSH_DATA *)&v32);
      if ( v9 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, (const char *)v11);
      if ( *((DXGCONTEXT **)this + 42) != (DXGCONTEXT *)((char *)this + 336)
        || (v12 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 840LL) != *((_QWORD *)this + 2) + 840LL) )
      {
        v12 = 1;
      }
      v13 = *((_QWORD *)this + 32);
      if ( v13 && v12 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 736LL)
                                                            + 8LL)
                                                + 320LL))(
          v13,
          0LL);
      v14 = *((_QWORD *)this + 33);
      if ( v14 && v12 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 736LL)
                                                            + 8LL)
                                                + 320LL))(
          v14,
          0LL);
    }
    if ( *((_QWORD *)this + 60) )
    {
      if ( *((_QWORD *)this + 32) )
        _InterlockedAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 60) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                               + 1032LL))());
      if ( *((_QWORD *)this + 35) )
        _InterlockedAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 60) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL)
                               + 1040LL))());
    }
    if ( *((_QWORD *)this + 44) )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1847;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pCommandBuffer", 1847LL, 0LL, 0LL, 0LL, 0LL);
      }
      VIDMM_EXPORT::VidMmEndDmaBufferCPUAccess(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        *((const struct VIDMM_DMA_BUFFER **)this + 44));
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        *((struct VIDMM_DMA_BUFFER **)this + 44));
      *((_QWORD *)this + 44) = 0LL;
    }
    v15 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
    if ( v15 )
    {
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v15);
      *((_QWORD *)this + 45) = 0LL;
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 424LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    v16 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v16 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v16);
      *((_QWORD *)this + 30) = 0LL;
    }
    if ( *((_QWORD *)this + 34) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 952LL))();
      *((_QWORD *)this + 34) = 0LL;
    }
    if ( *((_QWORD *)this + 32) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 32) = 0LL;
    }
    if ( *((_QWORD *)this + 36) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 264LL))();
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 248LL))();
      *((_QWORD *)this + 35) = 0LL;
    }
    if ( *((_QWORD *)this + 33) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 33) = 0LL;
    }
    v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 61);
    if ( v17 )
    {
      ExDeleteLookasideListEx(v17);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 61));
      *((_QWORD *)this + 61) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v18 = (void *)*((_QWORD *)this + 23);
      if ( v18 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v18);
        *((_QWORD *)this + 23) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v19 = *((unsigned int *)this + 96);
      v20 = *(_OWORD *)((char *)this + 216);
      v21 = *((_DWORD *)this + 95);
      v22 = *((_QWORD *)this + 2);
      v32 = *(_OWORD *)((char *)this + 200);
      v33 = v20;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        v31 = 0;
        v30 = v33;
        v29 = HIDWORD(v32);
        LODWORD(v28) = DWORD2(v32);
        LODWORD(v27) = DWORD1(v32);
        LODWORD(v26) = v32;
        LODWORD(v25) = v19;
        LODWORD(v24) = v21;
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v19,
          &EventDestroyContext,
          v6,
          v22,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          this,
          0LL,
          0LL);
      }
    }
    if ( !*((_BYTE *)this + 429) )
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        this,
        0,
        *((_DWORD *)this + 95));
  }
}
