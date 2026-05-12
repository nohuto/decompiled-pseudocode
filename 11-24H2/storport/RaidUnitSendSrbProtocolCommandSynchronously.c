/*
 * XREFs of RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A05BC
 * Callers:
 *     RaUnitProtocolCommandIoctl @ 0x1400395D0 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x14000C61C (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x14000D344 (StorFreeSynchronousScsiRequest.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 *     StorEtwProtocolCommandCompletion @ 0x140042340 (StorEtwProtocolCommandCompletion.c)
 *     StorGetStorageProtocolCommandBufferTotalLength @ 0x14008F6F4 (StorGetStorageProtocolCommandBufferTotalLength.c)
 */

__int64 __fastcall RaidUnitSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _DWORD *v4; // r12
  _IRP *MasterIrp; // r14
  unsigned int Options; // r13d
  unsigned int Length; // eax
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  __int64 Srb; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  NTSTATUS v16; // edi
  bool v17; // zf
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned int LockArray_high; // eax
  __int64 v22; // rdx
  int Blink; // eax
  int v24; // eax
  IRP *v25; // rax
  IRP *v26; // r13
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF
  char v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_DWORD **)(a1 + 24);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v29 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v11 = 0LL;
  if ( Options <= Length )
    Options = Length;
  if ( *v4 == 1314275652 )
  {
    v12 = (__int64)v4 + 274;
  }
  else if ( *v4 == 1094997074 )
  {
    v12 = (__int64)v4 + 482;
  }
  else
  {
    v12 = 98LL;
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 9u, *(_BYTE *)v12, 0);
  v14 = 0LL;
  v15 = Srb;
  if ( !Srb )
    goto LABEL_9;
  v17 = DisableIEEE1667 == 0;
  MasterIrp->Flags = 255;
  if ( !v17
    && LODWORD(MasterIrp->MdlAddress) == 3
    && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
    && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
  {
    v16 = -1073741637;
  }
  else
  {
    v18 = (LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0) | 0x40;
    if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
      v18 = LODWORD(MasterIrp->ThreadListEntry.Flink) != 0 ? 0x80 : 0;
    if ( !a3 )
    {
      v18 |= 0x102u;
      if ( *(_BYTE *)(Srb + 2) == 40 )
        *(_WORD *)(Srb + 38) = 32;
      else
        *(_BYTE *)(Srb + 9) = 32;
    }
    if ( *(_BYTE *)v12 == 1 )
    {
      v19 = *(unsigned int *)(Srb + 52);
      v11 = Srb;
      *(_DWORD *)(Srb + 20) = 9;
      *(_DWORD *)(Srb + 24) = v18;
      v20 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v20 == 1094997074 && (*(_BYTE *)(v20 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v20 + 6168) + 8LL * LockArray_high));
        v22 = **(_QWORD **)(*(_QWORD *)(v20 + 6168) + 8LL * LockArray_high);
        *(_DWORD *)(v15 + 44) = HIDWORD(v22);
      }
      else
      {
        LODWORD(v22) = -1;
      }
      *(_DWORD *)(v15 + 32) = v22;
      *(_QWORD *)(v15 + 64) = MasterIrp;
      *(_DWORD *)(v15 + 60) = Options;
      *(_WORD *)(v15 + 36) = IoGetIoPriorityHint(a2);
      *(_QWORD *)(v15 + 80) = a2;
      Blink = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !Blink )
        Blink = *(_DWORD *)(a1 + 1392);
      *(_DWORD *)(v15 + 40) = Blink;
      *(_BYTE *)(v19 + v15 + 8) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v19 + v15 + 9) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v19 + v15 + 10) = *(_BYTE *)(a1 + 106);
    }
    else
    {
      *(_WORD *)Srb = 88;
      *(_BYTE *)(Srb + 2) = 9;
      *(_DWORD *)(Srb + 12) = v18;
      *(_BYTE *)(Srb + 8) = -1;
      *(_QWORD *)(Srb + 24) = MasterIrp;
      *(_DWORD *)(Srb + 16) = Options;
      *(_QWORD *)(Srb + 48) = a2;
      v24 = (int)MasterIrp->ThreadListEntry.Blink;
      if ( !v24 )
        v24 = *(_DWORD *)(a1 + 1392);
      *(_DWORD *)(v15 + 20) = v24;
      *(_BYTE *)(v15 + 5) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v15 + 6) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v15 + 7) = *(_BYTE *)(a1 + 106);
    }
    v25 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v15, v14, &v29);
    v26 = v25;
    if ( !v25 )
    {
LABEL_9:
      v16 = -1073741801;
      goto LABEL_43;
    }
    if ( *(_BYTE *)v12 == 1 )
    {
      v11 = v15;
      *(_QWORD *)(v15 + 80) = a2;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = a2;
    }
    v16 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v25);
    if ( v16 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
      {
        v16 = -1073741637;
      }
      else
      {
        v30 = 84;
        StorGetStorageProtocolCommandBufferTotalLength(MasterIrp, &v30);
        a2->IoStatus.Information = v30;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    StorFreeSynchronousScsiRequest(v26);
  }
LABEL_43:
  if ( StorEtwLoggingEnabled )
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), (__int64)a2, v31);
  if ( v15 )
  {
    if ( *(_BYTE *)v12 == 1 )
    {
      if ( !v11 )
        v11 = v15;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_QWORD *)(v15 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v15, 0x72536152u);
  }
  return (unsigned int)v16;
}
