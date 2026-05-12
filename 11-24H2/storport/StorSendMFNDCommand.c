/*
 * XREFs of StorSendMFNDCommand @ 0x140190F24
 * Callers:
 *     StorGetAndLogMFNDQoSStatistics @ 0x1400C3798 (StorGetAndLogMFNDQoSStatistics.c)
 *     StorGetAndLogNVMeDevicePanicWorkRoutine @ 0x1400C3AE0 (StorGetAndLogNVMeDevicePanicWorkRoutine.c)
 *     StorGetAndLogNVMeErrorInfoWorkRoutine @ 0x1400C3CB0 (StorGetAndLogNVMeErrorInfoWorkRoutine.c)
 *     StorGetAndLogNVMeSmartHealthInfoWorkRoutine @ 0x1400C3E80 (StorGetAndLogNVMeSmartHealthInfoWorkRoutine.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1400C7268 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1400C7364 (StorSetMFNDOperationPrivilege.c)
 *     StorGetMFNDCapabilities @ 0x14018E4C4 (StorGetMFNDCapabilities.c)
 *     StorMFNDChildPFControl @ 0x14018E6B4 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x14018E7E8 (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x14018E90C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x14018EE90 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x14018F10C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x14018F2D0 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x14018F94C (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x14018FC9C (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x14018FEA4 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140190278 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140190584 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x140190768 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x140190B74 (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x140190CF8 (StorResetMFND.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x140190DD8 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1401914C8 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1401916CC (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1401918C0 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQoSStatisticsProperty @ 0x140191B28 (StorSetMFNDChildPFQoSStatisticsProperty.c)
 *     StorSetMFNDChildPFQueuesState @ 0x140191D2C (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x14019204C (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x140192354 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x14019289C (StorSetMFNDOperationInfo.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     RaidBuildMdlForXrb @ 0x14000EB30 (RaidBuildMdlForXrb.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidFreeSrb @ 0x140036888 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14003D864 (RaidXrbSetCompletionRoutine.c)
 *     StorSetIoGatewayEmptyEvent @ 0x140053F18 (StorSetIoGatewayEmptyEvent.c)
 *     RaidAdapterResetBusNoLock @ 0x14005E034 (RaidAdapterResetBusNoLock.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18 (GatewayWaitForForwardIoWithTimeout.c)
 */

__int64 __fastcall StorSendMFNDCommand(
        __int64 a1,
        void *a2,
        __int64 a3,
        ULONG a4,
        _OWORD *a5,
        __int64 a6,
        unsigned __int8 a7,
        char a8,
        unsigned int a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v12; // ecx
  __int64 v14; // r14
  __int64 v15; // r15
  int v16; // esi
  union _LARGE_INTEGER v17; // rdx
  __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 Srb; // rbp
  __int64 v23; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // esi
  union _LARGE_INTEGER v28; // r13
  unsigned int LockArray_high; // eax
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  NTSTATUS v35; // eax
  bool v36; // zf
  __int64 v37; // rax
  int v39; // eax
  void *v40; // rcx
  KIRQL v41; // bl
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-88h] BYREF
  __int64 v43; // [rsp+38h] [rbp-80h]
  union _LARGE_INTEGER v44; // [rsp+40h] [rbp-78h] BYREF
  __int64 v45; // [rsp+48h] [rbp-70h]
  struct _KEVENT Event; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v47; // [rsp+C0h] [rbp+8h]
  char v51; // [rsp+E8h] [rbp+30h]

  v44.QuadPart = 0LL;
  memset(&Event, 0, sizeof(Event));
  v12 = *(_DWORD *)a1;
  v45 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( v12 == 1314275652 )
  {
    v17.QuadPart = a1 + 176;
  }
  else
  {
    v17.QuadPart = a1 + 384;
    if ( v12 != 1094997074 )
      v17.QuadPart = 0LL;
  }
  v18 = *(_QWORD *)(a1 + 608);
  Timeout = v17;
  if ( *(int *)(v18 + 184) >= 0 || !v17.QuadPart || *(_BYTE *)(v17.QuadPart + 98) != 1 )
    return 3221225659LL;
  v19 = a7 & 1;
  v47 = a9;
  if ( (a7 & 0x10) != 0 )
  {
    v51 = 1;
    if ( !a9 )
      v47 = *(_DWORD *)(a1 + 4124);
  }
  else
  {
    v51 = 0;
  }
  if ( ((_BYTE)v19 || (a7 & 2) != 0) && (!a2 || !a4) )
    return 3221225485LL;
  v20 = 316LL;
  if ( v12 != 1314275652 )
    v20 = 524LL;
  v21 = (*(_DWORD *)(v20 + a1) + 7) & 0xFFFFFFF8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0xAu, 1, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v21 + 1184, v23, (_QWORD *)a1);
  v43 = ContiguousIoResources;
  v26 = ContiguousIoResources;
  if ( !Srb || !ContiguousIoResources )
  {
    v27 = -1073741801;
    goto LABEL_86;
  }
  v14 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v25, 0, 0LL);
  if ( (_BYTE)v19 || (a7 & 2) != 0 )
  {
    if ( a3 )
    {
      *(_BYTE *)(v14 + 16) &= ~1u;
      *(_QWORD *)(v14 + 104) = a3;
      goto LABEL_26;
    }
    v27 = RaidBuildMdlForXrb(v14, a2, a4);
    if ( v27 >= 0 )
    {
LABEL_26:
      v16 = v19 << 6;
      if ( (a7 & 2) != 0 )
        v16 |= 0x80u;
      goto LABEL_28;
    }
LABEL_86:
    v28 = Timeout;
    goto LABEL_48;
  }
LABEL_28:
  if ( !a8 )
  {
    v16 |= 0x102u;
    if ( *(_BYTE *)(Srb + 2) == 40 )
      *(_WORD *)(Srb + 38) = 32;
    else
      *(_BYTE *)(Srb + 9) = 32;
  }
  RaSrbSetMiniportContext((int *)a1, Srb, v26 + 1184);
  if ( a8 )
    *(_BYTE *)(v14 + 17) |= 8u;
  v28 = Timeout;
  if ( *(_BYTE *)(Timeout.QuadPart + 98) == 1 )
  {
    v15 = Srb + *(unsigned int *)(Srb + 120);
    *(_DWORD *)(Srb + 20) = 10;
    *(_DWORD *)(Srb + 24) = v16;
    *(_BYTE *)(Srb + 3) = 0;
    v36 = *(_DWORD *)a1 == 1094997074;
    v45 = Srb;
    if ( v36 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high));
      v30 = **(_QWORD **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high);
      *(_DWORD *)(Srb + 44) = HIDWORD(v30);
    }
    else
    {
      LODWORD(v30) = -1;
    }
    *(_DWORD *)(Srb + 32) = v30;
    *(_QWORD *)(Srb + 64) = a2;
    *(_DWORD *)(Srb + 60) = a4;
    v31 = *(_DWORD *)(a1 + 4124);
    *(_QWORD *)(Srb + 96) = v14;
    if ( v47 > v31 )
      v31 = v47;
    *(_DWORD *)(Srb + 40) = v31;
    *(_QWORD *)(v14 + 168) = Srb;
    *(_QWORD *)(v14 + 184) = *(_QWORD *)(Srb + 64);
    *(_QWORD *)(v14 + 176) = *(_QWORD *)(Srb + 96);
    *(_WORD *)(v15 + 82) = a7;
    *(_DWORD *)v15 = 67;
    *(_DWORD *)(v15 + 4) = 100;
    *(_BYTE *)(v15 + 80) = 1;
    v32 = a5[1];
    *(_OWORD *)(v15 + 16) = *a5;
    v33 = a5[2];
    *(_OWORD *)(v15 + 32) = v32;
    v34 = a5[3];
    *(_OWORD *)(v15 + 48) = v33;
    *(_OWORD *)(v15 + 64) = v34;
  }
  KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v14, (__int64)RaidXrbSignalCompletion);
  if ( !a8 )
    goto LABEL_91;
  RaidPauseAdapterQueue(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 960), &Event);
  Timeout.QuadPart = -1200000000LL;
  v35 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
  v36 = v35 == 0;
  if ( v35 >= 0 )
    v36 = (unsigned int)GatewayWaitForForwardIoWithTimeout(a1, 0x1D4C0u) == 0;
  if ( v36 )
  {
LABEL_91:
    if ( *(_QWORD *)(a1 + 4960) )
      RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
    if ( *(_BYTE *)(a1 + 4370) )
      v39 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v14);
    else
      v39 = RaidAdapterPostScatterGatherExecute(a1, v14);
    v27 = v39;
    if ( v39 >= 0 )
    {
      v40 = (void *)(v14 + 664);
      if ( v51 )
      {
        v44.QuadPart = -10000000LL * v47;
        v27 = KeWaitForSingleObject(v40, Executive, 0, 0, &v44);
      }
      else
      {
        KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
      }
      if ( v27 == 258 )
        v27 = -1073741643;
      else
        v27 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
    }
    if ( a8 )
    {
      v41 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1);
      KeLowerIrql(v41);
    }
    if ( (*(_BYTE *)(v14 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v14 + 748));
      *(_BYTE *)(v14 + 17) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 4960) )
      RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
    if ( v27 >= 0 && a10 )
    {
      v26 = v43;
      if ( v15 )
        *a10 = *(_DWORD *)(v15 + 96);
      goto LABEL_48;
    }
  }
  else
  {
    v27 = -1073741823;
  }
  v26 = v43;
LABEL_48:
  if ( a11 && v15 )
    *a11 = *(unsigned __int16 *)(v15 + 86);
  if ( v51 && v27 == -1073741643 )
    RaidAdapterResetBusNoLock(a1);
  if ( v26 )
  {
    RaidXrbDeallocateResources(v14, 0);
    StorFreeContiguousIoResources(a1, v26);
  }
  if ( Srb )
  {
    if ( (*(_BYTE *)(v28.QuadPart + 98) & 1) != 0 )
    {
      v37 = v45;
      if ( !v45 )
        v37 = Srb;
      *(_QWORD *)(v37 + 80) = 0LL;
      *(_QWORD *)(v37 + 104) = 0LL;
    }
    RaidFreeSrb((void *)Srb);
  }
  return (unsigned int)v27;
}
