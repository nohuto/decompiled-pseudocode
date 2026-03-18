/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x14008FF6C (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140090370 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidMmSuspendDevices @ 0x1400DF9D0 (VidMmSuspendDevices.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E03E8 (-Suspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E05F4 (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1400E1034 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140018FD8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x14002BAF0 (VidSchSuspendResumeDevice.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037BC4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     VidMmSuspendDevice @ 0x140090BA8 (VidMmSuspendDevice.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400E0F9C (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1400E1FEC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 */

void __fastcall VIDMM_DEVICE::PartiallySuspend(struct VIDMM_PROCESS **this)
{
  struct VIDMM_PROCESS *v2; // rcx
  __int64 v3; // rcx
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax

  v2 = *this;
  if ( (*((_BYTE *)v2 + 40937) & 0x10) != 0 )
  {
    VidMmSuspendDevice(*(VIDMM_GLOBAL ***)v2, this, 1u);
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(v2, this[1], (struct VIDMM_DEVICE *)this, 0);
    v3 = (__int64)this[4];
    v4 = (_BYTE)this[39] & 7;
    if ( v3 )
      VidSchSuspendResumeDevice(v3, 1, 0, 0);
    this[29] = (struct VIDMM_PROCESS *)((char *)this[28] - VidMmiQuerySystemTime());
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64 *)this, 1);
    v5 = *(_QWORD *)*this;
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 && (*(_BYTE *)(v6 + 312) & 7) != 0 )
      *((_BYTE *)this + 58) |= 0x10u;
    if ( g_IsInternalReleaseOrDbg )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
      v7[3] = this;
      v7[4] = v4;
      v7[5] = 1LL;
      WdLogGlobalForLineNumber = 805;
    }
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
  }
}
