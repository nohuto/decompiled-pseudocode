/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1400369D0 (RaAdapterProtocolCommandIoctl.c)
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
 *     StorEtwProtocolCommandCompletion @ 0x140042340 (StorEtwProtocolCommandCompletion.c)
 *     StorSetIoGatewayEmptyEvent @ 0x140053F18 (StorSetIoGatewayEmptyEvent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x140067F40 (WPP_SF_qqq.c)
 *     StorGetStorageProtocolCommandBufferTotalLength @ 0x14008F6F4 (StorGetStorageProtocolCommandBufferTotalLength.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18 (GatewayWaitForForwardIoWithTimeout.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IRP *MasterIrp; // r15
  int v6; // ecx
  _QWORD *v7; // r13
  __int64 v8; // r14
  __int64 v10; // rdx
  unsigned int Options; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // r8
  unsigned int v15; // ebx
  unsigned int *Srb; // rdi
  __int64 v17; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // ebp
  int v22; // edx
  char v23; // bp
  int v24; // ecx
  _BYTE *v25; // rbx
  __int64 v26; // rbx
  unsigned int LockArray_high; // eax
  __int64 v28; // rdx
  unsigned int Blink; // eax
  IRP *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r8
  NTSTATUS v33; // eax
  bool v34; // zf
  int v35; // eax
  KIRQL v36; // bl
  __int64 v37; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+10h]
  char v42; // [rsp+B0h] [rbp+18h]
  _BYTE *v43; // [rsp+B8h] [rbp+20h]

  v42 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = *(_DWORD *)a1;
  v7 = 0LL;
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( v6 == 1314275652 )
  {
    v10 = a1 + 274;
  }
  else
  {
    v10 = a1 + 482;
    if ( v6 != 1094997074 )
      v10 = 98LL;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v34 = v6 == 1314275652;
  v12 = *(_QWORD *)(a1 + 8);
  v43 = (_BYTE *)v10;
  v13 = 316LL;
  if ( !v34 )
    v13 = 524LL;
  v14 = *(_BYTE *)v10;
  v15 = (*(_DWORD *)(v13 + a1) + 7) & 0xFFFFFFF8;
  if ( Options <= CurrentStackLocation->Parameters.Read.Length )
    Options = CurrentStackLocation->Parameters.Read.Length;
  Timeout.LowPart = Options;
  Srb = (unsigned int *)RaidAllocateSrb(v12, 9u, v14, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v15 + 1184, v17, (_QWORD *)a1);
  v41 = ContiguousIoResources;
  v20 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v8 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
    v21 = RaidBuildMdlForXrb(v8, MasterIrp, Options);
    if ( v21 >= 0 )
    {
      v34 = DisableIEEE1667 == 0;
      v22 = 129;
      MasterIrp->Flags = 255;
      if ( !v34
        && LODWORD(MasterIrp->MdlAddress) == 3
        && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
        && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
      {
        v21 = -1073741637;
      }
      else
      {
        v23 = v42;
        if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
          v22 = 1;
        v24 = v22 | 0x40;
        if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
          v24 = v22;
        if ( !v42 )
        {
          v24 |= 0x102u;
          if ( *((_BYTE *)Srb + 2) == 40 )
            *((_WORD *)Srb + 19) = 32;
          else
            *((_BYTE *)Srb + 9) = 32;
        }
        v25 = v43;
        if ( *v43 == 1 )
        {
          v26 = Srb[13];
          v7 = Srb;
          Srb[5] = 9;
          Srb[6] = v24;
          if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
          {
            LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
            _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high), 1u);
            v28 = **(_QWORD **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high);
            Srb[11] = HIDWORD(v28);
          }
          else
          {
            LODWORD(v28) = -1;
          }
          Srb[8] = v28;
          Srb[15] = Timeout.LowPart;
          *((_QWORD *)Srb + 8) = MasterIrp;
          *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
          Blink = (unsigned int)MasterIrp->ThreadListEntry.Blink;
          if ( !Blink )
            Blink = *(_DWORD *)(a1 + 4124);
          Srb[10] = Blink;
          *((_QWORD *)Srb + 12) = v8;
          *((_QWORD *)Srb + 10) = a2;
          *(_WORD *)((char *)Srb + v26 + 8) = 0;
          *((_BYTE *)Srb + v26 + 10) = 0;
          v25 = v43;
          *(_QWORD *)(v8 + 168) = Srb;
          *(_QWORD *)(v8 + 184) = *((_QWORD *)Srb + 8);
          v30 = (IRP *)*((_QWORD *)Srb + 12);
        }
        else
        {
          Srb[4] = Timeout.LowPart;
          *(_WORD *)Srb = 88;
          *((_BYTE *)Srb + 2) = 9;
          Srb[3] = v24;
          *((_BYTE *)Srb + 8) = -1;
          *((_QWORD *)Srb + 3) = MasterIrp;
          v31 = (unsigned int)MasterIrp->ThreadListEntry.Blink;
          if ( !v31 )
            v31 = *(_DWORD *)(a1 + 4124);
          Srb[5] = v31;
          *((_QWORD *)Srb + 6) = v8;
          *(_WORD *)((char *)Srb + 5) = 0;
          *((_BYTE *)Srb + 7) = 0;
          *(_QWORD *)(v8 + 168) = Srb;
          *(_QWORD *)(v8 + 184) = *((_QWORD *)Srb + 3);
          v30 = a2;
        }
        v32 = v41 + 1184;
        *(_QWORD *)(v8 + 176) = v30;
        RaSrbSetMiniportContext((int *)a1, (__int64)Srb, v32);
        if ( v23 )
          *(_BYTE *)(v8 + 17) |= 8u;
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        *(_QWORD *)(v8 + 656) = RaidXrbSignalCompletion;
        if ( !v23 )
          goto LABEL_88;
        RaidPauseAdapterQueue(a1);
        KeInitializeEvent(&Event, NotificationEvent, 0);
        StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 960), &Event);
        Timeout.QuadPart = -1200000000LL;
        v33 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
        v34 = v33 == 0;
        if ( v33 >= 0 )
          v34 = (unsigned int)GatewayWaitForForwardIoWithTimeout(a1, 120000LL) == 0;
        if ( v34 )
        {
LABEL_88:
          if ( *(_QWORD *)(a1 + 4960) )
            RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
          if ( *v25 == 1 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              WPP_SF_qqq(
                WPP_GLOBAL_Control->AttachedDevice,
                62LL,
                &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
                v8,
                v7,
                v7[13]);
            }
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              63LL,
              &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
              v8,
              Srb,
              *((_QWORD *)Srb + 7));
          }
          if ( *(_BYTE *)(a1 + 4370) )
            v35 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v8);
          else
            v35 = RaidAdapterPostScatterGatherExecute(a1, v8);
          v21 = v35;
          if ( v35 >= 0 )
          {
            KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
            v21 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
          }
          if ( v42 )
          {
            v36 = KfRaiseIrql(2u);
            RaidResumeAndRestartAdapterQueues(a1);
            KeLowerIrql(v36);
            v25 = v43;
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
            if ( *v25 == 1 )
              v37 = v7[8];
            else
              v37 = *((_QWORD *)Srb + 3);
            if ( *(_DWORD *)(v37 + 16) == 255 )
            {
              v21 = -1073741637;
            }
            else
            {
              Timeout.LowPart = 84;
              StorGetStorageProtocolCommandBufferTotalLength(MasterIrp, &Timeout);
              a2->IoStatus.Information = Timeout.LowPart;
            }
          }
        }
        else
        {
          a2->IoStatus.Information = 0LL;
          v21 = -1073741823;
        }
        v20 = v41;
      }
    }
  }
  else
  {
    v21 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), (__int64)a2, v42);
  if ( v20 )
  {
    RaidXrbDeallocateResources(v8, 0);
    StorFreeContiguousIoResources(a1, v20);
  }
  if ( Srb )
  {
    if ( *v43 == 1 )
    {
      if ( !v7 )
        v7 = Srb;
      v7[10] = 0LL;
      v7[13] = 0LL;
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
