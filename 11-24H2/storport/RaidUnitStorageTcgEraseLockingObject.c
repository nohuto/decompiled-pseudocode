/*
 * XREFs of RaidUnitStorageTcgEraseLockingObject @ 0x1400816AC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
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

__int64 __fastcall RaidUnitStorageTcgEraseLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // r15d
  _IRP *MasterIrp; // rdx
  _IRP *v6; // rbx
  char v7; // di
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v10; // eax
  int TcgProperties; // r12d
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rdi
  int v16; // r9d
  const wchar_t *v17; // r14
  bool v18; // zf
  unsigned __int64 v19; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 SecurityContext; // rdx
  char v24; // si
  char v25; // r11
  _BYTE *v26; // r8
  unsigned __int8 v27; // r10
  char v28; // bl
  int v29; // eax
  char v30; // r14
  char *v31; // rdi
  unsigned int v32; // r9d
  unsigned int *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  int v36; // edi
  char v37; // r9
  _BYTE *v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // r9
  char v41; // al
  NTSTRSAFE_PSTR pszDest; // [rsp+20h] [rbp-130h]
  __int64 v44; // [rsp+28h] [rbp-128h]
  __int64 v45; // [rsp+30h] [rbp-120h]
  __int64 v46; // [rsp+38h] [rbp-118h]
  __int64 v47; // [rsp+40h] [rbp-110h]
  __int64 v48; // [rsp+48h] [rbp-108h]
  char v49; // [rsp+D0h] [rbp-80h]
  char v50; // [rsp+D1h] [rbp-7Fh]
  char v51; // [rsp+D2h] [rbp-7Eh]
  int v52; // [rsp+D4h] [rbp-7Ch]
  int v53; // [rsp+D8h] [rbp-78h]
  unsigned int v54; // [rsp+DCh] [rbp-74h]
  __int128 v55; // [rsp+E0h] [rbp-70h] BYREF
  GUID v56; // [rsp+F0h] [rbp-60h] BYREF
  char v57[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v58; // [rsp+110h] [rbp-40h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v55 = 0LL;
  *(_OWORD *)v57 = 0LL;
  v58 = 0LL;
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
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
      {
        TcgProperties = -2147483631;
      }
      else
      {
        v7 = 1;
        TcgProperties = RaidGetTcgProperties(a1, v57);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
            TcgProperties = RaidEraseTcgLockingObject(a1, HIDWORD(v6->MdlAddress), v6->Flags, (int)v6 + 20, v57);
          else
            TcgProperties = -1073741637;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
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
      v52 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v55);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_140171467 & 2) != 0 )
      {
        v14 = *(const wchar_t **)(v13 + 5080);
        v15 = v13 + 5064;
        v16 = *(_DWORD *)(v13 + 56);
        v17 = (const wchar_t *)&unk_140151214;
        if ( v14 )
          v17 = v14;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          v6->Flags,
          LODWORD(v6->MdlAddress),
          a1 + 242,
          v16,
          v12,
          SBYTE1(v52),
          SBYTE2(v52),
          a1 + 2104,
          v15,
          *((const wchar_t **)&v55 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v17,
          "TcgEraseLockingObject",
          v57,
          TcgProperties,
          (char)v6->MdlAddress,
          v6->Flags,
          HIDWORD(v6->MdlAddress),
          0,
          0);
      }
    }
  }
  v18 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v18 )
    goto LABEL_94;
  v56 = 0LL;
  IoGetActivityIdIrp(Irp, &v56);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_94;
    v22 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
        LODWORD(v44) = Irp->IoStatus.Status;
        LODWORD(pszDest) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v19, (__int64)CurrentStackLocation, &v56, Irp, pszDest, v44);
      }
      goto LABEL_94;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_94;
    v22 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(pszDest) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v56, Irp, pszDest);
    goto LABEL_94;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_94;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v24 = 0;
  v25 = 0;
  v50 = 0;
  v26 = 0LL;
  v49 = 0;
  v27 = 0;
  v28 = 0;
  v29 = *(unsigned __int8 *)(SecurityContext + 2);
  v30 = 0;
  if ( (_BYTE)v29 != 40 )
  {
    v24 = *(_BYTE *)(SecurityContext + 72);
    v26 = *(_BYTE **)(SecurityContext + 32);
    v27 = *(_BYTE *)(SecurityContext + 11);
    v25 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_68;
  }
  v29 = *(_DWORD *)(SecurityContext + 20);
  v31 = 0LL;
  v51 = 0;
  if ( v29 )
    goto LABEL_94;
  v32 = *(_DWORD *)(SecurityContext + 56);
  v19 = 0LL;
  v53 = 0;
  v54 = v32;
  if ( !v32 )
    goto LABEL_65;
  v33 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v55 = SecurityContext + 120;
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned int)v34 >= 0x80 )
    {
      v35 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v34 < (unsigned int)v35 )
        break;
    }
LABEL_58:
    v19 = (unsigned int)(v19 + 1);
    v33 = (unsigned int *)(v55 + 4);
    v53 = v19;
    *(_QWORD *)&v55 = v55 + 4;
    if ( (unsigned int)v19 >= v32 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v34 + SecurityContext) != 64 )
  {
    v19 = (unsigned int)(*(_DWORD *)(v34 + SecurityContext) - 65);
    if ( *(_DWORD *)(v34 + SecurityContext) == 65 )
    {
      v19 = v34 + 56;
      if ( v34 + 56 <= v35 )
      {
        v51 = 1;
        if ( *(_BYTE *)(v34 + SecurityContext + 10) )
          v31 = (char *)(v34 + SecurityContext + 24);
        v25 = *(_BYTE *)(v34 + SecurityContext + 8);
        v26 = *(_BYTE **)(v34 + SecurityContext + 16);
        v27 = *(_BYTE *)(v34 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v34 + SecurityContext) == 66 )
    {
      v19 = v34 + 40;
      if ( v34 + 40 <= v35 )
      {
        if ( *(_DWORD *)(v34 + SecurityContext + 12) )
          v31 = (char *)(v34 + SecurityContext + 32);
        v26 = *(_BYTE **)(v34 + SecurityContext + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v19 = v34 + 40;
  if ( v34 + 40 > v35 )
  {
LABEL_56:
    if ( v51 )
      goto LABEL_64;
    LODWORD(v19) = v53;
    v32 = v54;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v34 + SecurityContext + 10) )
    v31 = (char *)(v34 + SecurityContext + 24);
  v26 = *(_BYTE **)(v34 + SecurityContext + 16);
LABEL_63:
  v27 = *(_BYTE *)(v34 + SecurityContext + 9);
  v25 = *(_BYTE *)(v34 + SecurityContext + 8);
LABEL_64:
  v29 = 0;
  v30 = 0;
LABEL_65:
  if ( !v31 )
  {
LABEL_68:
    v36 = TcgProperties;
    if ( !v29 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v24 = *v31;
  v36 = TcgProperties;
LABEL_69:
  if ( ((v24 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v26 || !v27 )
      goto LABEL_89;
    v37 = 0;
    v19 = (unsigned __int64)&v26[v27];
    v38 = v26 + 8;
    if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v38 <= v19 )
      {
        v37 = 1;
        v28 = v26[1] & 0xF;
        v30 = v26[3];
        v50 = v26[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v38 <= v19 )
      {
        v28 = v26[2] & 0xF;
        v39 = v27;
        if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
          v39 = (unsigned __int8)v26[7] + 8;
        v19 = (unsigned __int64)(v26 + 13);
        v40 = (unsigned __int64)&v26[v39];
        if ( (unsigned __int64)(v26 + 13) > v40 )
          v50 = 0;
        else
          v50 = v26[12];
        if ( (unsigned __int64)(v26 + 14) > v40 )
          v49 = 0;
        else
          v49 = *(_BYTE *)v19;
        v37 = 1;
      }
      v30 = v49;
    }
    if ( v37 )
    {
      LOBYTE(v2) = v50;
      TcgProperties = v36;
      v41 = v30;
    }
    else
    {
LABEL_89:
      v28 = 0;
      v41 = 0;
    }
    LOBYTE(v48) = v41;
    LOBYTE(v47) = v2;
    LOBYTE(v46) = v28;
    LOBYTE(v45) = v25;
    LOBYTE(v44) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(pszDest) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v19, SecurityContext, &v56, Irp, pszDest, v44, v45, v46, v47, v48, Irp);
  }
LABEL_94:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
