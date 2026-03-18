/*
 * XREFs of ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D59A8
 * Callers:
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400D5988 (-Suspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x140040F4C (VidSchDeviceQueuesNotEmpty.c)
 *     VidMmSuspendDevice @ 0x140090BA0 (VidMmSuspendDevice.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1400D6100 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1400D621C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D7914 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140100988 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::FullySuspend(VIDMM_DEVICE *this)
{
  struct VIDMM_PROCESS *v2; // rcx
  unsigned __int8 v3; // si
  unsigned __int8 v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  char v12; // [rsp+38h] [rbp-30h]
  _BYTE v13[32]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(struct VIDMM_PROCESS **)this;
  if ( (*((_BYTE *)v2 + 40937) & 0x10) != 0 )
  {
    VidMmSuspendDevice(*(VIDMM_GLOBAL ***)v2, (struct VIDMM_PROCESS **)this, 3u);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(v2, *((struct VIDMM_PROCESS **)this + 1), this, 0);
    v3 = 4;
    v4 = *((_BYTE *)this + 312) & 7;
    if ( !v4 )
    {
      v5 = *((_QWORD *)this + 4);
      if ( v5 )
        VidSchSuspendResumeDevice(v5, 1, 0, 0);
    }
    VIDMM_DEVICE::SuspendPagingQueues(this);
    *((_QWORD *)this + 29) = qword_140081580;
    v11 = **(_QWORD **)this + 184LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    v6 = (struct _KTHREAD **)(*(_QWORD *)this + 44552LL);
    v12 = 1;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, v6);
    if ( VidSchDeviceQueuesNotEmpty(*((_QWORD *)this + 4)) || *((_DWORD *)this + 16) )
      v3 = 3;
    LOBYTE(v7) = v3;
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, v7);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v11);
    if ( (*((_BYTE *)this + 58) & 4) != 0 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 44696LL);
      *((_BYTE *)this + 58) &= ~4u;
    }
    v8 = qword_140081570;
    v9 = VidMmiQuerySystemTime() + v8;
    *((_QWORD *)this + 27) = v9;
    if ( g_IsInternalReleaseOrDbg )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v10[4] = v4;
      v10[5] = v3;
      v10[3] = this;
      v10[6] = v9;
      WdLogGlobalForLineNumber = 899;
    }
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 408LL) & 4) != 0 )
      VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent((VIDMM_COMMIT_TELEMETRY *)(**(_QWORD **)this + 216LL), this, 1);
  }
}
