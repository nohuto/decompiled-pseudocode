/*
 * XREFs of RaidAdapterStorageTcgDeassignLockingObject @ 0x14007C21C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidDeassignTcgLockingObject @ 0x14008B9A8 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgDeassignLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IRP *MasterIrp; // rdx
  _IRP *v6; // r13
  char v7; // r12
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v10; // eax
  int TcgProperties; // esi
  int v12; // r8d
  const wchar_t *v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 SecurityContext; // rdx
  char v20; // r12
  char v21; // r11
  _BYTE *v22; // r8
  unsigned __int8 v23; // r10
  char v24; // bl
  int v25; // eax
  char v26; // r13
  char *v27; // r15
  unsigned int v28; // r9d
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  int v32; // r15d
  char v33; // r9
  _BYTE *v34; // rax
  unsigned int v35; // eax
  unsigned __int64 v36; // r9
  char v37; // al
  __int64 v39; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v41; // [rsp+30h] [rbp-120h]
  __int64 v42; // [rsp+38h] [rbp-118h]
  __int64 v43; // [rsp+40h] [rbp-110h]
  __int64 v44; // [rsp+48h] [rbp-108h]
  char v45; // [rsp+D0h] [rbp-80h]
  char v46; // [rsp+D1h] [rbp-7Fh]
  char v47; // [rsp+D2h] [rbp-7Eh]
  int v48; // [rsp+D8h] [rbp-78h]
  unsigned int v49; // [rsp+DCh] [rbp-74h]
  __int128 v50; // [rsp+E0h] [rbp-70h] BYREF
  GUID v51; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v52; // [rsp+100h] [rbp-50h] BYREF
  char v53[16]; // [rsp+110h] [rbp-40h] BYREF
  __int128 v54; // [rsp+120h] [rbp-30h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v52 = 0LL;
  v50 = 0LL;
  *(_OWORD *)v53 = 0LL;
  v54 = 0LL;
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
        TcgProperties = RaidGetTcgProperties(a1, v53);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6064) + 53LL) )
          {
            LOBYTE(v12) = (__int64)v6->MdlAddress & 1;
            TcgProperties = RaidDeassignTcgLockingObject(
                              a1,
                              HIDWORD(v6->MdlAddress),
                              v12,
                              v6->Flags,
                              (__int64)(&v6->Flags + 1),
                              v53);
          }
          else
          {
            TcgProperties = -1073741637;
          }
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
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v50);
      if ( (byte_140171467 & 2) != 0 )
      {
        v13 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(a1 + 5080) )
          v13 = *(const wchar_t **)(a1 + 5080);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          v6->Flags,
          LODWORD(v6->MdlAddress),
          (__int64)v13,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v52,
          a1 + 5064,
          *((const wchar_t **)&v50 + 1),
          byte_140151064,
          byte_140151064,
          byte_140151064,
          v13,
          "TcgDeassignLockingObject",
          v53,
          TcgProperties,
          (char)v6->MdlAddress,
          v6->Flags,
          HIDWORD(v6->MdlAddress),
          0,
          0);
      }
    }
  }
  v14 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v14 )
    goto LABEL_94;
  v51 = 0LL;
  IoGetActivityIdIrp(Irp, &v51);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_94;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
        LODWORD(pszDest) = Irp->IoStatus.Status;
        LODWORD(v39) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v15, (__int64)CurrentStackLocation, &v51, Irp, v39, pszDest);
      }
      goto LABEL_94;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_94;
    v18 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v39) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v51, Irp, v39);
    goto LABEL_94;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_94;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v20 = 0;
  v21 = 0;
  v46 = 0;
  v22 = 0LL;
  v45 = 0;
  v23 = 0;
  v24 = 0;
  v25 = *(unsigned __int8 *)(SecurityContext + 2);
  v26 = 0;
  if ( (_BYTE)v25 != 40 )
  {
    v20 = *(_BYTE *)(SecurityContext + 72);
    v22 = *(_BYTE **)(SecurityContext + 32);
    v23 = *(_BYTE *)(SecurityContext + 11);
    v21 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_68;
  }
  v25 = *(_DWORD *)(SecurityContext + 20);
  v27 = 0LL;
  v47 = 0;
  if ( v25 )
    goto LABEL_94;
  v28 = *(_DWORD *)(SecurityContext + 56);
  v15 = 0LL;
  v48 = 0;
  v49 = v28;
  if ( !v28 )
    goto LABEL_65;
  v29 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v50 = SecurityContext + 120;
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_58:
    v15 = (unsigned int)(v15 + 1);
    v29 = (unsigned int *)(v50 + 4);
    v48 = v15;
    *(_QWORD *)&v50 = v50 + 4;
    if ( (unsigned int)v15 >= v28 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v30 + SecurityContext) != 64 )
  {
    v15 = (unsigned int)(*(_DWORD *)(v30 + SecurityContext) - 65);
    if ( *(_DWORD *)(v30 + SecurityContext) == 65 )
    {
      v15 = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v47 = 1;
        if ( *(_BYTE *)(v30 + SecurityContext + 10) )
          v27 = (char *)(v30 + SecurityContext + 24);
        v21 = *(_BYTE *)(v30 + SecurityContext + 8);
        v22 = *(_BYTE **)(v30 + SecurityContext + 16);
        v23 = *(_BYTE *)(v30 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + SecurityContext) == 66 )
    {
      v15 = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + SecurityContext + 12) )
          v27 = (char *)(v30 + SecurityContext + 32);
        v22 = *(_BYTE **)(v30 + SecurityContext + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v15 = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_56:
    if ( v47 )
      goto LABEL_64;
    LODWORD(v15) = v48;
    v28 = v49;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v30 + SecurityContext + 10) )
    v27 = (char *)(v30 + SecurityContext + 24);
  v22 = *(_BYTE **)(v30 + SecurityContext + 16);
LABEL_63:
  v23 = *(_BYTE *)(v30 + SecurityContext + 9);
  v21 = *(_BYTE *)(v30 + SecurityContext + 8);
LABEL_64:
  v25 = 0;
  v26 = 0;
LABEL_65:
  if ( !v27 )
  {
LABEL_68:
    v32 = TcgProperties;
    if ( !v25 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v20 = *v27;
  v32 = TcgProperties;
LABEL_69:
  if ( ((v20 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v22 || !v23 )
      goto LABEL_89;
    v33 = 0;
    v15 = (unsigned __int64)&v22[v23];
    v34 = v22 + 8;
    if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v34 <= v15 )
      {
        v33 = 1;
        v24 = v22[1] & 0xF;
        v26 = v22[3];
        v46 = v22[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v34 <= v15 )
      {
        v24 = v22[2] & 0xF;
        v35 = v23;
        if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
          v35 = (unsigned __int8)v22[7] + 8;
        v15 = (unsigned __int64)(v22 + 13);
        v36 = (unsigned __int64)&v22[v35];
        if ( (unsigned __int64)(v22 + 13) > v36 )
          v46 = 0;
        else
          v46 = v22[12];
        if ( (unsigned __int64)(v22 + 14) > v36 )
          v45 = 0;
        else
          v45 = *(_BYTE *)v15;
        v33 = 1;
      }
      v26 = v45;
    }
    if ( v33 )
    {
      LOBYTE(v2) = v46;
      TcgProperties = v32;
      v37 = v26;
    }
    else
    {
LABEL_89:
      v24 = 0;
      v37 = 0;
    }
    LOBYTE(v44) = v37;
    LOBYTE(v43) = v2;
    LOBYTE(v42) = v24;
    LOBYTE(v41) = v21;
    LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v39) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v15, SecurityContext, &v51, Irp, v39, pszDest, v41, v42, v43, v44, Irp);
  }
LABEL_94:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
