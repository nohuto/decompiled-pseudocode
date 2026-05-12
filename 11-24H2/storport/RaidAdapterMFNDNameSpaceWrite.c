/*
 * XREFs of RaidAdapterMFNDNameSpaceWrite @ 0x14005BE0C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDNameSpaceWrite @ 0x14006760C (StorLogMFNDNameSpaceWrite.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorMFNDNameSpaceReadWrite @ 0x14018E90C (StorMFNDNameSpaceReadWrite.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpaceWrite(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rsi
  int v4; // ebx
  int v5; // r15d
  unsigned int Length; // r14d
  unsigned int v7; // edx
  struct _MDL *v8; // r9
  __int16 v9; // r10
  unsigned int v10; // ebp
  int MdlAddress_low; // r8d
  int IrpCount; // ecx
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // r8
  int v16; // r9d
  int MdlAddress_high; // eax
  bool v18; // zf
  unsigned __int64 v19; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 ProviderId; // rdx
  char v24; // r12
  char v25; // r11
  _BYTE *v26; // r8
  unsigned __int8 v27; // r10
  char v28; // si
  int v29; // eax
  char v30; // r13
  char v31; // r15
  char *v32; // r14
  unsigned int v33; // r9d
  unsigned int *v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  unsigned int v37; // r14d
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
  int v52; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v53; // [rsp+70h] [rbp-58h]
  GUID v54; // [rsp+78h] [rbp-50h] BYREF

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v4 = 0;
  v5 = a1;
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v51 = 0;
  Irp->IoStatus.Information = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( v7 >= 0x20 )
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
              if ( Length && v8 )
              {
                v13 = StorMFNDNameSpaceReadWrite(
                        v5,
                        0,
                        MdlAddress_low,
                        *(_QWORD *)&MasterIrp->Flags,
                        IrpCount,
                        BYTE4(MasterIrp->MdlAddress) & 1,
                        v8,
                        Length,
                        (__int64)&v51);
                v9 = v51;
                v10 = v13;
LABEL_14:
                v14 = LOWORD(MasterIrp->MdlAddress);
                v15 = *(_QWORD *)&MasterIrp->Flags;
                v16 = MasterIrp->AssociatedIrp.IrpCount;
                MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    v10 = -1073741811;
  }
  else
  {
    v10 = -1073741637;
  }
  if ( MasterIrp )
    goto LABEL_14;
  v14 = -1;
  LODWORD(v15) = -1;
  v16 = -1;
  MdlAddress_high = -1;
LABEL_16:
  StorLogMFNDNameSpaceWrite(v5, v14, v15, v16, MdlAddress_high, Length, v9, v10);
  v18 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v10;
  if ( v18 )
    goto LABEL_85;
  v54 = 0LL;
  IoGetActivityIdIrp(Irp, &v54);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_85;
    v22 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_84;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_85;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v4 = *Information;
        LODWORD(v44) = Irp->IoStatus.Status;
        LODWORD(v43) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v19, (__int64)CurrentStackLocation, &v54, Irp, v43, v44);
      }
      goto LABEL_85;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_85;
    v22 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_84:
    LODWORD(v43) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v54, Irp, v43);
    goto LABEL_85;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_85;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v24 = 0;
  v25 = 0;
  v49 = 0;
  v26 = 0LL;
  v48 = 0;
  v27 = 0;
  v28 = 0;
  v29 = *(unsigned __int8 *)(ProviderId + 2);
  v30 = 0;
  v31 = 0;
  if ( (_BYTE)v29 != 40 )
  {
    v24 = *(_BYTE *)(ProviderId + 72);
    v26 = *(_BYTE **)(ProviderId + 32);
    v27 = *(_BYTE *)(ProviderId + 11);
    v25 = *(_BYTE *)(ProviderId + 4);
    goto LABEL_59;
  }
  v29 = *(_DWORD *)(ProviderId + 20);
  v32 = 0LL;
  v50 = 0;
  if ( v29 )
    goto LABEL_85;
  v33 = *(_DWORD *)(ProviderId + 56);
  v19 = 0LL;
  v52 = 0;
  v53 = v33;
  if ( !v33 )
    goto LABEL_56;
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
LABEL_49:
    v19 = (unsigned int)(v19 + 1);
    ++v34;
    v52 = v19;
    if ( (unsigned int)v19 >= v33 )
      goto LABEL_55;
  }
  if ( *(_DWORD *)(v35 + ProviderId) != 64 )
  {
    v19 = (unsigned int)(*(_DWORD *)(v35 + ProviderId) - 65);
    if ( *(_DWORD *)(v35 + ProviderId) == 65 )
    {
      v19 = v35 + 56;
      if ( v35 + 56 <= v36 )
      {
        v50 = 1;
        if ( *(_BYTE *)(v35 + ProviderId + 10) )
          v32 = (char *)(v35 + ProviderId + 24);
        v25 = *(_BYTE *)(v35 + ProviderId + 8);
        v26 = *(_BYTE **)(v35 + ProviderId + 16);
        v27 = *(_BYTE *)(v35 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v35 + ProviderId) == 66 )
    {
      v19 = v35 + 40;
      if ( v35 + 40 <= v36 )
      {
        if ( *(_DWORD *)(v35 + ProviderId + 12) )
          v32 = (char *)(v35 + ProviderId + 32);
        v26 = *(_BYTE **)(v35 + ProviderId + 24);
        goto LABEL_54;
      }
    }
    goto LABEL_47;
  }
  v19 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_47:
    if ( v50 )
      goto LABEL_55;
    LODWORD(v19) = v52;
    v33 = v53;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v35 + ProviderId + 10) )
    v32 = (char *)(v35 + ProviderId + 24);
  v26 = *(_BYTE **)(v35 + ProviderId + 16);
LABEL_54:
  v27 = *(_BYTE *)(v35 + ProviderId + 9);
  v25 = *(_BYTE *)(v35 + ProviderId + 8);
LABEL_55:
  v29 = 0;
  v30 = 0;
  v31 = 0;
LABEL_56:
  if ( !v32 )
  {
LABEL_59:
    v37 = v10;
    if ( !v29 )
      goto LABEL_60;
    goto LABEL_85;
  }
  v24 = *v32;
  v37 = v10;
LABEL_60:
  if ( ((v24 - 8) & 0x5D) == 0 )
  {
    v38 = *(_BYTE *)(ProviderId + 3);
    if ( v38 == 1 || !v26 || !v27 )
      goto LABEL_80;
    LOBYTE(ProviderId) = 0;
    v19 = (unsigned __int64)&v26[v27];
    v39 = v26 + 8;
    if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v39 <= v19 )
      {
        LOBYTE(ProviderId) = 1;
        v30 = v26[2];
        v28 = v26[1] & 0xF;
        v31 = v26[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v39 <= v19 )
      {
        v28 = v26[2] & 0xF;
        v40 = v27;
        if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
          v40 = (unsigned __int8)v26[7] + 8;
        v19 = (unsigned __int64)(v26 + 13);
        ProviderId = (unsigned __int64)&v26[v40];
        if ( (unsigned __int64)(v26 + 13) > ProviderId )
          v49 = 0;
        else
          v49 = v26[12];
        if ( (unsigned __int64)(v26 + 14) > ProviderId )
          v48 = 0;
        else
          v48 = *(_BYTE *)v19;
        LOBYTE(ProviderId) = 1;
      }
      v31 = v48;
      v30 = v49;
    }
    if ( (_BYTE)ProviderId )
    {
      LOBYTE(v4) = v30;
      v10 = v37;
      v41 = v31;
    }
    else
    {
LABEL_80:
      v28 = 0;
      v41 = 0;
    }
    LOBYTE(v47) = v4;
    LOBYTE(v46) = v28;
    LOBYTE(SourceMdl) = v25;
    LOBYTE(v44) = v38;
    LODWORD(v43) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v19, ProviderId, &v54, Irp, v43, v44, SourceMdl, v46, v47, v41, Irp);
  }
LABEL_85:
  IofCompleteRequest(Irp, 0);
  return v10;
}
