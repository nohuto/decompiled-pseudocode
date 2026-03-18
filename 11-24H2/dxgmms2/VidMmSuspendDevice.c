/*
 * XREFs of VidMmSuspendDevice @ 0x140090BA0
 * Callers:
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D59A8 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D5C50 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400D6A1C (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x14008FEC0 (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?VidMmAddToSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400A1394 (-VidMmAddToSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1400D6100 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1400D621C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D7914 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x140103078 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmSuspendDevice(VIDMM_GLOBAL **a1, struct VIDMM_PROCESS **this, unsigned __int8 a3)
{
  __int64 v4; // rbp
  VIDMM_GLOBAL *v5; // rcx
  struct VIDMM_PROCESS *v7; // r15
  __int64 v8; // r8
  struct VIDMM_TASK *v9; // r8
  struct VIDMM_SCHCLASS *v10; // rdx
  __int64 v11; // r15
  _QWORD *v12; // rax
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a3;
  v5 = *a1;
  if ( (*((_BYTE *)v5 + 40937) & 0x10) == 0 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(v5, this[1], (struct VIDMM_DEVICE *)this, 0);
  if ( ((_BYTE)this[39] & 7) == 0 )
  {
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
    if ( (unsigned __int8)v4 >= 3u )
      VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
    v7 = 0LL;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (struct _KTHREAD **)*a1 + 5569);
    LOBYTE(v8) = v4;
    VidMmAddToSuspendList(a1, this, v8);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    if ( (_BYTE)v4 == 1 )
    {
      v9 = (struct VIDMM_TASK *)(this + 40);
      v10 = (struct VIDMM_SCHCLASS *)(a1 + 690);
    }
    else
    {
      if ( (_BYTE)v4 != 3 )
      {
LABEL_12:
        if ( g_IsInternalReleaseOrDbg )
        {
          v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
          v12[4] = 0LL;
          v12[3] = this;
          v12[5] = v4;
          v12[6] = v7;
          WdLogGlobalForLineNumber = 726;
        }
        if ( (byte_140081243 & 1) != 0 )
          McTemplateK0pq_EtwWriteTransfer();
        if ( (*(_DWORD *)(*((_QWORD *)this[3] + 5) + 408LL) & 4) != 0 )
          VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
            (VIDMM_COMMIT_TELEMETRY *)(a1 + 27),
            (struct VIDMM_DEVICE *)this,
            1);
        return;
      }
      v11 = qword_140081570;
      v7 = (struct VIDMM_PROCESS *)(VidMmiQuerySystemTime() + v11);
      v9 = (struct VIDMM_TASK *)(a1 + 725);
      this[27] = v7;
      v10 = (struct VIDMM_SCHCLASS *)(a1 + 685);
    }
    VidMmNotifyTaskWork((struct VIDMM_WORKER_THREAD2 *)a1, v10, v9, 1u);
    goto LABEL_12;
  }
}
