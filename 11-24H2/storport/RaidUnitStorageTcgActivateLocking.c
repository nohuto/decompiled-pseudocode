/*
 * XREFs of RaidUnitStorageTcgActivateLocking @ 0x14007FF0C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
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

__int64 __fastcall RaidUnitStorageTcgActivateLocking(__int64 a1, PIRP Irp)
{
  int v2; // r15d
  _IRP *MasterIrp; // rdx
  _IRP *v6; // rbx
  char v7; // di
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v10; // eax
  int TcgProperties; // r12d
  int v12; // edx
  int v13; // r8d
  char v14; // r11
  __int64 v15; // r9
  const wchar_t *v16; // rax
  __int64 v17; // rdi
  int v18; // r9d
  const wchar_t *v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 SecurityContext; // rdx
  char v26; // si
  char v27; // r11
  _BYTE *v28; // r8
  unsigned __int8 v29; // r10
  char v30; // bl
  int v31; // eax
  char v32; // r14
  char *v33; // rdi
  unsigned int v34; // r9d
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  int v38; // edi
  char v39; // r9
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r9
  char v43; // al
  __int64 v45; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v47; // [rsp+30h] [rbp-120h]
  __int64 v48; // [rsp+38h] [rbp-118h]
  __int64 v49; // [rsp+40h] [rbp-110h]
  __int64 v50; // [rsp+48h] [rbp-108h]
  char v51; // [rsp+D0h] [rbp-80h]
  char v52; // [rsp+D1h] [rbp-7Fh]
  char v53; // [rsp+D2h] [rbp-7Eh]
  int v54; // [rsp+D4h] [rbp-7Ch]
  int v55; // [rsp+D8h] [rbp-78h]
  unsigned int v56; // [rsp+DCh] [rbp-74h]
  __int128 v57; // [rsp+E0h] [rbp-70h] BYREF
  GUID v58; // [rsp+F0h] [rbp-60h] BYREF
  char v59[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v60; // [rsp+110h] [rbp-40h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v57 = 0LL;
  *(_OWORD *)v59 = 0LL;
  v60 = 0LL;
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
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
    {
      TcgProperties = -2147483631;
    }
    else
    {
      v7 = 1;
      TcgProperties = RaidGetTcgProperties(a1, v59);
      if ( TcgProperties >= 0 )
      {
        LOBYTE(v13) = BYTE5(v6->MdlAddress);
        LOBYTE(v12) = BYTE4(v6->MdlAddress);
        TcgProperties = RaidActivateTcgLocking(a1, v12, v13, v6->Flags, (__int64)(&v6->Flags + 1), v59);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
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
      v54 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v57);
      v15 = *(_QWORD *)(a1 + 24);
      if ( (byte_140171467 & 2) != 0 )
      {
        v16 = *(const wchar_t **)(v15 + 5080);
        v17 = v15 + 5064;
        v18 = *(_DWORD *)(v15 + 56);
        v19 = (const wchar_t *)&unk_140151214;
        if ( v16 )
          v19 = v16;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          BYTE5(v6->MdlAddress),
          BYTE4(v6->MdlAddress),
          a1 + 242,
          v18,
          v14,
          SBYTE1(v54),
          SBYTE2(v54),
          a1 + 2104,
          v17,
          *((const wchar_t **)&v57 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v19,
          "TcgActivateLocking",
          v59,
          TcgProperties,
          BYTE4(v6->MdlAddress),
          BYTE5(v6->MdlAddress),
          v6->Flags,
          0,
          0);
      }
    }
  }
  v20 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v20 )
    goto LABEL_90;
  v58 = 0LL;
  IoGetActivityIdIrp(Irp, &v58);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_90;
    v24 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
        LODWORD(v45) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v21, (__int64)CurrentStackLocation, &v58, Irp, v45, pszDest);
      }
      goto LABEL_90;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_90;
    v24 = &EventPnpRequestComplete;
LABEL_89:
    LODWORD(v45) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v21, v24, &v58, Irp, v45);
    goto LABEL_90;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_90;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v26 = 0;
  v27 = 0;
  v52 = 0;
  v28 = 0LL;
  v51 = 0;
  v29 = 0;
  v30 = 0;
  v31 = *(unsigned __int8 *)(SecurityContext + 2);
  v32 = 0;
  if ( (_BYTE)v31 != 40 )
  {
    v26 = *(_BYTE *)(SecurityContext + 72);
    v28 = *(_BYTE **)(SecurityContext + 32);
    v29 = *(_BYTE *)(SecurityContext + 11);
    v27 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_64;
  }
  v31 = *(_DWORD *)(SecurityContext + 20);
  v33 = 0LL;
  v53 = 0;
  if ( v31 )
    goto LABEL_90;
  v34 = *(_DWORD *)(SecurityContext + 56);
  v21 = 0LL;
  v55 = 0;
  v56 = v34;
  if ( !v34 )
    goto LABEL_61;
  v35 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v57 = SecurityContext + 120;
  while ( 1 )
  {
    v36 = *v35;
    if ( (unsigned int)v36 >= 0x80 )
    {
      v37 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v36 < (unsigned int)v37 )
        break;
    }
LABEL_54:
    v21 = (unsigned int)(v21 + 1);
    v35 = (unsigned int *)(v57 + 4);
    v55 = v21;
    *(_QWORD *)&v57 = v57 + 4;
    if ( (unsigned int)v21 >= v34 )
      goto LABEL_60;
  }
  if ( *(_DWORD *)(v36 + SecurityContext) != 64 )
  {
    v21 = (unsigned int)(*(_DWORD *)(v36 + SecurityContext) - 65);
    if ( *(_DWORD *)(v36 + SecurityContext) == 65 )
    {
      v21 = v36 + 56;
      if ( v36 + 56 <= v37 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v36 + SecurityContext + 10) )
          v33 = (char *)(v36 + SecurityContext + 24);
        v27 = *(_BYTE *)(v36 + SecurityContext + 8);
        v28 = *(_BYTE **)(v36 + SecurityContext + 16);
        v29 = *(_BYTE *)(v36 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v36 + SecurityContext) == 66 )
    {
      v21 = v36 + 40;
      if ( v36 + 40 <= v37 )
      {
        if ( *(_DWORD *)(v36 + SecurityContext + 12) )
          v33 = (char *)(v36 + SecurityContext + 32);
        v28 = *(_BYTE **)(v36 + SecurityContext + 24);
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v21 = v36 + 40;
  if ( v36 + 40 > v37 )
  {
LABEL_52:
    if ( v53 )
      goto LABEL_60;
    LODWORD(v21) = v55;
    v34 = v56;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v36 + SecurityContext + 10) )
    v33 = (char *)(v36 + SecurityContext + 24);
  v28 = *(_BYTE **)(v36 + SecurityContext + 16);
LABEL_59:
  v29 = *(_BYTE *)(v36 + SecurityContext + 9);
  v27 = *(_BYTE *)(v36 + SecurityContext + 8);
LABEL_60:
  v31 = 0;
  v32 = 0;
LABEL_61:
  if ( !v33 )
  {
LABEL_64:
    v38 = TcgProperties;
    if ( !v31 )
      goto LABEL_65;
    goto LABEL_90;
  }
  v26 = *v33;
  v38 = TcgProperties;
LABEL_65:
  if ( ((v26 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v28 || !v29 )
      goto LABEL_85;
    v39 = 0;
    v21 = (unsigned __int64)&v28[v29];
    v40 = v28 + 8;
    if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v40 <= v21 )
      {
        v39 = 1;
        v30 = v28[1] & 0xF;
        v32 = v28[3];
        v52 = v28[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v40 <= v21 )
      {
        v30 = v28[2] & 0xF;
        v41 = v29;
        if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
          v41 = (unsigned __int8)v28[7] + 8;
        v21 = (unsigned __int64)(v28 + 13);
        v42 = (unsigned __int64)&v28[v41];
        if ( (unsigned __int64)(v28 + 13) > v42 )
          v52 = 0;
        else
          v52 = v28[12];
        if ( (unsigned __int64)(v28 + 14) > v42 )
          v51 = 0;
        else
          v51 = *(_BYTE *)v21;
        v39 = 1;
      }
      v32 = v51;
    }
    if ( v39 )
    {
      LOBYTE(v2) = v52;
      TcgProperties = v38;
      v43 = v32;
    }
    else
    {
LABEL_85:
      v30 = 0;
      v43 = 0;
    }
    LOBYTE(v50) = v43;
    LOBYTE(v49) = v2;
    LOBYTE(v48) = v30;
    LOBYTE(v47) = v27;
    LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v45) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v21, SecurityContext, &v58, Irp, v45, pszDest, v47, v48, v49, v50, Irp);
  }
LABEL_90:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
