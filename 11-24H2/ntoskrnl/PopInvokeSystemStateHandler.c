/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140B6552C
 * Callers:
 *     PopShutdownSystem @ 0x140B60044 (PopShutdownSystem.c)
 *     PopEndMirroring @ 0x140B64660 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     KeSuspendDynamicTracing @ 0x1404CDEDC (KeSuspendDynamicTracing.c)
 *     KeRebaselineInterruptTime @ 0x1404D8E4C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x1404D8ED4 (KeRebaselineSystemTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FC810 (DbgBreakPointWithStatus.c)
 *     KeResumeDynamicTracing @ 0x1405C960C (KeResumeDynamicTracing.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiConvertHiberPhasePages @ 0x140B62664 (MiConvertHiberPhasePages.c)
 *     MmInvalidateDumpAddresses @ 0x140B631B0 (MmInvalidateDumpAddresses.c)
 *     PopIssueNextState @ 0x140B65DAC (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     MiUpdateUserMappings @ 0x140B6A44C (MiUpdateUserMappings.c)
 *     VfNotifyOfHibernate @ 0x140B87628 (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x140BB0760 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r13
  int v5; // r12d
  __int64 v7; // rcx
  char v8; // cl
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // edi
  __int64 *p_DeferredContext; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  char v25; // bl
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // bl
  __int64 v29; // rcx
  char v30; // al
  LARGE_INTEGER v31; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v33; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  char *DeferredContext; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v36)(ULONG_PTR); // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int128 *v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  char v41; // [rsp+BCh] [rbp-44h]
  int v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C4h] [rbp-3Ch]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  _QWORD *v45; // [rsp+E0h] [rbp-20h] BYREF
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  _QWORD v48[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v49[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v50[120]; // [rsp+110h] [rbp+10h] BYREF
  ULONG Status; // [rsp+188h] [rbp+88h]
  struct _SLIST_ENTRY ListEntry; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v53; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v54; // [rsp+1C0h] [rbp+C0h]

  v2 = a1;
  v31.QuadPart = 0LL;
  Affinity = 0LL;
  CurrentIrql = 0;
  v5 = -1073741823;
  memset(&Dpc, 0, 60);
  memset_0(&DeferredContext, 0, 0x50uLL);
  v40 = v2;
  v54 = 0LL;
  DeferredContext = (char *)&v53;
  v39 = &PopPowerStateNotifyHandler;
  v53 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*((_QWORD *)DeferredContext + 1) )
      return 3221225664LL;
  }
  v42 = KeNumberProcessors_0;
  HIDWORD(v44) = KeNumberProcessors_0;
  LODWORD(v44) = 1;
  if ( (unsigned int)(v2 - 4) > 1 )
  {
    if ( PopCheckpointSystemSleepEnabled )
    {
      v7 = *((unsigned int *)DeferredContext + 4);
      LODWORD(v7) = v7 | 0x40000;
      *((_QWORD *)DeferredContext + 2) = v7;
    }
    if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
    {
      v38 = a2;
      v36 = PopSaveHiberContextWrapper;
      v37 = a2;
    }
  }
  memset_0(v50, 0, 0xA0uLL);
  if ( a2 )
  {
    PopHibernateSystemContext = (__int64)DeferredContext;
    p_DeferredContext = &PopHibernateSystemContext;
    qword_140E275C8 = (__int64)v36;
    qword_140E275D0 = v37;
    qword_140E275D8 = v38;
    qword_140E275E0 = (__int64)v39;
    dword_140E275E8 = v40;
    byte_140E275EC = v41;
    dword_140E275F0 = v42;
    qword_140E275F8 = v44;
    RtlpInterlockedPushEntrySList(&stru_140E27600, &ListEntry);
  }
  else
  {
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    v8 = *(_DWORD *)KiGlobalState & 0x3F;
    Affinity.Group = *(_DWORD *)KiGlobalState >> 6;
    Affinity.Mask = 1LL << v8;
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
    }
    KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, &DeferredContext);
    v10 = 0;
    for ( Dpc.Importance = 2; v10 < (unsigned int)KeNumberProcessors_0; ++v10 )
    {
      if ( v10 != KeGetCurrentPrcb()->Number )
      {
        v11 = v43;
        if ( !Dpc.DpcData )
          Dpc.Number = v10 + 2048;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == v43 )
          _mm_pause();
      }
    }
    p_DeferredContext = (__int64 *)&DeferredContext;
  }
  PopIssueNextState(p_DeferredContext, v50, 2LL);
  PopIssueNextState(p_DeferredContext, v50, 3LL);
  if ( dword_140F0B12C == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v14 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v14 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140FC5B10 & 0x8000) != 0 )
  {
    v47 = 0;
    v45 = v49;
    v49[0] = PerformanceCounter.QuadPart;
    v49[1] = v14;
    v46 = 16;
    EtwTraceKernelEvent((int)&v45, 1, 0x80008000, 4656, 5249026);
  }
  PopIssueNextState(p_DeferredContext, v50, 4LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v15) = 1;
      VfNotifyOfHibernate(v15);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( (Status & 0x80000000) == 0 )
  {
    *((_BYTE *)p_DeferredContext + 44) = 1;
    PopIssueNextState(p_DeferredContext, v50, 12LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      guard_dispatch_icall_no_overrides(v17, v16, v18, v19);
    if ( a2 )
    {
      PopIssueNextState(p_DeferredContext, v50, 5LL);
      KeSuspendDynamicTracing();
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        MiUpdateUserMappings();
        byte_140E30043 = 1;
      }
      PopIssueNextState(p_DeferredContext, v50, 10LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(p_DeferredContext, v50, 6LL);
    PopCheckpointSystemSleep(26LL);
    v5 = Status;
    KeRebaselineInterruptTime();
    guard_dispatch_icall_no_overrides(v21, v20, v22, v23);
    if ( a2 && v5 == 1073742484 )
      PopIssueNextState(p_DeferredContext, v50, 7LL);
    PopIssueNextState(p_DeferredContext, v50, 8LL);
    if ( a2 )
    {
      if ( v5 == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(p_DeferredContext, v50, 9LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(xmmword_140F0AD68, 0x13uLL);
      v24 = *(_QWORD *)(a2 + 336);
      if ( v24 )
        MmInvalidateDumpAddresses(v24, (unsigned int)(16 * *(_DWORD *)(a2 + 288)));
      PopIssueNextState(p_DeferredContext, v50, 10LL);
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        byte_140E30043 = 0;
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 2) = 0;
      KeResumeDynamicTracing();
      PopIssueNextState(p_DeferredContext, v50, 11LL);
    }
    v25 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v25 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( v5 >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140F0BD88 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)p_DeferredContext + 44) = 0;
    PopIssueNextState(p_DeferredContext, v50, 12LL);
  }
  if ( a2 )
  {
    if ( v5 == -1073741632 )
    {
      while ( 1 )
        ;
    }
    PopHibernateInProgress = 0;
    *(_DWORD *)(a2 + 204) = v5;
    if ( (unsigned int)VfIsVerifierEnabled() )
      VfNotifyOfHibernate(0LL);
    if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
      RtlpDebugPrintCallbacksActive = 1;
    *(_DWORD *)(a2 + 204) = 1073742484;
  }
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(p_DeferredContext, v50, 13LL);
  if ( v5 >= 0 )
  {
    if ( dword_140F0B12C != 4 || PoResumeFromHibernate )
    {
      v28 = 0;
      v31 = KeQueryPerformanceCounter(0LL);
      qword_140F0B470 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06970;
    }
    else
    {
      v28 = 1;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(&v31, 0LL, v26, v27) )
        v31.QuadPart = 0LL;
    }
    if ( (xmmword_140FC5B10 & 0x8000) != 0 )
    {
      v33 = v31;
      v48[1] = 8LL;
      v48[0] = &v33;
      EtwTraceKernelEvent((int)v48, 1, 0x80008000, 4657, 5249026);
    }
    if ( v28 )
    {
      v31.QuadPart = PopQpcFrequency / 0x3E8 * (v31.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      qword_140F0B348 = v31.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(p_DeferredContext, v50, 14LL);
  PopIssueNextState(p_DeferredContext, v50, 15LL);
  PopIssueNextState(p_DeferredContext, v50, 16LL);
  if ( (Status & 0x80000000) == 0 )
  {
    v29 = *p_DeferredContext;
    Status = 0;
    v30 = *(_BYTE *)(v29 + 5);
    if ( v30 != -1 )
      *(_BYTE *)(v29 + 5) = v30 + 1;
  }
  if ( a2 )
  {
    if ( v5 == 1073742484 && !byte_140F0AD81 && byte_140E65DB0 )
      BgLibraryInitialize(qword_140E65D88, 0LL);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return Status;
}
