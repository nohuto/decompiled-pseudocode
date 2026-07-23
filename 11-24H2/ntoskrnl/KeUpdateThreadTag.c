/*
 * XREFs of KeUpdateThreadTag @ 0x14046E3F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiEndThreadCycleAccumulation @ 0x14036B600 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14036D230 (KiStartThreadCycleAccumulation.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     KiSendSoftwareInterrupt @ 0x14040F180 (KiSendSoftwareInterrupt.c)
 *     KiIpiSendPacket @ 0x14045D668 (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x14045F44C (KiIpiStallOnPacketTargets.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage @ 0x140473460 (Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  char v3; // r13
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  char v6; // r15
  char v7; // r12
  char v8; // al
  struct _KPRCB *v9; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int v13; // r14d
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r9
  __int64 *v17; // r13
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v23; // al
  int v24; // r12d
  char v25; // cl
  int v26; // ebx
  __int64 CurrentIrql; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  int v32; // r15d
  __int64 v33; // rbx
  unsigned int v34; // edx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 *v37; // r13
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // edx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 *v44; // r13
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // rcx
  int v49; // eax
  __int64 result; // rax
  unsigned __int8 v51[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v52; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v53; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+3Ch] [rbp-C4h] BYREF
  int v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h] BYREF
  struct _KPRCB *v57; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v58; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v59; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v60; // [rsp+68h] [rbp-98h] BYREF
  volatile __int64 *v61; // [rsp+70h] [rbp-90h] BYREF
  struct _KPRCB *v62; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  __int128 v65; // [rsp+90h] [rbp-70h] BYREF
  __int128 v66; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v67[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v68[264]; // [rsp+B8h] [rbp-48h] BYREF
  int v69; // [rsp+218h] [rbp+118h] BYREF

  v69 = a2;
  memset_0(v68, 0, 0x100uLL);
  v3 = 0;
  v51[0] = 0;
  v61 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, v51);
  if ( *(unsigned __int8 *)(a1 + 124) == v69 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_56;
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 0;
    v7 = 0;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL, 0);
    v8 = v69;
    if ( v69 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v8;
    KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
    v9 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v9->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    _enable();
    v13 = KiComputeThreadQos(a1);
    if ( v13 != *(unsigned __int8 *)(a1 + 516) )
    {
      v66 = 0LL;
      v57 = CurrentPrcb;
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1LL, (unsigned __int64 *)&v56);
      *(_BYTE *)(a1 + 516) = v13;
      if ( !CurrentPrcb->NextThread )
      {
        v15 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
        v62 = CurrentPrcb;
        v58 = 0LL;
        v52 = 0;
        KiPrcbArrayForIsolationWidth((__int64)&v62, v15, &v58, &v52);
        if ( v52 )
        {
          v17 = v58;
          v18 = v52;
          do
          {
            v19 = *v17;
            v20 = *(_QWORD *)(*v17 + 56);
            *(_BYTE *)(v20 + 64) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v20 + 64)) & 7;
            KiUpdateThreadQosGroupingSummaries(v19, v20, v19, v16);
            ++v17;
            --v18;
          }
          while ( v18 );
          v7 = 0;
        }
      }
      KiReleaseThreadStateLock(v14, (__int64)CurrentPrcb, &v56, 0LL, (volatile signed __int64 **)&v66);
    }
    Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
    if ( v13 == 4 )
    {
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(a1, (__int64)CurrentPrcb, 1) )
      {
        CurrentPrcb->QuantumEnd = 1;
        v6 = 1;
      }
      else
      {
        v7 = 1;
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
    if ( v6 )
      KiSendSoftwareInterrupt(CurrentPrcb->Number, 2);
    if ( v7 )
      KeCheckAndApplyBamQos((__int64)CurrentPrcb, a1, v21, v22);
    goto LABEL_56;
  }
  v65 = 0LL;
  v23 = KiAcquireThreadStateLockForWrite(a1, (__int64 *)&v57, &v56, &v61, (volatile signed __int64 **)&v65);
  v24 = v23;
  if ( v23 == 2 || *(_BYTE *)(a1 + 113) )
  {
    v26 = *(_DWORD *)(a1 + 536);
    v67[1] = 0;
    v67[0] = 2097153;
    memset_0(v68, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v67, v26 & 0x7FFFFFFF);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
    KiIpiSendPacket(0, (char *)v67, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v69, 0LL);
    KiIpiStallOnPacketTargets(v28);
    if ( KiIrqlFlags )
    {
      LOBYTE(v29) = 2;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
    }
    __writecr8(2uLL);
  }
  else
  {
    v25 = v69;
    if ( v69 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v25;
  }
  v30 = KiComputeThreadQos(a1);
  v31 = *(unsigned __int8 *)(a1 + 516);
  v32 = v30;
  v33 = (__int64)v57;
  v55 = v30;
  if ( v30 != v31 )
  {
    *(_BYTE *)(a1 + 516) = v30;
    if ( v24 == 2 )
    {
      if ( *(_QWORD *)(v33 + 16) )
        goto LABEL_49;
      v41 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
      v64 = v33;
      v60 = 0LL;
      v54 = 0;
      KiPrcbArrayForIsolationWidth((__int64)&v64, v41, &v60, &v54);
      v43 = v54;
      if ( !v54 )
        goto LABEL_49;
      v44 = v60;
      v45 = v54;
      do
      {
        v46 = *v44;
        v47 = *(_QWORD *)(*v44 + 56);
        LOBYTE(v43) = *(_BYTE *)(v47 + 64) ^ (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v47 + 64)) & 7;
        *(_BYTE *)(v47 + 64) = v43;
        KiUpdateThreadQosGroupingSummaries(v46, v43, v47, v42);
        ++v44;
        --v45;
      }
      while ( v45 );
    }
    else
    {
      if ( v24 != 3 )
        goto LABEL_49;
      v34 = *(_DWORD *)(a1 + 120);
      v59 = 0LL;
      v53 = 0;
      v63 = v33;
      KiPrcbArrayForIsolationWidth((__int64)&v63, (v34 >> 1) & 1, &v59, &v53);
      v36 = v53;
      if ( !v53 )
        goto LABEL_49;
      v37 = v59;
      v38 = v53;
      do
      {
        v39 = *v37;
        v40 = *(_QWORD *)(*v37 + 56);
        LOBYTE(v36) = *(_BYTE *)(v40 + 64) ^ (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v40 + 64)) & 7;
        *(_BYTE *)(v40 + 64) = v36;
        KiUpdateThreadQosGroupingSummaries(v39, v36, v40, v35);
        ++v37;
        --v38;
      }
      while ( v38 );
    }
    v3 = 0;
    v32 = v55;
  }
LABEL_49:
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( (_BYTE)v24 == 2 && v32 == 4 )
  {
    v49 = KiCheckPreferredHeteroProcessor(a1, v33, 1);
    if ( KeHeteroSystemQos || v49 )
    {
      *(_BYTE *)(v33 + 14521) = 1;
      v3 = 1;
    }
  }
  KiReleaseThreadStateLock(v48, v33, &v56, v61, (volatile signed __int64 **)&v65);
  *(_QWORD *)(a1 + 64) = 0LL;
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( v3 )
    KiSendSoftwareInterrupt(*(_DWORD *)(v33 + 36), 2);
LABEL_56:
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v51[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  result = v51[0];
  __writecr8(v51[0]);
  return result;
}
