/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140B6766C
 * Callers:
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     PopEndMirroring @ 0x140B66770 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     KeSuspendDynamicTracing @ 0x1404C72AC (KeSuspendDynamicTracing.c)
 *     KeRebaselineInterruptTime @ 0x1404D229C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x1404D2324 (KeRebaselineSystemTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FA0D0 (DbgBreakPointWithStatus.c)
 *     KeResumeDynamicTracing @ 0x1405C6D3C (KeResumeDynamicTracing.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiConvertHiberPhasePages @ 0x140B64734 (MiConvertHiberPhasePages.c)
 *     MmInvalidateDumpAddresses @ 0x140B65280 (MmInvalidateDumpAddresses.c)
 *     PopIssueNextState @ 0x140B67EEC (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     MiUpdateUserMappings @ 0x140B6BB5C (MiUpdateUserMappings.c)
 *     VfNotifyOfHibernate @ 0x140B89628 (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x140BB2760 (BgLibraryInitialize.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  char v21; // bl
  char v22; // bl
  __int64 v23; // rcx
  char v24; // al
  LARGE_INTEGER v25; // [rsp+30h] [rbp-D0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  char *DeferredContext; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v30)(ULONG_PTR); // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int128 *v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  char v35; // [rsp+BCh] [rbp-44h]
  int v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C4h] [rbp-3Ch]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  _QWORD *v39; // [rsp+E0h] [rbp-20h] BYREF
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  _QWORD v42[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v43[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v44[120]; // [rsp+110h] [rbp+10h] BYREF
  ULONG Status; // [rsp+188h] [rbp+88h]
  _SLIST_ENTRY ListEntry; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v47; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v48; // [rsp+1C0h] [rbp+C0h]

  v2 = a1;
  v25.QuadPart = 0LL;
  Affinity = 0LL;
  CurrentIrql = 0;
  v5 = -1073741823;
  memset(&Dpc, 0, 60);
  memset_0(&DeferredContext, 0, 0x50uLL);
  v34 = v2;
  v48 = 0LL;
  DeferredContext = (char *)&v47;
  v33 = &PopPowerStateNotifyHandler;
  v47 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*((_QWORD *)DeferredContext + 1) )
      return 3221225664LL;
  }
  v36 = KeNumberProcessors_0;
  HIDWORD(v38) = KeNumberProcessors_0;
  LODWORD(v38) = 1;
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
      v32 = a2;
      v30 = PopSaveHiberContextWrapper;
      v31 = a2;
    }
  }
  memset_0(v44, 0, 0xA0uLL);
  if ( a2 )
  {
    PopHibernateSystemContext = (__int64)DeferredContext;
    p_DeferredContext = &PopHibernateSystemContext;
    qword_140E27708 = (__int64)v30;
    qword_140E27710 = v31;
    qword_140E27718 = v32;
    qword_140E27720 = (__int64)v33;
    dword_140E27728 = v34;
    byte_140E2772C = v35;
    dword_140E27730 = v36;
    qword_140E27738 = v38;
    RtlpInterlockedPushEntrySList(&stru_140E27740, &ListEntry);
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
        v11 = v37;
        if ( !Dpc.DpcData )
          Dpc.Number = v10 + 2048;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == v37 )
          _mm_pause();
      }
    }
    p_DeferredContext = (__int64 *)&DeferredContext;
  }
  PopIssueNextState(p_DeferredContext, v44, 2LL);
  PopIssueNextState(p_DeferredContext, v44, 3LL);
  if ( dword_140F0B9AC == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v14 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v14 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    v41 = 0;
    v39 = v43;
    v43[0] = PerformanceCounter.QuadPart;
    v43[1] = v14;
    v40 = 16;
    EtwTraceKernelEvent((int)&v39, 1, 0x80008000, 4656, 5249026);
  }
  PopIssueNextState(p_DeferredContext, v44, 4LL);
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
    PopIssueNextState(p_DeferredContext, v44, 12LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      guard_dispatch_icall_no_overrides(v17, v16);
    if ( a2 )
    {
      PopIssueNextState(p_DeferredContext, v44, 5LL);
      KeSuspendDynamicTracing();
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        MiUpdateUserMappings();
        byte_140E30183 = 1;
      }
      PopIssueNextState(p_DeferredContext, v44, 10LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(p_DeferredContext, v44, 6LL);
    PopCheckpointSystemSleep(26LL);
    v5 = Status;
    KeRebaselineInterruptTime();
    guard_dispatch_icall_no_overrides(v19, v18);
    if ( a2 && v5 == 1073742484 )
      PopIssueNextState(p_DeferredContext, v44, 7LL);
    PopIssueNextState(p_DeferredContext, v44, 8LL);
    if ( a2 )
    {
      if ( v5 == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(p_DeferredContext, v44, 9LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(xmmword_140F0BBA8, 0x13uLL);
      v20 = *(_QWORD *)(a2 + 336);
      if ( v20 )
        MmInvalidateDumpAddresses(v20, (unsigned int)(16 * *(_DWORD *)(a2 + 288)));
      PopIssueNextState(p_DeferredContext, v44, 10LL);
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        byte_140E30183 = 0;
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 2) = 0;
      KeResumeDynamicTracing();
      PopIssueNextState(p_DeferredContext, v44, 11LL);
    }
    v21 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v21 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( v5 >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140F0B8A8 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)p_DeferredContext + 44) = 0;
    PopIssueNextState(p_DeferredContext, v44, 12LL);
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
  PopIssueNextState(p_DeferredContext, v44, 13LL);
  if ( v5 >= 0 )
  {
    if ( dword_140F0B9AC != 4 || PoResumeFromHibernate )
    {
      v22 = 0;
      v25 = KeQueryPerformanceCounter(0LL);
      qword_140F0C0B0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06C90;
    }
    else
    {
      v22 = 1;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(&v25, 0LL) )
        v25.QuadPart = 0LL;
    }
    if ( (xmmword_140FC6B50 & 0x8000) != 0 )
    {
      v27 = v25;
      v42[1] = 8LL;
      v42[0] = &v27;
      EtwTraceKernelEvent((int)v42, 1, 0x80008000, 4657, 5249026);
    }
    if ( v22 )
    {
      v25.QuadPart = PopQpcFrequency / 0x3E8 * (v25.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      qword_140F0BF88 = v25.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(p_DeferredContext, v44, 14LL);
  PopIssueNextState(p_DeferredContext, v44, 15LL);
  PopIssueNextState(p_DeferredContext, v44, 16LL);
  if ( (Status & 0x80000000) == 0 )
  {
    v23 = *p_DeferredContext;
    Status = 0;
    v24 = *(_BYTE *)(v23 + 5);
    if ( v24 != -1 )
      *(_BYTE *)(v23 + 5) = v24 + 1;
  }
  if ( a2 )
  {
    if ( v5 == 1073742484 && !byte_140F0BBC1 && byte_140E65EE2 )
      BgLibraryInitialize(qword_140E65EC8, 0LL);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return Status;
}
