/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x140010664
 * Callers:
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x14000D454 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x140038D88 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1400588F8 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14005A5E4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x14005AB44 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x14005D020 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x140060F48 (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006552C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1400659E4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006651C (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaGetProtocolCommandEffects @ 0x140089EC0 (RaGetProtocolCommandEffects.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000D390 (PortSrbTranslateSrbToNtStatus.c)
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
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     StorSetIoGatewayEmptyEvent @ 0x140053F18 (StorSetIoGatewayEmptyEvent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x140067F40 (WPP_SF_qqq.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18 (GatewayWaitForForwardIoWithTimeout.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        unsigned int *a3,
        ULONG a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // rbp
  unsigned int *v11; // r15
  int v12; // ecx
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int *Srb; // rdi
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  unsigned int *v20; // rbx
  int v21; // esi
  char v22; // si
  int v23; // eax
  int v24; // eax
  IRP *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  NTSTATUS v29; // eax
  bool v30; // zf
  KIRQL v31; // bl
  __int64 v32; // rbx
  unsigned int LockArray_high; // eax
  __int64 v34; // rdx
  __int64 v35; // [rsp+30h] [rbp-68h]
  union _LARGE_INTEGER v36; // [rsp+38h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v39; // [rsp+B0h] [rbp+18h]
  ULONG v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v8 = 0LL;
  Timeout.QuadPart = 0LL;
  v11 = 0LL;
  v12 = *(_DWORD *)a1;
  memset(&Event, 0, sizeof(Event));
  if ( v12 == 1314275652 )
  {
    v14 = a1 + 274;
  }
  else
  {
    v14 = a1 + 482;
    if ( v12 != 1094997074 )
      v14 = 98LL;
  }
  v15 = 316LL;
  if ( v12 != 1314275652 )
    v15 = 524LL;
  v16 = (*(_DWORD *)(v15 + a1) + 7) & 0xFFFFFFF8;
  Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)v14, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v16 + 1184);
  v35 = ContiguousIoResources;
  if ( !Srb || !ContiguousIoResources )
  {
    v21 = -1073741801;
    if ( !ContiguousIoResources )
      goto LABEL_44;
    goto LABEL_43;
  }
  v8 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v19, 0LL, 0LL);
  v20 = v39;
  v21 = RaidBuildMdlForXrb(v8, v39, a4);
  if ( v21 < 0 )
    goto LABEL_40;
  v22 = a6;
  v23 = a7;
  if ( !a6 )
  {
    v23 = a7 | 0x102;
    if ( *((_BYTE *)Srb + 2) == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      *((_BYTE *)Srb + 9) = 32;
  }
  v24 = v23 | 1;
  if ( *(_BYTE *)v14 == 1 )
  {
    v32 = Srb[13];
    v11 = Srb;
    Srb[5] = 2;
    Srb[6] = v24;
    if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high));
      v34 = **(_QWORD **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high);
      Srb[11] = HIDWORD(v34);
    }
    else
    {
      LODWORD(v34) = -1;
    }
    Srb[8] = v34;
    *((_QWORD *)Srb + 8) = v39;
    Srb[15] = v40;
    *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
    Srb[10] = *(_DWORD *)(a1 + 4124);
    *((_QWORD *)Srb + 12) = v8;
    *((_QWORD *)Srb + 10) = a2;
    *(_WORD *)((char *)Srb + v32 + 8) = 0;
    *((_BYTE *)Srb + v32 + 10) = 0;
    *(_QWORD *)(v8 + 168) = Srb;
    *(_QWORD *)(v8 + 184) = *((_QWORD *)Srb + 8);
    v25 = (IRP *)*((_QWORD *)Srb + 12);
  }
  else
  {
    Srb[3] = v24;
    Srb[4] = v40;
    *((_QWORD *)Srb + 3) = v20;
    *(_WORD *)Srb = 88;
    *((_BYTE *)Srb + 2) = 2;
    *((_BYTE *)Srb + 8) = -1;
    Srb[5] = *(_DWORD *)(a1 + 4124);
    *((_QWORD *)Srb + 6) = v8;
    *(_WORD *)((char *)Srb + 5) = 0;
    *((_BYTE *)Srb + 7) = 0;
    *(_QWORD *)(v8 + 168) = Srb;
    *(_QWORD *)(v8 + 184) = *((_QWORD *)Srb + 3);
    v25 = a2;
  }
  *(_QWORD *)(v8 + 176) = v25;
  RaSrbSetMiniportContext((int *)a1, (__int64)Srb, v35 + 1184);
  if ( v22 )
    *(_BYTE *)(v8 + 17) |= 8u;
  KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
  *(_QWORD *)(v8 + 656) = RaidXrbSignalCompletion;
  if ( v22 )
  {
    RaidPauseAdapterQueue(a1);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 960), &Event);
    v36.QuadPart = -1200000000LL;
    v29 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v36);
    v30 = v29 == 0;
    if ( v29 >= 0 )
      v30 = (unsigned int)GatewayWaitForForwardIoWithTimeout(a1, 120000LL) == 0;
    if ( !v30 )
    {
      a2->IoStatus.Information = 0LL;
      v21 = -1073741823;
      goto LABEL_43;
    }
  }
  if ( *(_QWORD *)(a1 + 4960) )
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  if ( *(_BYTE *)v14 == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
        v8,
        v11,
        *((_QWORD *)v11 + 13));
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      61LL,
      &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
      v8,
      Srb,
      *((_QWORD *)Srb + 7));
  }
  if ( *(_BYTE *)(a1 + 4370) )
    v26 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v8);
  else
    v26 = RaidAdapterPostScatterGatherExecute(a1, v8);
  v21 = v26;
  if ( v26 < 0 )
  {
LABEL_28:
    if ( v21 != 258 )
      goto LABEL_29;
    goto LABEL_57;
  }
  if ( a8 )
  {
    Timeout.QuadPart = -10000000LL * a8;
    v21 = KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, &Timeout);
  }
  else
  {
    KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
  }
  if ( v21 != 258 )
  {
    LOBYTE(v27) = *((_BYTE *)Srb + 3);
    v21 = RaidSrbStatusToNtStatus(v27);
    goto LABEL_28;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 6180));
LABEL_57:
  RaidAdapterResetBus(a1, 0LL);
LABEL_29:
  if ( a6 )
  {
    v31 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v31);
  }
  if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v8 + 748));
    *(_BYTE *)(v8 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 4960) )
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  if ( v21 >= 0 )
  {
    if ( v21 == 258 )
    {
LABEL_41:
      v21 = -1073741643;
      goto LABEL_43;
    }
    if ( !a5 || (v21 = a5(v39[5]), v21 >= 0) )
      v21 = PortSrbTranslateSrbToNtStatus(*((_BYTE *)Srb + 3));
  }
LABEL_40:
  if ( v21 == 258 )
    goto LABEL_41;
LABEL_43:
  RaidXrbDeallocateResources(v8, 0LL);
  StorFreeContiguousIoResources(a1, v35);
LABEL_44:
  if ( Srb )
  {
    if ( *(_BYTE *)v14 == 1 )
    {
      if ( !v11 )
        v11 = Srb;
      *((_QWORD *)v11 + 10) = 0LL;
      *((_QWORD *)v11 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v21;
}
