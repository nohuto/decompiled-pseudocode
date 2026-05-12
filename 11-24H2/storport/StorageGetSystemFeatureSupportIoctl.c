/*
 * XREFs of StorageGetSystemFeatureSupportIoctl @ 0x14008FE40
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorageGetSystemFeatureSupportIoctl(PIRP Irp)
{
  int v1; // ebx
  unsigned int v3; // r15d
  unsigned int Length; // ecx
  _IRP *MasterIrp; // rsi
  bool v6; // zf
  unsigned __int64 v7; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned __int64 ProviderId; // rdx
  char v12; // r12
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // bp
  char v16; // r11
  char v17; // r13
  char *v18; // r11
  unsigned int v19; // r14d
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  int Status; // [rsp+20h] [rbp-88h]
  char v30; // [rsp+60h] [rbp-48h]
  char v31; // [rsp+61h] [rbp-47h]
  unsigned int v32; // [rsp+64h] [rbp-44h]
  GUID v33; // [rsp+68h] [rbp-40h] BYREF

  v1 = 0;
  v3 = 0;
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  Irp->IoStatus.Information = 0LL;
  if ( MasterIrp )
  {
    if ( Length >= 0x40 )
    {
      memset_0(MasterIrp, 0, 0x40uLL);
      MasterIrp->MdlAddress = (_MDL *)((unsigned __int64)MasterIrp->MdlAddress | 1);
      *(_DWORD *)&MasterIrp->Type = 64;
      *(_DWORD *)(&MasterIrp->Size + 1) = 1;
      Irp->IoStatus.Information = 64LL;
    }
    else if ( Length >= 4 )
    {
      *(_DWORD *)&MasterIrp->Type = 64;
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v3 = -1073741789;
    }
  }
  else
  {
    v3 = -1073741811;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v3;
  if ( v6 )
    goto LABEL_72;
  v33 = 0LL;
  IoGetActivityIdIrp(Irp, &v33);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_72;
    Status = Irp->IoStatus.Status;
    v10 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_71;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_72;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v1 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v7, (__int64)CurrentStackLocation, &v33, Irp, v1, Irp->IoStatus.Status);
      }
      goto LABEL_72;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_72;
    v10 = &EventPnpRequestComplete;
    Status = Irp->IoStatus.Status;
LABEL_71:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v33, Irp, Status);
    goto LABEL_72;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_72;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v12 = 0;
  v13 = 0LL;
  v30 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v23 = *(_BYTE *)(ProviderId + 72);
    v13 = *(_BYTE **)(ProviderId + 32);
    v14 = *(_BYTE *)(ProviderId + 11);
    v12 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_48;
    goto LABEL_72;
  }
  v18 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_72;
  v19 = 0;
  v32 = *(_DWORD *)(ProviderId + 56);
  if ( !v32 )
    goto LABEL_45;
  while ( 1 )
  {
    v7 = *(unsigned int *)(ProviderId + 4LL * v19 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v20 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v7 < (unsigned int)v20 )
        break;
    }
LABEL_39:
    if ( ++v19 >= v32 )
      goto LABEL_45;
  }
  v21 = (unsigned int)v7;
  v22 = *(_DWORD *)(v7 + ProviderId) - 64;
  if ( v22 )
  {
    v7 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v7 = v21 + 40;
        if ( v21 + 40 <= v20 )
        {
          if ( *(_DWORD *)(v21 + ProviderId + 12) )
            v18 = (char *)(v21 + ProviderId + 32);
          v13 = *(_BYTE **)(v21 + ProviderId + 24);
          goto LABEL_44;
        }
      }
    }
    else
    {
      v7 = v21 + 56;
      if ( v21 + 56 <= v20 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v21 + ProviderId + 10) )
          v18 = (char *)(v21 + ProviderId + 24);
        v12 = *(_BYTE *)(v21 + ProviderId + 8);
        v13 = *(_BYTE **)(v21 + ProviderId + 16);
        v14 = *(_BYTE *)(v21 + ProviderId + 9);
      }
    }
    goto LABEL_38;
  }
  v7 = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_38:
    if ( v31 )
      goto LABEL_45;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v21 + ProviderId + 10) )
    v18 = (char *)(v21 + ProviderId + 24);
  v13 = *(_BYTE **)(v21 + ProviderId + 16);
LABEL_44:
  v14 = *(_BYTE *)(v21 + ProviderId + 9);
  v12 = *(_BYTE *)(v21 + ProviderId + 8);
LABEL_45:
  if ( v18 )
  {
    v23 = *v18;
    v16 = 0;
LABEL_48:
    LOBYTE(v7) = v23 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(ProviderId + 3);
      if ( v24 == 1 || !v13 || !v14 )
        goto LABEL_67;
      LOBYTE(ProviderId) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v25 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          LOBYTE(ProviderId) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v26 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v26 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          ProviderId = (unsigned __int64)&v13[v26];
          if ( (unsigned __int64)(v13 + 13) > ProviderId )
            v30 = 0;
          else
            v30 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= ProviderId )
            v17 = *(_BYTE *)v7;
          LOBYTE(ProviderId) = 1;
        }
        v16 = v30;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v1) = v16;
        v27 = v17;
      }
      else
      {
LABEL_67:
        v15 = 0;
        v27 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v7,
        ProviderId,
        &v33,
        Irp,
        Irp->IoStatus.Status,
        v24,
        v12,
        v15,
        v1,
        v27,
        Irp);
    }
  }
LABEL_72:
  IofCompleteRequest(Irp, 0);
  return v3;
}
