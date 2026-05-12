/*
 * XREFs of RaidAdapterStorageTcgActivateLocking @ 0x14007B66C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidActivateTcgLocking @ 0x14008A8E4 (RaidActivateTcgLocking.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageTcgActivateLocking(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IRP *MasterIrp; // rdx
  _IRP *v6; // r15
  char v7; // r12
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v10; // eax
  int TcgProperties; // r14d
  int v12; // edx
  int v13; // r8d
  const wchar_t *v14; // r8
  bool v15; // zf
  unsigned __int64 v16; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 SecurityContext; // rdx
  char v21; // r12
  char v22; // r11
  _BYTE *v23; // r8
  unsigned __int8 v24; // r10
  char v25; // bl
  int v26; // eax
  char v27; // r13
  char *v28; // r15
  unsigned int v29; // r9d
  unsigned int *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  int v33; // r15d
  char v34; // r9
  _BYTE *v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // r9
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v42; // [rsp+30h] [rbp-120h]
  __int64 v43; // [rsp+38h] [rbp-118h]
  __int64 v44; // [rsp+40h] [rbp-110h]
  __int64 v45; // [rsp+48h] [rbp-108h]
  char v46; // [rsp+D0h] [rbp-80h]
  char v47; // [rsp+D1h] [rbp-7Fh]
  char v48; // [rsp+D2h] [rbp-7Eh]
  int v49; // [rsp+D8h] [rbp-78h]
  unsigned int v50; // [rsp+DCh] [rbp-74h]
  __int128 v51; // [rsp+E0h] [rbp-70h] BYREF
  GUID v52; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v53; // [rsp+100h] [rbp-50h] BYREF
  char v54[16]; // [rsp+110h] [rbp-40h] BYREF
  __int128 v55; // [rsp+120h] [rbp-30h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v53 = 0LL;
  v51 = 0LL;
  *(_OWORD *)v54 = 0LL;
  v55 = 0LL;
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_14;
  v6 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_14;
  v10 = Flags + 20;
  if ( v10 < 0x18 )
    v10 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v10 && Options >= v10 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      TcgProperties = -2147483631;
    }
    else
    {
      v7 = 1;
      TcgProperties = RaidGetTcgProperties(a1, v54);
      if ( TcgProperties >= 0 )
      {
        LOBYTE(v13) = BYTE5(v6->MdlAddress);
        LOBYTE(v12) = BYTE4(v6->MdlAddress);
        TcgProperties = RaidActivateTcgLocking(a1, v12, v13, v6->Flags, (__int64)(&v6->Flags + 1), v54);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
    }
  }
  else
  {
LABEL_14:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v7 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v51);
      if ( (byte_140171467 & 2) != 0 )
      {
        v14 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(a1 + 5080) )
          v14 = *(const wchar_t **)(a1 + 5080);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          BYTE5(v6->MdlAddress),
          BYTE4(v6->MdlAddress),
          (__int64)v14,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v53,
          a1 + 5064,
          *((const wchar_t **)&v51 + 1),
          byte_140151064,
          byte_140151064,
          byte_140151064,
          v14,
          "TcgActivateLocking",
          v54,
          TcgProperties,
          BYTE4(v6->MdlAddress),
          BYTE5(v6->MdlAddress),
          v6->Flags,
          0,
          0);
      }
    }
  }
  v15 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v15 )
    goto LABEL_90;
  v52 = 0LL;
  IoGetActivityIdIrp(Irp, &v52);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_90;
    v19 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
          v2 = *Information;
        LODWORD(pszDest) = Irp->IoStatus.Status;
        LODWORD(v40) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v16, (__int64)CurrentStackLocation, &v52, Irp, v40, pszDest);
      }
      goto LABEL_90;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_90;
    v19 = &EventPnpRequestComplete;
LABEL_89:
    LODWORD(v40) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v16, v19, &v52, Irp, v40);
    goto LABEL_90;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_90;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v21 = 0;
  v22 = 0;
  v47 = 0;
  v23 = 0LL;
  v46 = 0;
  v24 = 0;
  v25 = 0;
  v26 = *(unsigned __int8 *)(SecurityContext + 2);
  v27 = 0;
  if ( (_BYTE)v26 != 40 )
  {
    v21 = *(_BYTE *)(SecurityContext + 72);
    v23 = *(_BYTE **)(SecurityContext + 32);
    v24 = *(_BYTE *)(SecurityContext + 11);
    v22 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_64;
  }
  v26 = *(_DWORD *)(SecurityContext + 20);
  v28 = 0LL;
  v48 = 0;
  if ( v26 )
    goto LABEL_90;
  v29 = *(_DWORD *)(SecurityContext + 56);
  v16 = 0LL;
  v49 = 0;
  v50 = v29;
  if ( !v29 )
    goto LABEL_61;
  v30 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v51 = SecurityContext + 120;
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_54:
    v16 = (unsigned int)(v16 + 1);
    v30 = (unsigned int *)(v51 + 4);
    v49 = v16;
    *(_QWORD *)&v51 = v51 + 4;
    if ( (unsigned int)v16 >= v29 )
      goto LABEL_60;
  }
  if ( *(_DWORD *)(v31 + SecurityContext) != 64 )
  {
    v16 = (unsigned int)(*(_DWORD *)(v31 + SecurityContext) - 65);
    if ( *(_DWORD *)(v31 + SecurityContext) == 65 )
    {
      v16 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v31 + SecurityContext + 10) )
          v28 = (char *)(v31 + SecurityContext + 24);
        v22 = *(_BYTE *)(v31 + SecurityContext + 8);
        v23 = *(_BYTE **)(v31 + SecurityContext + 16);
        v24 = *(_BYTE *)(v31 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + SecurityContext) == 66 )
    {
      v16 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + SecurityContext + 12) )
          v28 = (char *)(v31 + SecurityContext + 32);
        v23 = *(_BYTE **)(v31 + SecurityContext + 24);
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v16 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_52:
    if ( v48 )
      goto LABEL_60;
    LODWORD(v16) = v49;
    v29 = v50;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v31 + SecurityContext + 10) )
    v28 = (char *)(v31 + SecurityContext + 24);
  v23 = *(_BYTE **)(v31 + SecurityContext + 16);
LABEL_59:
  v24 = *(_BYTE *)(v31 + SecurityContext + 9);
  v22 = *(_BYTE *)(v31 + SecurityContext + 8);
LABEL_60:
  v26 = 0;
  v27 = 0;
LABEL_61:
  if ( !v28 )
  {
LABEL_64:
    v33 = TcgProperties;
    if ( !v26 )
      goto LABEL_65;
    goto LABEL_90;
  }
  v21 = *v28;
  v33 = TcgProperties;
LABEL_65:
  if ( ((v21 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v23 || !v24 )
      goto LABEL_85;
    v34 = 0;
    v16 = (unsigned __int64)&v23[v24];
    v35 = v23 + 8;
    if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v35 <= v16 )
      {
        v34 = 1;
        v25 = v23[1] & 0xF;
        v27 = v23[3];
        v47 = v23[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v35 <= v16 )
      {
        v25 = v23[2] & 0xF;
        v36 = v24;
        if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
          v36 = (unsigned __int8)v23[7] + 8;
        v16 = (unsigned __int64)(v23 + 13);
        v37 = (unsigned __int64)&v23[v36];
        if ( (unsigned __int64)(v23 + 13) > v37 )
          v47 = 0;
        else
          v47 = v23[12];
        if ( (unsigned __int64)(v23 + 14) > v37 )
          v46 = 0;
        else
          v46 = *(_BYTE *)v16;
        v34 = 1;
      }
      v27 = v46;
    }
    if ( v34 )
    {
      LOBYTE(v2) = v47;
      TcgProperties = v33;
      v38 = v27;
    }
    else
    {
LABEL_85:
      v25 = 0;
      v38 = 0;
    }
    LOBYTE(v45) = v38;
    LOBYTE(v44) = v2;
    LOBYTE(v43) = v25;
    LOBYTE(v42) = v22;
    LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v40) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v16, SecurityContext, &v52, Irp, v40, pszDest, v42, v43, v44, v45, Irp);
  }
LABEL_90:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
