/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1400164A4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x140015724 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaForwardIrpSynchronous @ 0x140015500 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     StorLogStartAdapterFailure @ 0x14008FD04 (StorLogStartAdapterFailure.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(PVOID Context, PIRP Irp)
{
  int v2; // edi
  ULONG v5; // eax
  __int64 Pool; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int started; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v11; // rax
  bool v12; // zf
  char *v13; // rcx
  _IO_STACK_LOCATION *v14; // rdx
  int *Information; // rax
  void *v16; // rdx
  unsigned __int64 ProviderId; // rdx
  char v18; // r12
  char v19; // r11
  _BYTE *v20; // r8
  unsigned __int8 v21; // r10
  char v22; // bp
  int v23; // eax
  char v24; // r13
  char v25; // r15
  char *v26; // r14
  unsigned int v27; // r9d
  unsigned int *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  int v31; // r14d
  char v32; // r9
  char *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  char v37; // [rsp+60h] [rbp-68h]
  char v38; // [rsp+61h] [rbp-67h]
  char v39; // [rsp+62h] [rbp-66h]
  int v40; // [rsp+68h] [rbp-60h]
  unsigned int v41; // [rsp+6Ch] [rbp-5Ch]
  __int128 v42; // [rsp+70h] [rbp-58h] BYREF

  LOBYTE(v2) = 0;
  if ( StorageAsyncStart )
  {
    v5 = IoSizeofWorkItem();
    Pool = RaidAllocatePool(64LL, v5 + 24LL, 1230463314LL, *((_QWORD *)Context + 1));
    v7 = (_QWORD *)Pool;
    if ( Pool )
    {
      v8 = Pool + 24;
      IoInitializeWorkItem(*((PVOID *)Context + 1), (PIO_WORKITEM)(Pool + 24));
      *v7 = v8;
      v7[1] = Irp;
      v7[2] = Context;
      started = 259;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RaidPnPAsyncStartComplete;
      v11[-1].Context = v7;
      v11[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*((PDEVICE_OBJECT *)Context + 3), Irp);
      return (unsigned int)started;
    }
  }
  started = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
  if ( started >= 0 )
  {
    started = RaidAdapterStartDevice(Context);
    if ( started >= 0 )
      goto LABEL_8;
  }
  else
  {
    *((_DWORD *)Context + 1547) = 1;
  }
  StorLogStartAdapterFailure(Context, (unsigned int)started);
LABEL_8:
  v12 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = started;
  if ( v12 )
    goto LABEL_77;
  v42 = 0LL;
  IoGetActivityIdIrp(Irp, &v42);
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v14->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_77;
    v16 = &EventNonReadWriteRequestComplete;
    goto LABEL_76;
  }
  if ( v14->MajorFunction != 15 )
  {
    if ( v14->MajorFunction != 27 )
      goto LABEL_77;
    if ( v14->MinorFunction == 7 && !v14->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)v13,
          (_DWORD)v14,
          (unsigned int)&v42,
          (_DWORD)Irp,
          v2,
          Irp->IoStatus.Status);
      }
      goto LABEL_77;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_77;
    v16 = &EventPnpRequestComplete;
LABEL_76:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v42, Irp, Irp->IoStatus.Status);
    goto LABEL_77;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_77;
  ProviderId = v14->Parameters.WMI.ProviderId;
  v18 = 0;
  v19 = 0;
  v38 = 0;
  v20 = 0LL;
  v37 = 0;
  v21 = 0;
  v22 = 0;
  v23 = *(unsigned __int8 *)(ProviderId + 2);
  v24 = 0;
  v25 = 0;
  if ( (_BYTE)v23 != 40 )
  {
    v18 = *(_BYTE *)(ProviderId + 72);
    v20 = *(_BYTE **)(ProviderId + 32);
    v21 = *(_BYTE *)(ProviderId + 11);
    v19 = *(_BYTE *)(ProviderId + 4);
    goto LABEL_51;
  }
  v23 = *(_DWORD *)(ProviderId + 20);
  v26 = 0LL;
  v39 = 0;
  if ( v23 )
    goto LABEL_77;
  v27 = *(_DWORD *)(ProviderId + 56);
  LODWORD(v13) = 0;
  v40 = 0;
  v41 = v27;
  if ( !v27 )
    goto LABEL_48;
  v28 = (unsigned int *)(ProviderId + 120);
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_41:
    LODWORD(v13) = (_DWORD)v13 + 1;
    ++v28;
    v40 = (int)v13;
    if ( (unsigned int)v13 >= v27 )
      goto LABEL_47;
  }
  if ( *(_DWORD *)(v29 + ProviderId) != 64 )
  {
    LODWORD(v13) = *(_DWORD *)(v29 + ProviderId) - 65;
    if ( *(_DWORD *)(v29 + ProviderId) == 65 )
    {
      LODWORD(v13) = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v29 + ProviderId + 10) )
          v26 = (char *)(v29 + ProviderId + 24);
        v19 = *(_BYTE *)(v29 + ProviderId + 8);
        v20 = *(_BYTE **)(v29 + ProviderId + 16);
        v21 = *(_BYTE *)(v29 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + ProviderId) == 66 )
    {
      LODWORD(v13) = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + ProviderId + 12) )
          v26 = (char *)(v29 + ProviderId + 32);
        v20 = *(_BYTE **)(v29 + ProviderId + 24);
        goto LABEL_46;
      }
    }
    goto LABEL_39;
  }
  LODWORD(v13) = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_39:
    if ( v39 )
      goto LABEL_47;
    LODWORD(v13) = v40;
    v27 = v41;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v29 + ProviderId + 10) )
    v26 = (char *)(v29 + ProviderId + 24);
  v20 = *(_BYTE **)(v29 + ProviderId + 16);
LABEL_46:
  v21 = *(_BYTE *)(v29 + ProviderId + 9);
  v19 = *(_BYTE *)(v29 + ProviderId + 8);
LABEL_47:
  v23 = 0;
  v24 = 0;
  v25 = 0;
LABEL_48:
  if ( !v26 )
  {
LABEL_51:
    v31 = started;
    if ( !v23 )
      goto LABEL_52;
    goto LABEL_77;
  }
  v18 = *v26;
  v31 = started;
LABEL_52:
  if ( ((v18 - 8) & 0x5D) == 0 )
  {
    v32 = *(_BYTE *)(ProviderId + 3);
    if ( v32 == 1 || !v20 || !v21 )
      goto LABEL_72;
    LOBYTE(ProviderId) = 0;
    v13 = &v20[v21];
    v33 = v20 + 8;
    if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
    {
      if ( v33 <= v13 )
      {
        LOBYTE(ProviderId) = 1;
        v24 = v20[2];
        v22 = v20[1] & 0xF;
        v25 = v20[3];
      }
    }
    else
    {
      if ( v33 <= v13 )
      {
        v22 = v20[2] & 0xF;
        v34 = v21;
        if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
          v34 = (unsigned __int8)v20[7] + 8;
        v13 = v20 + 13;
        ProviderId = (unsigned __int64)&v20[v34];
        if ( (unsigned __int64)(v20 + 13) > ProviderId )
          v38 = 0;
        else
          v38 = v20[12];
        if ( (unsigned __int64)(v20 + 14) > ProviderId )
          v37 = 0;
        else
          v37 = *v13;
        LOBYTE(ProviderId) = 1;
      }
      v25 = v37;
      v24 = v38;
    }
    if ( (_BYTE)ProviderId )
    {
      LOBYTE(v2) = v24;
      started = v31;
      v35 = v25;
    }
    else
    {
LABEL_72:
      v22 = 0;
      v35 = 0;
    }
    McTemplateK0pduuuuup_EtwWriteTransfer(
      (_DWORD)v13,
      ProviderId,
      (unsigned int)&v42,
      (_DWORD)Irp,
      Irp->IoStatus.Status,
      v32,
      v19,
      v22,
      v2,
      v35,
      (char)Irp);
  }
LABEL_77:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)started;
}
