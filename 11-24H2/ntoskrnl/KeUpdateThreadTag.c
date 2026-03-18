/*
 * XREFs of KeUpdateThreadTag @ 0x140472120
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeThreadQos @ 0x14029A450 (KiComputeThreadQos.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14029D8F0 (KiCheckPreferredHeteroProcessor.c)
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiEndThreadCycleAccumulation @ 0x14034D120 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14034ED50 (KiStartThreadCycleAccumulation.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403F52C0 (KiPrcbArrayForIsolationWidth.c)
 *     KiSendSoftwareInterrupt @ 0x14041B640 (KiSendSoftwareInterrupt.c)
 *     KiIpiSendPacket @ 0x1404656E8 (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x1404679AC (KiIpiStallOnPacketTargets.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage @ 0x140476EC0 (Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E9670 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  unsigned __int8 v21; // al
  int v22; // r12d
  char v23; // cl
  int v24; // ebx
  __int64 CurrentIrql; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // ecx
  int v30; // r15d
  __int64 v31; // rbx
  unsigned int v32; // edx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 *v35; // r13
  __int64 v36; // r15
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 *v42; // r13
  __int64 v43; // r15
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  int v47; // eax
  __int64 result; // rax
  unsigned __int8 v49[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v50; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-C4h] BYREF
  int v53; // [rsp+40h] [rbp-C0h]
  __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  struct _KPRCB *v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v57; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v58; // [rsp+68h] [rbp-98h] BYREF
  volatile __int64 *v59; // [rsp+70h] [rbp-90h] BYREF
  struct _KPRCB *v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  __int64 v62; // [rsp+88h] [rbp-78h] BYREF
  __int128 v63; // [rsp+90h] [rbp-70h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v65[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v66[264]; // [rsp+B8h] [rbp-48h] BYREF
  int v67; // [rsp+218h] [rbp+118h] BYREF

  v67 = a2;
  memset_0(v66, 0, 0x100uLL);
  v3 = 0;
  v49[0] = 0;
  v59 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, v49);
  if ( *(unsigned __int8 *)(a1 + 124) == v67 )
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
    v8 = v67;
    if ( v67 )
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
      v64 = 0LL;
      v55 = CurrentPrcb;
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, (unsigned __int64 *)&v54);
      *(_BYTE *)(a1 + 516) = v13;
      if ( !CurrentPrcb->NextThread )
      {
        v15 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
        v60 = CurrentPrcb;
        v56 = 0LL;
        v50 = 0;
        KiPrcbArrayForIsolationWidth((__int64)&v60, v15, &v56, &v50);
        if ( v50 )
        {
          v17 = v56;
          v18 = v50;
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
      KiReleaseThreadStateLock(v14, (__int64)CurrentPrcb, &v54, 0LL, (volatile signed __int64 **)&v64);
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
      KeCheckAndApplyBamQos((__int64)CurrentPrcb, a1);
    goto LABEL_56;
  }
  v63 = 0LL;
  v21 = KiAcquireThreadStateLockForWrite(a1, (__int64 *)&v55, &v54, &v59, (volatile signed __int64 **)&v63);
  v22 = v21;
  if ( v21 == 2 || *(_BYTE *)(a1 + 113) )
  {
    v24 = *(_DWORD *)(a1 + 536);
    v65[1] = 0;
    v65[0] = 2097153;
    memset_0(v66, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v65, v24 & 0x7FFFFFFF);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
    KiIpiSendPacket(0, (char *)v65, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v67, 0LL);
    KiIpiStallOnPacketTargets(v26);
    if ( KiIrqlFlags )
    {
      LOBYTE(v27) = 2;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
    }
    __writecr8(2uLL);
  }
  else
  {
    v23 = v67;
    if ( v67 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v23;
  }
  v28 = KiComputeThreadQos(a1);
  v29 = *(unsigned __int8 *)(a1 + 516);
  v30 = v28;
  v31 = (__int64)v55;
  v53 = v28;
  if ( v28 != v29 )
  {
    *(_BYTE *)(a1 + 516) = v28;
    if ( v22 == 2 )
    {
      if ( *(_QWORD *)(v31 + 16) )
        goto LABEL_49;
      v39 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
      v62 = v31;
      v58 = 0LL;
      v52 = 0;
      KiPrcbArrayForIsolationWidth((__int64)&v62, v39, &v58, &v52);
      v41 = v52;
      if ( !v52 )
        goto LABEL_49;
      v42 = v58;
      v43 = v52;
      do
      {
        v44 = *v42;
        v45 = *(_QWORD *)(*v42 + 56);
        LOBYTE(v41) = *(_BYTE *)(v45 + 64) ^ (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v45 + 64)) & 7;
        *(_BYTE *)(v45 + 64) = v41;
        KiUpdateThreadQosGroupingSummaries(v44, v41, v45, v40);
        ++v42;
        --v43;
      }
      while ( v43 );
    }
    else
    {
      if ( v22 != 3 )
        goto LABEL_49;
      v32 = *(_DWORD *)(a1 + 120);
      v57 = 0LL;
      v51 = 0;
      v61 = v31;
      KiPrcbArrayForIsolationWidth((__int64)&v61, (v32 >> 1) & 1, &v57, &v51);
      v34 = v51;
      if ( !v51 )
        goto LABEL_49;
      v35 = v57;
      v36 = v51;
      do
      {
        v37 = *v35;
        v38 = *(_QWORD *)(*v35 + 56);
        LOBYTE(v34) = *(_BYTE *)(v38 + 64) ^ (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v38 + 64)) & 7;
        *(_BYTE *)(v38 + 64) = v34;
        KiUpdateThreadQosGroupingSummaries(v37, v34, v38, v33);
        ++v35;
        --v36;
      }
      while ( v36 );
    }
    v3 = 0;
    v30 = v53;
  }
LABEL_49:
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( (_BYTE)v22 == 2 && v30 == 4 )
  {
    v47 = KiCheckPreferredHeteroProcessor(a1, v31, 1);
    if ( KeHeteroSystemQos || v47 )
    {
      *(_BYTE *)(v31 + 14521) = 1;
      v3 = 1;
    }
  }
  KiReleaseThreadStateLock(v46, v31, &v54, v59, (volatile signed __int64 **)&v63);
  *(_QWORD *)(a1 + 64) = 0LL;
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( v3 )
    KiSendSoftwareInterrupt(*(_DWORD *)(v31 + 36), 2);
LABEL_56:
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v49[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  result = v49[0];
  __writecr8(v49[0]);
  return result;
}
