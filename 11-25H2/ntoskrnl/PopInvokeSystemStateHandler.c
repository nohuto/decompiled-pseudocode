/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140B5541C
 * Callers:
 *     PopShutdownSystem @ 0x140B4FF14 (PopShutdownSystem.c)
 *     PopEndMirroring @ 0x140B54550 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     KeSuspendDynamicTracing @ 0x1404CE0FC (KeSuspendDynamicTracing.c)
 *     KeRebaselineInterruptTime @ 0x1404D9E9C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x1404D9F24 (KeRebaselineSystemTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FA090 (DbgBreakPointWithStatus.c)
 *     KeResumeDynamicTracing @ 0x1405C4FE0 (KeResumeDynamicTracing.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiConvertHiberPhasePages @ 0x140B52534 (MiConvertHiberPhasePages.c)
 *     MmInvalidateDumpAddresses @ 0x140B53080 (MmInvalidateDumpAddresses.c)
 *     PopIssueNextState @ 0x140B55C9C (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 *     MiUpdateUserMappings @ 0x140B5A94C (MiUpdateUserMappings.c)
 *     VfNotifyOfHibernate @ 0x140B77648 (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x140BA0760 (BgLibraryInitialize.c)
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
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  char v19; // bl
  char v20; // bl
  __int64 v21; // rcx
  char v22; // al
  LARGE_INTEGER v23; // [rsp+30h] [rbp-D0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v25; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  char *DeferredContext; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v28)(ULONG_PTR); // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int128 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+BCh] [rbp-44h]
  int v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  _QWORD *v37; // [rsp+E0h] [rbp-20h] BYREF
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  _QWORD v40[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v41[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v42[120]; // [rsp+110h] [rbp+10h] BYREF
  ULONG Status; // [rsp+188h] [rbp+88h]
  _SLIST_ENTRY ListEntry; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v45; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v46; // [rsp+1C0h] [rbp+C0h]

  v2 = a1;
  v23.QuadPart = 0LL;
  Affinity = 0LL;
  CurrentIrql = 0;
  v5 = -1073741823;
  memset(&Dpc, 0, 60);
  memset_0(&DeferredContext, 0, 0x50uLL);
  v32 = v2;
  v46 = 0LL;
  DeferredContext = (char *)&v45;
  v31 = &PopPowerStateNotifyHandler;
  v45 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*((_QWORD *)DeferredContext + 1) )
      return 3221225664LL;
  }
  v34 = KeNumberProcessors_0;
  HIDWORD(v36) = KeNumberProcessors_0;
  LODWORD(v36) = 1;
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
      v30 = a2;
      v28 = PopSaveHiberContextWrapper;
      v29 = a2;
    }
  }
  memset_0(v42, 0, 0xA0uLL);
  if ( a2 )
  {
    PopHibernateSystemContext = (__int64)DeferredContext;
    p_DeferredContext = &PopHibernateSystemContext;
    qword_140E27388 = (__int64)v28;
    qword_140E27390 = v29;
    qword_140E27398 = v30;
    qword_140E273A0 = (__int64)v31;
    dword_140E273A8 = v32;
    byte_140E273AC = v33;
    dword_140E273B0 = v34;
    qword_140E273B8 = v36;
    RtlpInterlockedPushEntrySList(&stru_140E273C0, &ListEntry);
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
        v11 = v35;
        if ( !Dpc.DpcData )
          Dpc.Number = v10 + 2048;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == v35 )
          _mm_pause();
      }
    }
    p_DeferredContext = (__int64 *)&DeferredContext;
  }
  PopIssueNextState(p_DeferredContext, v42, 2LL);
  PopIssueNextState(p_DeferredContext, v42, 3LL);
  if ( dword_140F0AE8C == 4 )
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
    v39 = 0;
    v37 = v41;
    v41[0] = PerformanceCounter.QuadPart;
    v41[1] = v14;
    v38 = 16;
    EtwTraceKernelEvent((int)&v37, 1, 0x80008000, 4656, 5249026);
  }
  PopIssueNextState(p_DeferredContext, v42, 4LL);
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
    PopIssueNextState(p_DeferredContext, v42, 12LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      guard_dispatch_icall_no_overrides(v16);
    if ( a2 )
    {
      PopIssueNextState(p_DeferredContext, v42, 5LL);
      KeSuspendDynamicTracing();
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        MiUpdateUserMappings();
        byte_140E2FE03 = 1;
      }
      PopIssueNextState(p_DeferredContext, v42, 10LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(p_DeferredContext, v42, 6LL);
    PopCheckpointSystemSleep(26LL);
    v5 = Status;
    KeRebaselineInterruptTime();
    guard_dispatch_icall_no_overrides(v17);
    if ( a2 && v5 == 1073742484 )
      PopIssueNextState(p_DeferredContext, v42, 7LL);
    PopIssueNextState(p_DeferredContext, v42, 8LL);
    if ( a2 )
    {
      if ( v5 == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(p_DeferredContext, v42, 9LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(xmmword_140F0AD88, 0x13uLL);
      v18 = *(_QWORD *)(a2 + 336);
      if ( v18 )
        MmInvalidateDumpAddresses(v18, (unsigned int)(16 * *(_DWORD *)(a2 + 288)));
      PopIssueNextState(p_DeferredContext, v42, 10LL);
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        byte_140E2FE03 = 0;
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 2) = 0;
      KeResumeDynamicTracing();
      PopIssueNextState(p_DeferredContext, v42, 11LL);
    }
    v19 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v19 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( v5 >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140F0A9A8 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)p_DeferredContext + 44) = 0;
    PopIssueNextState(p_DeferredContext, v42, 12LL);
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
  PopIssueNextState(p_DeferredContext, v42, 13LL);
  if ( v5 >= 0 )
  {
    if ( dword_140F0AE8C != 4 || PoResumeFromHibernate )
    {
      v20 = 0;
      v23 = KeQueryPerformanceCounter(0LL);
      qword_140F0B1D0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06530;
    }
    else
    {
      v20 = 1;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(&v23) )
        v23.QuadPart = 0LL;
    }
    if ( (xmmword_140FC5B10 & 0x8000) != 0 )
    {
      v25 = v23;
      v40[1] = 8LL;
      v40[0] = &v25;
      EtwTraceKernelEvent((int)v40, 1, 0x80008000, 4657, 5249026);
    }
    if ( v20 )
    {
      v23.QuadPart = PopQpcFrequency / 0x3E8 * (v23.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz));
      qword_140F0B0A8 = v23.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(p_DeferredContext, v42, 14LL);
  PopIssueNextState(p_DeferredContext, v42, 15LL);
  PopIssueNextState(p_DeferredContext, v42, 16LL);
  if ( (Status & 0x80000000) == 0 )
  {
    v21 = *p_DeferredContext;
    Status = 0;
    v22 = *(_BYTE *)(v21 + 5);
    if ( v22 != -1 )
      *(_BYTE *)(v21 + 5) = v22 + 1;
  }
  if ( a2 )
  {
    if ( v5 == 1073742484 && !byte_140F0ADA1 && byte_140E65B50 )
      BgLibraryInitialize(qword_140E65B28, 0LL);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return Status;
}
