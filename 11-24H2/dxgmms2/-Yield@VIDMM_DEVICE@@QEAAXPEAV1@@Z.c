/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1400D6BC4
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14003E084 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400D6D28 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D74A4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D7914 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  struct VIDMM_DEVICE *v2; // rbp
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  _QWORD *v9; // rax

  v2 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)this + 40937LL) & 0x10) == 0 )
  {
    v4 = *((_BYTE *)this + 312) & 7;
    *((_QWORD *)this + 30) = a2;
    if ( v4 != 2 )
    {
      if ( v4 )
      {
        if ( v4 == 1 )
          VIDMM_DEVICE::SuspendPagingQueues(this);
      }
      else
      {
        v5 = *((_QWORD *)this + 4);
        if ( v5 )
          VidSchSuspendResumeDevice(v5, 1, 0, 0);
        VIDMM_DEVICE::SuspendPagingQueues(this);
        *((_QWORD *)this + 29) = *((_QWORD *)this + 28) - VidMmiQuerySystemTime();
      }
      LOBYTE(a2) = 2;
      VIDMM_DEVICE::MoveToPenaltyBoxBand(this, a2);
      if ( (byte_140081243 & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer();
    }
    VIDMM_DEVICE::FaultAllAllocations(this);
    v8 = *((_QWORD *)v2 + 28);
    *((_QWORD *)this + 27) = v8;
    if ( g_IsInternalReleaseOrDbg )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6);
      v9[3] = this;
      v9[4] = *((_QWORD *)this + 30);
      v6 = v4;
      v9[5] = v4;
      v9[6] = 3LL;
      v9[7] = v8;
      WdLogGlobalForLineNumber = 2298;
    }
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0ppq_EtwWriteTransfer(
        v6,
        &EventVidMmYieldDevice,
        v7,
        *((_QWORD *)this + 3),
        *((_QWORD *)v2 + 3),
        v8 - *(_DWORD *)(*(_QWORD *)this + 4560LL));
  }
}
