/*
 * XREFs of RaidAdapterStorageTcgEraseLockingObject @ 0x14007CDC0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidEraseTcgLockingObject @ 0x14008BED4 (RaidEraseTcgLockingObject.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgEraseLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IRP *MasterIrp; // rdx
  _IRP *v6; // r13
  char v7; // r12
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v10; // eax
  int TcgProperties; // esi
  const wchar_t *v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 SecurityContext; // rdx
  char v19; // r12
  char v20; // r11
  _BYTE *v21; // r8
  unsigned __int8 v22; // r10
  char v23; // bl
  int v24; // eax
  char v25; // r13
  char *v26; // r15
  unsigned int v27; // r9d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  int v31; // r15d
  char v32; // r9
  _BYTE *v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r9
  char v36; // al
  NTSTRSAFE_PSTR pszDest; // [rsp+20h] [rbp-130h]
  __int64 v39; // [rsp+28h] [rbp-128h]
  __int64 v40; // [rsp+30h] [rbp-120h]
  __int64 v41; // [rsp+38h] [rbp-118h]
  __int64 v42; // [rsp+40h] [rbp-110h]
  __int64 v43; // [rsp+48h] [rbp-108h]
  char v44; // [rsp+D0h] [rbp-80h]
  char v45; // [rsp+D1h] [rbp-7Fh]
  char v46; // [rsp+D2h] [rbp-7Eh]
  int v47; // [rsp+D8h] [rbp-78h]
  unsigned int v48; // [rsp+DCh] [rbp-74h]
  __int128 v49; // [rsp+E0h] [rbp-70h] BYREF
  GUID v50; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v51; // [rsp+100h] [rbp-50h] BYREF
  char v52[16]; // [rsp+110h] [rbp-40h] BYREF
  __int128 v53; // [rsp+120h] [rbp-30h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v51 = 0LL;
  v49 = 0LL;
  *(_OWORD *)v52 = 0LL;
  v53 = 0LL;
  if ( !MasterIrp )
    goto LABEL_18;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_18;
  v6 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_18;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_18;
  v10 = Flags + 20;
  if ( v10 < 0x18 )
    v10 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v10 && Options >= v10 )
  {
    if ( HIDWORD(MasterIrp->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        TcgProperties = -2147483631;
      }
      else
      {
        v7 = 1;
        TcgProperties = RaidGetTcgProperties(a1, v52);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6064) + 53LL) )
            TcgProperties = RaidEraseTcgLockingObject(a1, HIDWORD(v6->MdlAddress), v6->Flags, (int)v6 + 20, v52);
          else
            TcgProperties = -1073741637;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
      }
    }
    else
    {
      TcgProperties = -1073741637;
    }
  }
  else
  {
LABEL_18:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v7 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v49);
      if ( (byte_140171467 & 2) != 0 )
      {
        v12 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(a1 + 5080) )
          v12 = *(const wchar_t **)(a1 + 5080);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          v6->Flags,
          LODWORD(v6->MdlAddress),
          (__int64)v12,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v51,
          a1 + 5064,
          *((const wchar_t **)&v49 + 1),
          byte_140151064,
          byte_140151064,
          byte_140151064,
          v12,
          "TcgEraseLockingObject",
          v52,
          TcgProperties,
          (char)v6->MdlAddress,
          v6->Flags,
          HIDWORD(v6->MdlAddress),
          0,
          0);
      }
    }
  }
  v13 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v13 )
    goto LABEL_94;
  v50 = 0LL;
  IoGetActivityIdIrp(Irp, &v50);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_94;
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_94;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v39) = Irp->IoStatus.Status;
        LODWORD(pszDest) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v14, (__int64)CurrentStackLocation, &v50, Irp, pszDest, v39);
      }
      goto LABEL_94;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_94;
    v17 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(pszDest) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v50, Irp, pszDest);
    goto LABEL_94;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_94;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v19 = 0;
  v20 = 0;
  v45 = 0;
  v21 = 0LL;
  v44 = 0;
  v22 = 0;
  v23 = 0;
  v24 = *(unsigned __int8 *)(SecurityContext + 2);
  v25 = 0;
  if ( (_BYTE)v24 != 40 )
  {
    v19 = *(_BYTE *)(SecurityContext + 72);
    v21 = *(_BYTE **)(SecurityContext + 32);
    v22 = *(_BYTE *)(SecurityContext + 11);
    v20 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_68;
  }
  v24 = *(_DWORD *)(SecurityContext + 20);
  v26 = 0LL;
  v46 = 0;
  if ( v24 )
    goto LABEL_94;
  v27 = *(_DWORD *)(SecurityContext + 56);
  v14 = 0LL;
  v47 = 0;
  v48 = v27;
  if ( !v27 )
    goto LABEL_65;
  v28 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v49 = SecurityContext + 120;
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_58:
    v14 = (unsigned int)(v14 + 1);
    v28 = (unsigned int *)(v49 + 4);
    v47 = v14;
    *(_QWORD *)&v49 = v49 + 4;
    if ( (unsigned int)v14 >= v27 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v29 + SecurityContext) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v29 + SecurityContext) - 65);
    if ( *(_DWORD *)(v29 + SecurityContext) == 65 )
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v29 + SecurityContext + 10) )
          v26 = (char *)(v29 + SecurityContext + 24);
        v20 = *(_BYTE *)(v29 + SecurityContext + 8);
        v21 = *(_BYTE **)(v29 + SecurityContext + 16);
        v22 = *(_BYTE *)(v29 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + SecurityContext) == 66 )
    {
      v14 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + SecurityContext + 12) )
          v26 = (char *)(v29 + SecurityContext + 32);
        v21 = *(_BYTE **)(v29 + SecurityContext + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_56:
    if ( v46 )
      goto LABEL_64;
    LODWORD(v14) = v47;
    v27 = v48;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v29 + SecurityContext + 10) )
    v26 = (char *)(v29 + SecurityContext + 24);
  v21 = *(_BYTE **)(v29 + SecurityContext + 16);
LABEL_63:
  v22 = *(_BYTE *)(v29 + SecurityContext + 9);
  v20 = *(_BYTE *)(v29 + SecurityContext + 8);
LABEL_64:
  v24 = 0;
  v25 = 0;
LABEL_65:
  if ( !v26 )
  {
LABEL_68:
    v31 = TcgProperties;
    if ( !v24 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v19 = *v26;
  v31 = TcgProperties;
LABEL_69:
  if ( ((v19 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v21 || !v22 )
      goto LABEL_89;
    v32 = 0;
    v14 = (unsigned __int64)&v21[v22];
    v33 = v21 + 8;
    if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v33 <= v14 )
      {
        v32 = 1;
        v23 = v21[1] & 0xF;
        v25 = v21[3];
        v45 = v21[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v33 <= v14 )
      {
        v23 = v21[2] & 0xF;
        v34 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v34 = (unsigned __int8)v21[7] + 8;
        v14 = (unsigned __int64)(v21 + 13);
        v35 = (unsigned __int64)&v21[v34];
        if ( (unsigned __int64)(v21 + 13) > v35 )
          v45 = 0;
        else
          v45 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v35 )
          v44 = 0;
        else
          v44 = *(_BYTE *)v14;
        v32 = 1;
      }
      v25 = v44;
    }
    if ( v32 )
    {
      LOBYTE(v2) = v45;
      TcgProperties = v31;
      v36 = v25;
    }
    else
    {
LABEL_89:
      v23 = 0;
      v36 = 0;
    }
    LOBYTE(v43) = v36;
    LOBYTE(v42) = v2;
    LOBYTE(v41) = v23;
    LOBYTE(v40) = v20;
    LOBYTE(v39) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(pszDest) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v14, SecurityContext, &v50, Irp, pszDest, v39, v40, v41, v42, v43, Irp);
  }
LABEL_94:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
