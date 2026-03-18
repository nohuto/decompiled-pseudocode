/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B580C
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403B56B0 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004DCCC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x140055390 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1402F7914 (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x140392A80 (-ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403D065C (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1404110F4 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this)
{
  DXGPROCESS *v2; // rbx
  __int64 v3; // rsi
  int v4; // ebp
  int v5; // r14d
  int v6; // r15d
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 ProcessID; // r9
  DXGCONTEXT *i; // rbx

  if ( bTracingEnabled )
  {
    v2 = (DXGPROCESS *)*((_QWORD *)this + 5);
    v3 = *((_QWORD *)this + 14);
    v4 = *((_DWORD *)this + 118);
    v5 = *((_DWORD *)this + 117);
    v6 = *((unsigned __int8 *)this + 1914);
    v7 = *((unsigned __int8 *)this + 1913);
    v8 = *((_DWORD *)this + 116);
    ProcessID = DXGPROCESS::GetProcessID(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        v9,
        &EventReportDevice,
        v10,
        ProcessID,
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        v8,
        this,
        v7,
        v6,
        v5,
        v2,
        v4,
        v3);
  }
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 62); i != (DXGDEVICE *)((char *)this + 496) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i);
  if ( *((_QWORD *)this + 99) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 48LL))();
  if ( *((_QWORD *)this + 100) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 128LL))();
  DXGDEVICE::ReportDeviceAllocations((struct _KTHREAD **)this);
  DXGDEVICE::ReportDeviceResources(this);
  DXGDEVICE::ReportDeviceSyncObjects((ADAPTER_RENDER **)this);
  if ( (*((_BYTE *)this + 1917) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 808));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
      this,
      (struct _LIST_ENTRY *)((char *)this + 840));
    *((_QWORD *)this + 102) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 808, 0LL);
    KeLeaveCriticalRegion();
  }
}
