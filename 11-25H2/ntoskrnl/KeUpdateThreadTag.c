/*
 * XREFs of KeUpdateThreadTag @ 0x140202F10
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage @ 0x140201B40 (Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage.c)
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140271300 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140274F90 (KiCheckPreferredHeteroProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEndThreadCycleAccumulation @ 0x14028CBB0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     KiStartThreadCycleAccumulation @ 0x14031AC90 (KiStartThreadCycleAccumulation.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeCheckAndApplyBamQos @ 0x1403E8B80 (KeCheckAndApplyBamQos.c)
 *     KiSendSoftwareInterrupt @ 0x14041E140 (KiSendSoftwareInterrupt.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  char v3; // r13
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  char v6; // r12
  char v7; // al
  struct _KPRCB *v8; // r8
  signed __int32 *SchedulerAssist; // rdx
  int v10; // r14d
  __int64 result; // rax
  char v12; // r15
  char v13; // cl
  int v14; // r12d
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 ProcessorCount; // rcx
  int v18; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  _KPRCB **Prcbs; // r15
  __int64 v21; // r13
  _KPRCB *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentIrql; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  int v34; // ecx
  _BYTE *v35; // rax
  unsigned int v36; // ecx
  __int64 *v37; // r15
  __int64 v38; // r13
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // ecx
  _BYTE *v43; // rax
  unsigned int v44; // ecx
  __int64 *v45; // r15
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // rcx
  char v49; // [rsp+31h] [rbp-CFh]
  char v50[6]; // [rsp+32h] [rbp-CEh] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  struct _KPRCB *v52; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int64 *v53; // [rsp+48h] [rbp-B8h] BYREF
  struct _KPRCB *v54; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v58[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v61[33]; // [rsp+B8h] [rbp-48h] BYREF
  int v62; // [rsp+218h] [rbp+118h] BYREF

  v62 = a2;
  memset_0(&v60, 0, 0x108uLL);
  v3 = 0;
  v50[0] = 0;
  v53 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, v50);
  if ( *(unsigned __int8 *)(a1 + 124) == v62 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_12;
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 0;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, a1, 0LL, 0LL);
    v7 = v62;
    if ( v62 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v7;
    KiStartThreadCycleAccumulation(CurrentPrcb, a1, 0LL);
    v8 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v8->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v32 = *SchedulerAssist;
      do
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
      }
      while ( v33 != v32 );
      if ( (v32 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v8);
    }
    _enable();
    v10 = KiComputeThreadQos(a1);
    if ( v10 == *(unsigned __int8 *)(a1 + 516) )
      goto LABEL_7;
    v59 = 0LL;
    v52 = CurrentPrcb;
    KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 1LL, &v51);
    *(_BYTE *)(a1 + 516) = v10;
    if ( !CurrentPrcb->NextThread )
    {
      v18 = *(_DWORD *)(a1 + 120) >> 1;
      v54 = CurrentPrcb;
      ProcessorCount = v18 & 1;
      if ( (_DWORD)ProcessorCount )
      {
        if ( (_DWORD)ProcessorCount != 1 )
          goto LABEL_31;
        CoreControlBlock = CurrentPrcb->CoreControlBlock;
        ProcessorCount = CoreControlBlock->ProcessorCount;
        Prcbs = CoreControlBlock->Prcbs;
        if ( !CoreControlBlock->ProcessorCount )
          goto LABEL_31;
      }
      else
      {
        Prcbs = &v54;
        LODWORD(ProcessorCount) = 1;
      }
      v21 = (unsigned int)ProcessorCount;
      do
      {
        v22 = *Prcbs;
        (*Prcbs)->PriorityState[64].AllFields ^= (*(_BYTE *)(a1 + 516) ^ (*Prcbs)->PriorityState[64].AllFields) & 7;
        KiUpdateThreadQosGroupingSummaries(v22);
        Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v23);
        ++Prcbs;
        --v21;
      }
      while ( v21 );
      v3 = 0;
    }
LABEL_31:
    KiReleaseThreadStateLock(ProcessorCount, (__int64)CurrentPrcb, &v51, 0LL, (volatile signed __int64 **)&v59);
LABEL_7:
    Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
    if ( v10 == 4 )
    {
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(a1, CurrentPrcb, 1LL) )
      {
        CurrentPrcb->QuantumEnd = 1;
        v6 = 1;
      }
      else
      {
        v3 = 1;
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
    if ( v6 )
      KiSendSoftwareInterrupt(CurrentPrcb->Number, 2LL);
    if ( v3 )
      KeCheckAndApplyBamQos(CurrentPrcb, a1);
    goto LABEL_12;
  }
  v12 = 0;
  v57 = 0LL;
  v49 = KiAcquireThreadStateLockForWrite(a1, (unsigned int)&v52, (unsigned int)&v51, (unsigned int)&v53, (__int64)&v57);
  if ( v49 != 2 && !*(_BYTE *)(a1 + 113) )
  {
    v13 = v62;
    if ( v62 )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
    *(_BYTE *)(a1 + 124) = v13;
    goto LABEL_20;
  }
  v24 = *(unsigned int *)(a1 + 536);
  v60 = 2097153LL;
  LODWORD(v24) = v24 & 0x7FFFFFFF;
  memset_0(v61, 0, 0x100uLL);
  v25 = *((_DWORD *)KiGlobalState + v24) & 0x3F;
  v26 = *((_DWORD *)KiGlobalState + v24) >> 6;
  if ( (unsigned __int16)v60 <= (unsigned int)v26 )
  {
    if ( WORD1(v60) <= (unsigned int)v26 )
      goto LABEL_34;
    LOWORD(v60) = v26 + 1;
  }
  v27 = (unsigned int)v26;
  v28 = v61[v26];
  _bittestandset64(&v28, v25);
  v61[v27] = v28;
LABEL_34:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v58[1] = &v62;
  v58[0] = a1;
  v58[3] = KiIpiUpdateThreadTag;
  v58[2] = 0LL;
  KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), 0, (unsigned int)&v60, (unsigned int)v58, 5LL);
  KiIpiStallOnPacketTargetsPrcb(v30, KeGetCurrentPrcb());
  if ( KiIrqlFlags )
  {
    LOBYTE(v31) = 2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
  }
  __writecr8(2uLL);
LABEL_20:
  v14 = KiComputeThreadQos(a1);
  v15 = (__int64)v52;
  if ( v14 == *(unsigned __int8 *)(a1 + 516) )
    goto LABEL_21;
  *(_BYTE *)(a1 + 516) = v14;
  if ( v49 == 2 )
  {
    if ( *(_QWORD *)(v15 + 16) )
      goto LABEL_21;
    v34 = *(_DWORD *)(a1 + 120) >> 1;
    v56 = v15;
    if ( (v34 & 1) == 0 )
    {
      v37 = &v56;
      v36 = 1;
LABEL_48:
      v38 = v36;
      do
      {
        v39 = *v37;
        *(_BYTE *)(*(_QWORD *)(*v37 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v37 + 56) + 64LL)) & 7;
        KiUpdateThreadQosGroupingSummaries(v39);
        Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v40);
        ++v37;
        --v38;
      }
      while ( v38 );
LABEL_50:
      v12 = 0;
      goto LABEL_21;
    }
    v35 = *(_BYTE **)(v15 + 36440);
    v36 = (unsigned __int8)*v35;
    v37 = (__int64 *)(v35 + 8);
    if ( *v35 )
      goto LABEL_48;
    goto LABEL_56;
  }
  if ( v49 == 3 )
  {
    v42 = *(_DWORD *)(a1 + 120) >> 1;
    v55 = v15;
    if ( (v42 & 1) != 0 )
    {
      v43 = *(_BYTE **)(v15 + 36440);
      v44 = (unsigned __int8)*v43;
      v45 = (__int64 *)(v43 + 8);
      if ( !*v43 )
      {
LABEL_56:
        v12 = 0;
        goto LABEL_21;
      }
    }
    else
    {
      v45 = &v55;
      v44 = 1;
    }
    v46 = v44;
    do
    {
      v47 = *v45;
      *(_BYTE *)(*(_QWORD *)(*v45 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v45 + 56) + 64LL)) & 7;
      KiUpdateThreadQosGroupingSummaries(v47);
      Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v48);
      ++v45;
      --v46;
    }
    while ( v46 );
    goto LABEL_50;
  }
LABEL_21:
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( v49 == 2 && v14 == 4 )
  {
    v41 = KiCheckPreferredHeteroProcessor(a1, v15, 1LL);
    if ( KeHeteroSystemQos || v41 )
    {
      *(_BYTE *)(v15 + 14521) = 1;
      v12 = 1;
    }
  }
  KiReleaseThreadStateLock(v16, v15, &v51, v53, (volatile signed __int64 **)&v57);
  *(_QWORD *)(a1 + 64) = 0LL;
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( v12 )
  {
    LOBYTE(v4) = 2;
    KiSendSoftwareInterrupt(*(unsigned int *)(v15 + 36), v4);
  }
LABEL_12:
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v50[0];
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  result = (unsigned __int8)v50[0];
  __writecr8((unsigned __int8)v50[0]);
  return result;
}
