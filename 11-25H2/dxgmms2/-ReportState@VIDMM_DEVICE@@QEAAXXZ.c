/*
 * XREFs of ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x140100D78
 * Callers:
 *     VidMmReportVidMmDeviceState @ 0x140045A30 (VidMmReportVidMmDeviceState.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140100C64 (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140018FD8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x140100E60 (-ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::ReportState(VIDMM_DEVICE *this)
{
  __int64 v1; // rdx
  unsigned int j; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  VIDMM_DEVICE *i; // rdi
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, (struct _KTHREAD **)(v1 + 48));
    for ( i = (VIDMM_DEVICE *)*((_QWORD *)this + 19); i != (VIDMM_DEVICE *)((char *)this + 152); i = *(VIDMM_DEVICE **)i )
    {
      if ( *((int *)i + 10) > 0 && (byte_140081241 & 0x20) != 0 )
        McTemplateK0pq_EtwWriteTransfer();
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  }
  for ( j = 0; j < *((_DWORD *)this + 15); ++j )
  {
    v4 = *((_QWORD *)this + 9);
    if ( v4 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v4 + 32LL * j));
    v5 = *((_QWORD *)this + 10);
    v6 = 32LL * j;
    if ( v5 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v5 + v6));
    v7 = *((_QWORD *)this + 11);
    if ( v7 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v7 + v6));
  }
}
