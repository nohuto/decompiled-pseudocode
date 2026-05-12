/*
 * XREFs of RaidAdapterMFNDNameSpaceRead @ 0x14005B974
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDNameSpaceRead @ 0x140067354 (StorLogMFNDNameSpaceRead.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorMFNDNameSpaceReadWrite @ 0x14018E90C (StorMFNDNameSpaceReadWrite.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpaceRead(__int64 a1, PIRP Irp)
{
  int v3; // ebx
  int v4; // r15d
  _IRP *MasterIrp; // rsi
  unsigned __int64 Length; // r14
  __int64 v7; // rdx
  struct _MDL *v8; // r9
  unsigned int v9; // ebp
  int MdlAddress_low; // r8d
  int IrpCount; // ecx
  int *v12; // rdx
  int v13; // edx
  __int64 v14; // r8
  int v15; // r9d
  int MdlAddress_high; // ecx
  bool v17; // zf
  __int64 v18; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned __int64 ProviderId; // rdx
  char v23; // r11
  char v24; // r14
  _BYTE *v25; // r8
  unsigned __int8 v26; // r10
  char v27; // r15
  int v28; // eax
  char v29; // r13
  char v30; // r12
  char *v31; // rsi
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  unsigned int *v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rcx
  char v38; // r9
  _BYTE *v39; // rax
  unsigned int v40; // eax
  char v41; // al
  __int64 v43; // [rsp+20h] [rbp-A8h]
  __int64 v44; // [rsp+28h] [rbp-A0h]
  PMDL SourceMdl; // [rsp+30h] [rbp-98h]
  __int64 v46; // [rsp+38h] [rbp-90h]
  __int64 v47; // [rsp+40h] [rbp-88h]
  char v48; // [rsp+60h] [rbp-68h]
  char v49; // [rsp+61h] [rbp-67h]
  char v50; // [rsp+62h] [rbp-66h]
  int v51; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v53; // [rsp+70h] [rbp-58h]
  GUID v54; // [rsp+78h] [rbp-50h] BYREF

  v3 = 0;
  v4 = a1;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v51 = 0;
  Irp->IoStatus.Information = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(v7 + 16) >= 0x20u )
    {
      if ( MasterIrp )
      {
        if ( MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
        {
          MdlAddress_low = LOWORD(MasterIrp->MdlAddress);
          if ( (_WORD)MdlAddress_low )
          {
            IrpCount = MasterIrp->AssociatedIrp.IrpCount;
            if ( IrpCount )
            {
              if ( (_DWORD)Length && v8 )
              {
                v12 = &v51;
                LOBYTE(v12) = 1;
                v9 = StorMFNDNameSpaceReadWrite(
                       v4,
                       (int)v12,
                       MdlAddress_low,
                       *(_QWORD *)&MasterIrp->Flags,
                       IrpCount,
                       BYTE4(MasterIrp->MdlAddress) & 1,
                       v8,
                       Length,
                       (__int64)&v51);
                if ( (v9 & 0x80000000) == 0 )
                  Irp->IoStatus.Information = Length;
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
    v9 = -1073741811;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( !MasterIrp )
  {
    v13 = -1;
    LODWORD(v14) = -1;
    v15 = -1;
    MdlAddress_high = -1;
    goto LABEL_17;
  }
LABEL_15:
  v13 = LOWORD(MasterIrp->MdlAddress);
  v14 = *(_QWORD *)&MasterIrp->Flags;
  v15 = MasterIrp->AssociatedIrp.IrpCount;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
LABEL_17:
  StorLogMFNDNameSpaceRead(v4, v13, v14, v15, MdlAddress_high, v51, v9);
  v17 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v9;
  if ( v17 )
    goto LABEL_90;
  v54 = 0LL;
  IoGetActivityIdIrp(Irp, &v54);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_90;
    LODWORD(v43) = Irp->IoStatus.Status;
    v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_89;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_90;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        LODWORD(v44) = Irp->IoStatus.Status;
        LODWORD(v43) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v18, (__int64)CurrentStackLocation, &v54, Irp, v43, v44);
      }
      goto LABEL_90;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_90;
    v21 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
    LODWORD(v43) = Irp->IoStatus.Status;
LABEL_89:
    McTemplateK0pd_EtwWriteTransfer(v18, v21, &v54, Irp, v43);
    goto LABEL_90;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_90;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v23 = 0;
  v24 = 0;
  v49 = 0;
  v25 = 0LL;
  v48 = 0;
  v26 = 0;
  v27 = 0;
  v28 = *(unsigned __int8 *)(ProviderId + 2);
  v29 = 0;
  v30 = 0;
  if ( (_BYTE)v28 != 40 )
  {
    v23 = *(_BYTE *)(ProviderId + 72);
    v25 = *(_BYTE **)(ProviderId + 32);
    v26 = *(_BYTE *)(ProviderId + 11);
    v24 = *(_BYTE *)(ProviderId + 4);
    goto LABEL_60;
  }
  v28 = *(_DWORD *)(ProviderId + 20);
  v31 = 0LL;
  v50 = 0;
  if ( v28 )
    goto LABEL_90;
  v32 = *(_DWORD *)(ProviderId + 56);
  v33 = 0;
  v52 = 0;
  v53 = v32;
  if ( !v32 )
    goto LABEL_57;
  v34 = (unsigned int *)(ProviderId + 120);
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_50:
    ++v33;
    ++v34;
    v52 = v33;
    if ( v33 >= v32 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v35 + ProviderId) != 64 )
  {
    if ( *(_DWORD *)(v35 + ProviderId) == 65 )
    {
      if ( v35 + 56 <= v36 )
      {
        v50 = 1;
        if ( *(_BYTE *)(v35 + ProviderId + 10) )
          v31 = (char *)(v35 + ProviderId + 24);
        v24 = *(_BYTE *)(v35 + ProviderId + 8);
        v25 = *(_BYTE **)(v35 + ProviderId + 16);
        v26 = *(_BYTE *)(v35 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v35 + ProviderId) == 66 && v35 + 40 <= v36 )
    {
      if ( *(_DWORD *)(v35 + ProviderId + 12) )
        v31 = (char *)(v35 + ProviderId + 32);
      v25 = *(_BYTE **)(v35 + ProviderId + 24);
      goto LABEL_55;
    }
    goto LABEL_48;
  }
  if ( v35 + 40 > v36 )
  {
LABEL_48:
    if ( v50 )
      goto LABEL_56;
    v33 = v52;
    v32 = v53;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v35 + ProviderId + 10) )
    v31 = (char *)(v35 + ProviderId + 24);
  v25 = *(_BYTE **)(v35 + ProviderId + 16);
LABEL_55:
  v26 = *(_BYTE *)(v35 + ProviderId + 9);
  v24 = *(_BYTE *)(v35 + ProviderId + 8);
LABEL_56:
  v28 = 0;
  v29 = 0;
  v30 = 0;
LABEL_57:
  if ( v31 )
  {
    v23 = *v31;
    v37 = v9;
    goto LABEL_61;
  }
LABEL_60:
  v37 = v9;
  if ( !v28 )
  {
LABEL_61:
    if ( ((v23 - 8) & 0x5F) == 0 )
      goto LABEL_66;
    if ( ((v23 - 10) & 0x5F) == 0 && v23 != -118 || (v9 = v37, v23 == -118) )
    {
      v9 = v37;
LABEL_66:
      v38 = *(_BYTE *)(ProviderId + 3);
      if ( v38 == 1 || !v25 || !v26 )
        goto LABEL_85;
      LOBYTE(ProviderId) = 0;
      v37 = (unsigned __int64)&v25[v26];
      v39 = v25 + 8;
      if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v39 <= v37 )
        {
          LOBYTE(ProviderId) = 1;
          v29 = v25[2];
          v27 = v25[1] & 0xF;
          v30 = v25[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v39 <= v37 )
        {
          v27 = v25[2] & 0xF;
          v40 = v26;
          if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
            v40 = (unsigned __int8)v25[7] + 8;
          v37 = (unsigned __int64)(v25 + 13);
          ProviderId = (unsigned __int64)&v25[v40];
          if ( (unsigned __int64)(v25 + 13) > ProviderId )
            v49 = 0;
          else
            v49 = v25[12];
          if ( (unsigned __int64)(v25 + 14) > ProviderId )
            v48 = 0;
          else
            v48 = *(_BYTE *)v37;
          LOBYTE(ProviderId) = 1;
        }
        v30 = v48;
        v29 = v49;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v3) = v29;
        v41 = v30;
      }
      else
      {
LABEL_85:
        v27 = 0;
        v41 = 0;
      }
      LOBYTE(v47) = v3;
      LOBYTE(v46) = v27;
      LOBYTE(SourceMdl) = v24;
      LOBYTE(v44) = v38;
      LODWORD(v43) = Irp->IoStatus.Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v37, ProviderId, &v54, Irp, v43, v44, SourceMdl, v46, v47, v41, Irp);
    }
  }
LABEL_90:
  IofCompleteRequest(Irp, 0);
  return v9;
}
