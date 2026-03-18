/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403C1254
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403C10F8 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004E3CC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x140055BE0 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x14032B22C (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x14039BBC0 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x14039BC64 (-ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403D8128 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this)
{
  DXGCONTEXT *i; // rbx
  int v3; // [rsp+28h] [rbp-50h]
  int v4; // [rsp+38h] [rbp-40h]
  int v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+58h] [rbp-20h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
  {
    v7 = *((_DWORD *)this + 118);
    v6 = *((_DWORD *)this + 117);
    v5 = *((unsigned __int8 *)this + 1898);
    v4 = *((unsigned __int8 *)this + 1897);
    v3 = *((_DWORD *)this + 116);
    McTemplateK0ppqpttqpqp_EtwWriteTransfer(
      (__int64)this,
      &EventReportDevice,
      *((unsigned __int8 *)this + 1898),
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      v3,
      this,
      v4,
      v5,
      v6,
      *((_QWORD *)this + 5),
      v7,
      *((_QWORD *)this + 14));
  }
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 62); i != (DXGDEVICE *)((char *)this + 496) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i);
  if ( *((_QWORD *)this + 99) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 48LL))();
  if ( *((_QWORD *)this + 100) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 128LL))();
  DXGDEVICE::ReportDeviceAllocations((struct _KTHREAD **)this);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  DXGDEVICE::ReportDeviceSyncObjects((ADAPTER_RENDER **)this);
  if ( (*((_BYTE *)this + 1901) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 808));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
      this,
      (struct _LIST_ENTRY *)((char *)this + 840));
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 102) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 808, 0LL);
    KeLeaveCriticalRegion();
  }
}
