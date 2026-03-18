/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D5C50
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x14008FF64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140090368 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400D5988 (-Suspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D5B8C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1400D6D94 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEBV1@GGW4VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     VidMmSuspendDevices @ 0x1400EA5C0 (VidMmSuspendDevices.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     VidMmSuspendDevice @ 0x140090BA0 (VidMmSuspendDevice.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1400D6100 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400D6D28 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::PartiallySuspend(struct VIDMM_PROCESS **this)
{
  struct VIDMM_PROCESS *v2; // rcx
  __int64 v3; // rcx
  unsigned __int8 v4; // di
  __int64 SystemTime; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax

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
    SystemTime = VidMmiQuerySystemTime();
    LOBYTE(v6) = 1;
    this[29] = (struct VIDMM_PROCESS *)((char *)this[28] - SystemTime);
    VIDMM_DEVICE::MoveToPenaltyBoxBand(this, v6);
    v7 = *(_QWORD *)*this;
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 && (*(_BYTE *)(v8 + 312) & 7) != 0 )
      *((_BYTE *)this + 58) |= 0x10u;
    if ( g_IsInternalReleaseOrDbg )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7);
      v9[3] = this;
      v9[4] = v4;
      v9[5] = 1LL;
      WdLogGlobalForLineNumber = 806;
    }
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
  }
}
