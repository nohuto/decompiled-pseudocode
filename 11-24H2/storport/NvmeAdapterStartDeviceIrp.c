/*
 * XREFs of NvmeAdapterStartDeviceIrp @ 0x1400D868C
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaForwardIrpSynchronous @ 0x140015500 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzdq_EtwWriteTransfer @ 0x1400CB830 (McTemplateK0qjzdq_EtwWriteTransfer.c)
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  int v2; // edi
  ULONG v5; // eax
  __int64 Pool; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int started; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // rdx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  _IO_STACK_LOCATION *v16; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 ProviderId; // rdx
  char v20; // r12
  char v21; // r11
  _BYTE *v22; // r8
  unsigned __int8 v23; // r10
  char v24; // bp
  int v25; // eax
  char v26; // r13
  char v27; // r15
  char *v28; // r14
  unsigned int v29; // r9d
  unsigned int *v30; // r13
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  int v33; // r14d
  char v34; // r9
  _BYTE *v35; // rax
  unsigned int v36; // eax
  char v37; // al
  __int64 v39; // [rsp+20h] [rbp-A8h]
  __int64 v40; // [rsp+28h] [rbp-A0h]
  __int64 v41; // [rsp+30h] [rbp-98h]
  __int64 v42; // [rsp+38h] [rbp-90h]
  char v43; // [rsp+60h] [rbp-68h]
  char v44; // [rsp+61h] [rbp-67h]
  char v45; // [rsp+62h] [rbp-66h]
  int v46; // [rsp+68h] [rbp-60h]
  unsigned int v47; // [rsp+6Ch] [rbp-5Ch]
  GUID v48; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
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
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&NvmePnpAsyncStartComplete;
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
    started = NvmeAdapterStartDevice((__int64)Context, (__int64)Irp);
    v13 = Context + 1012;
    if ( started >= 0 )
      goto LABEL_9;
  }
  else
  {
    v13 = Context + 1012;
    *((_DWORD *)Context + 253) = 1;
  }
  if ( (byte_14017146A & 1) != 0 )
    McTemplateK0qjzdq_EtwWriteTransfer(
      (__int64)(Context + 1032),
      &EventNVMeAdapterStartFailure,
      v12,
      *((_DWORD *)Context + 14),
      (__int64)(Context + 1032),
      *((const wchar_t **)Context + 127),
      started,
      *v13);
LABEL_9:
  v14 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = started;
  if ( v14 )
    goto LABEL_78;
  v48 = 0LL;
  IoGetActivityIdIrp(Irp, &v48);
  v16 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v16->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_78;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( v16->MajorFunction != 15 )
  {
    if ( v16->MajorFunction != 27 )
      goto LABEL_78;
    if ( v16->MinorFunction == 7 && !v16->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v40) = Irp->IoStatus.Status;
        LODWORD(v39) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v15, (__int64)v16, &v48, Irp, v39, v40);
      }
      goto LABEL_78;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_78;
    v18 = &EventPnpRequestComplete;
LABEL_77:
    LODWORD(v39) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v48, Irp, v39);
    goto LABEL_78;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_78;
  ProviderId = v16->Parameters.WMI.ProviderId;
  v20 = 0;
  v21 = 0;
  v44 = 0;
  v22 = 0LL;
  v43 = 0;
  v23 = 0;
  v24 = 0;
  v25 = *(unsigned __int8 *)(ProviderId + 2);
  v26 = 0;
  v27 = 0;
  if ( (_BYTE)v25 != 40 )
  {
    v20 = *(_BYTE *)(ProviderId + 72);
    v22 = *(_BYTE **)(ProviderId + 32);
    v23 = *(_BYTE *)(ProviderId + 11);
    v21 = *(_BYTE *)(ProviderId + 4);
    goto LABEL_52;
  }
  v25 = *(_DWORD *)(ProviderId + 20);
  v28 = 0LL;
  v45 = 0;
  if ( v25 )
    goto LABEL_78;
  v29 = *(_DWORD *)(ProviderId + 56);
  v15 = 0LL;
  v46 = 0;
  v47 = v29;
  if ( !v29 )
    goto LABEL_49;
  v30 = (unsigned int *)(ProviderId + 120);
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_42:
    v15 = (unsigned int)(v15 + 1);
    ++v30;
    v46 = v15;
    if ( (unsigned int)v15 >= v29 )
      goto LABEL_48;
  }
  if ( *(_DWORD *)(v31 + ProviderId) != 64 )
  {
    v15 = (unsigned int)(*(_DWORD *)(v31 + ProviderId) - 65);
    if ( *(_DWORD *)(v31 + ProviderId) == 65 )
    {
      v15 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v31 + ProviderId + 10) )
          v28 = (char *)(v31 + ProviderId + 24);
        v21 = *(_BYTE *)(v31 + ProviderId + 8);
        v22 = *(_BYTE **)(v31 + ProviderId + 16);
        v23 = *(_BYTE *)(v31 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + ProviderId) == 66 )
    {
      v15 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + ProviderId + 12) )
          v28 = (char *)(v31 + ProviderId + 32);
        v22 = *(_BYTE **)(v31 + ProviderId + 24);
        goto LABEL_47;
      }
    }
    goto LABEL_40;
  }
  v15 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_40:
    if ( v45 )
      goto LABEL_48;
    LODWORD(v15) = v46;
    v29 = v47;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v31 + ProviderId + 10) )
    v28 = (char *)(v31 + ProviderId + 24);
  v22 = *(_BYTE **)(v31 + ProviderId + 16);
LABEL_47:
  v23 = *(_BYTE *)(v31 + ProviderId + 9);
  v21 = *(_BYTE *)(v31 + ProviderId + 8);
LABEL_48:
  v25 = 0;
  v26 = 0;
  v27 = 0;
LABEL_49:
  if ( !v28 )
  {
LABEL_52:
    v33 = started;
    if ( !v25 )
      goto LABEL_53;
    goto LABEL_78;
  }
  v20 = *v28;
  v33 = started;
LABEL_53:
  if ( ((v20 - 8) & 0x5D) == 0 )
  {
    v34 = *(_BYTE *)(ProviderId + 3);
    if ( v34 == 1 || !v22 || !v23 )
      goto LABEL_73;
    LOBYTE(ProviderId) = 0;
    v15 = (unsigned __int64)&v22[v23];
    v35 = v22 + 8;
    if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v35 <= v15 )
      {
        LOBYTE(ProviderId) = 1;
        v26 = v22[2];
        v24 = v22[1] & 0xF;
        v27 = v22[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v35 <= v15 )
      {
        v24 = v22[2] & 0xF;
        v36 = v23;
        if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
          v36 = (unsigned __int8)v22[7] + 8;
        v15 = (unsigned __int64)(v22 + 13);
        ProviderId = (unsigned __int64)&v22[v36];
        if ( (unsigned __int64)(v22 + 13) > ProviderId )
          v44 = 0;
        else
          v44 = v22[12];
        if ( (unsigned __int64)(v22 + 14) > ProviderId )
          v43 = 0;
        else
          v43 = *(_BYTE *)v15;
        LOBYTE(ProviderId) = 1;
      }
      v27 = v43;
      v26 = v44;
    }
    if ( (_BYTE)ProviderId )
    {
      LOBYTE(v2) = v26;
      started = v33;
      v37 = v27;
    }
    else
    {
LABEL_73:
      v24 = 0;
      v37 = 0;
    }
    LOBYTE(v42) = v24;
    LOBYTE(v41) = v21;
    LOBYTE(v40) = v34;
    LODWORD(v39) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v15, ProviderId, &v48, Irp, v39, v40, v41, v42, v2, v37, Irp);
  }
LABEL_78:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)started;
}
