/*
 * XREFs of ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E0C88
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1400E0B34 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140018FD8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x14002BAF0 (VidSchSuspendResumeDevice.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x14004254C (VidSchDeviceQueuesNotEmpty.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     VidMmSuspendDevice @ 0x140090BA8 (VidMmSuspendDevice.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E194C (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1400E1FEC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140101B10 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::IndefinitelySuspend(VIDMM_DEVICE *this, char a2)
{
  struct VIDMM_PROCESS *v4; // rcx
  unsigned __int8 v5; // di
  unsigned __int8 v6; // r14
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  _QWORD *v12; // rax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+38h] [rbp-30h]
  _BYTE v15[32]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(struct VIDMM_PROCESS **)this;
  if ( (*((_BYTE *)v4 + 40937) & 0x10) != 0 )
  {
    VidMmSuspendDevice(*(VIDMM_GLOBAL ***)v4, (struct VIDMM_PROCESS **)this, 4u);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(v4, *((struct VIDMM_PROCESS **)this + 1), this, 0);
    v5 = 4;
    v6 = *((_BYTE *)this + 312) & 7;
    if ( !v6 )
    {
      v7 = *((_QWORD *)this + 4);
      if ( v7 )
        VidSchSuspendResumeDevice(v7, 1, 0, 0);
    }
    VIDMM_DEVICE::SuspendPagingQueues(this);
    v13 = **(_QWORD **)this + 184LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v8 = (struct _KTHREAD **)(*(_QWORD *)this + 44552LL);
    v14 = 1;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, v8);
    if ( a2 == 1 && (VidSchDeviceQueuesNotEmpty(*((_QWORD *)this + 4)) || *((_DWORD *)this + 16)) )
      v5 = 3;
    LOBYTE(v9) = v5;
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, v9);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v13);
    v11 = (*((_BYTE *)this + 58) & 4) == 0;
    *((_BYTE *)this + 56) = a2;
    if ( !v11 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 44696LL);
      *((_BYTE *)this + 58) &= ~4u;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v10);
      v12[4] = v6;
      v12[5] = v5;
      v12[3] = this;
      v12[6] = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 998;
    }
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
  }
}
