/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403D8128
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403C1254 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x14004C628 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x140055BE0 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x14032B2CC (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?ReportState@DXGHWQUEUE@@IEAAXXZ @ 0x1403F4D04 (-ReportState@DXGHWQUEUE@@IEAAXXZ.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  DXGHWQUEUE *i; // rbx
  DXGDEVICESYNCOBJECT *v6; // rcx
  struct DXGDEVICE **v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v10; // [rsp+80h] [rbp-28h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
  {
    v10 = *(_OWORD *)((char *)this + 200);
    McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
      DWORD1(v10),
      &EventReportContext,
      v10,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 95),
      *((_DWORD *)this + 96),
      (_DWORD)v10,
      DWORD1(v10),
      DWORD2(v10),
      HIDWORD(v10),
      (unsigned int)*(_OWORD *)((char *)this + 216),
      0,
      this,
      *((unsigned int *)this + 6),
      0LL);
  }
  v2 = (char *)this + 16;
  if ( *((_QWORD *)this + 29) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 760LL) + 8LL) + 432LL))();
  if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
  {
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 736LL) + 8LL) + 288LL))();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(
          v3,
          &EventAssociateContext,
          v4,
          this,
          *((_QWORD *)this + 35),
          *((_QWORD *)this + 23),
          *((_QWORD *)this + 24));
    }
    if ( *((_QWORD *)this + 36) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 736LL) + 8LL) + 296LL))();
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 50); i != (DXGCONTEXT *)((char *)this + 400) && i; i = *(DXGHWQUEUE **)i )
      DXGHWQUEUE::ReportState(i);
    v6 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v6 )
      DXGDEVICESYNCOBJECT::ReportState(v6);
    v7 = (struct DXGDEVICE **)((char *)this + 16);
  }
  else
  {
    v7 = (struct DXGDEVICE **)((char *)this + 16);
    if ( *((_QWORD *)this + 32) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 736LL) + 8LL) + 280LL))();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(
          v8,
          &EventAssociateContext,
          v9,
          this,
          *((_QWORD *)this + 32),
          *((_QWORD *)this + 23),
          *((_QWORD *)this + 24));
    }
  }
  if ( !*((_BYTE *)this + 434) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 304));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)*v7 + 2) + 760LL),
      *v7,
      (struct _LIST_ENTRY *)this + 21);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 39) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 304, 0LL);
    KeLeaveCriticalRegion();
  }
}
