/*
 * XREFs of TcglibEalExecuteCommandSync @ 0x1400853BC
 * Callers:
 *     TcglibStackReset @ 0x14013CECC (TcglibStackReset.c)
 *     TcglibpExecuteCommand @ 0x14013F190 (TcglibpExecuteCommand.c)
 *     TcglibpGetCapabilities @ 0x14013FB04 (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x14013FFF0 (TcglibpGetProtocolList.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x14000C61C (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x14000D344 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000D390 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidBuildMdlForXrb @ 0x14000EB30 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall TcglibEalExecuteCommandSync(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  IRP *v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  void *v10; // r12
  IRP *v11; // rax
  int Status; // ebx
  __int64 v13; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  int v16; // eax
  ULONG v17; // eax
  _IO_STATUS_BLOCK v19; // [rsp+30h] [rbp-38h] BYREF
  ULONG v20; // [rsp+80h] [rbp+18h]

  v4 = a1;
  v19 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v8 = a1;
  }
  else if ( *(_DWORD *)a1 != 1094997074 )
  {
    return (unsigned int)-1073741637;
  }
  if ( !EnableNativeTcg )
    return (unsigned int)-1073741637;
  *(_BYTE *)(a2 + 3) = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = a2;
    v10 = *(void **)(a2 + 64);
    v20 = *(_DWORD *)(a2 + 60);
    *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) = 0;
  }
  else
  {
    v10 = *(void **)(a2 + 24);
    v20 = *(_DWORD *)(a2 + 16);
  }
  if ( v8 )
  {
    v11 = StorBuildSynchronousScsiRequest(*(_QWORD *)(v8 + 8), a2, a3, &v19);
    v6 = v11;
    if ( !v11 )
      return (unsigned int)-1073741801;
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v8 + 8), v11);
    if ( Status >= 0 )
    {
      Status = v6->IoStatus.Status;
      if ( Status >= 0 )
        Status = PortSrbTranslateSrbToNtStatus(*(_BYTE *)(a2 + 3));
    }
  }
  else
  {
    v13 = 316LL;
    if ( *(_DWORD *)v4 != 1314275652 )
      v13 = 524LL;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v13 + v4) + 7) & 0xFFFFFFF8) + 1184,
                              0LL,
                              (_QWORD *)v4);
    v5 = ContiguousIoResources;
    if ( !ContiguousIoResources )
      return (unsigned int)-1073741801;
    v9 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v15, 0, 0LL);
    *(_QWORD *)(v9 + 176) = 0LL;
    *(_QWORD *)(v9 + 168) = a2;
    *(_QWORD *)(v9 + 184) = v10;
    Status = RaidBuildMdlForXrb(v9, v10, v20);
    if ( Status < 0 )
    {
LABEL_41:
      RaidXrbDeallocateResources(v9, 0);
      StorFreeContiguousIoResources(v4, v5);
      return (unsigned int)Status;
    }
    if ( v7 )
      *(_QWORD *)(v7 + 96) = v9;
    else
      *(_QWORD *)(a2 + 48) = v9;
    RaSrbSetMiniportContext((int *)v4, a2, v5 + 1184);
    KeInitializeEvent((PRKEVENT)(v9 + 664), NotificationEvent, 0);
    *(_QWORD *)(v9 + 656) = RaidXrbSignalCompletion;
    if ( *(_QWORD *)(v4 + 4960) )
      RaidAdapterPoFxActivateComponent(v4, 0LL, 1LL);
    if ( *(_BYTE *)(v4 + 4370) )
      v16 = RaidAdapterRaiseIrqlAndExecuteXrb(v4, (_QWORD *)v9);
    else
      v16 = RaidAdapterPostScatterGatherExecute(v4, v9);
    Status = v16;
    if ( v16 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v9 + 664), Executive, 0, 0, 0LL);
      Status = RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
    }
    if ( *(_QWORD *)(v4 + 4960) )
    {
      if ( (*(_BYTE *)(v9 + 17) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(v4, *(unsigned int *)(v9 + 748));
        *(_BYTE *)(v9 + 17) &= ~1u;
      }
      RaidAdapterPoFxIdleComponent(v4, 0LL, 0LL);
    }
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v17 = *(_DWORD *)(v7 + 60);
    *(_QWORD *)(v7 + 64) = v10;
  }
  else
  {
    v17 = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v10;
  }
  if ( Status == -2147483643 && v17 <= v20 )
    Status = 0;
  if ( v6 )
    StorFreeSynchronousScsiRequest(v6);
  if ( v5 )
    goto LABEL_41;
  return (unsigned int)Status;
}
