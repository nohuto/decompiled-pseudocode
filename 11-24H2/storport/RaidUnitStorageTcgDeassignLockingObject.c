/*
 * XREFs of RaidUnitStorageTcgDeassignLockingObject @ 0x140080ADC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
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

__int64 __fastcall RaidUnitStorageTcgDeassignLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // r15d
  _IRP *MasterIrp; // rdx
  _IRP *v6; // rbx
  char v7; // di
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v10; // eax
  int TcgProperties; // r12d
  int v12; // r8d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rdi
  int v17; // r9d
  const wchar_t *v18; // r14
  bool v19; // zf
  unsigned __int64 v20; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 SecurityContext; // rdx
  char v25; // si
  char v26; // r11
  _BYTE *v27; // r8
  unsigned __int8 v28; // r10
  char v29; // bl
  int v30; // eax
  char v31; // r14
  char *v32; // rdi
  unsigned int v33; // r9d
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  int v37; // edi
  char v38; // r9
  _BYTE *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  char v42; // al
  __int64 v44; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v46; // [rsp+30h] [rbp-120h]
  __int64 v47; // [rsp+38h] [rbp-118h]
  __int64 v48; // [rsp+40h] [rbp-110h]
  __int64 v49; // [rsp+48h] [rbp-108h]
  char v50; // [rsp+D0h] [rbp-80h]
  char v51; // [rsp+D1h] [rbp-7Fh]
  char v52; // [rsp+D2h] [rbp-7Eh]
  int v53; // [rsp+D4h] [rbp-7Ch]
  int v54; // [rsp+D8h] [rbp-78h]
  unsigned int v55; // [rsp+DCh] [rbp-74h]
  __int128 v56; // [rsp+E0h] [rbp-70h] BYREF
  GUID v57; // [rsp+F0h] [rbp-60h] BYREF
  char v58[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v59; // [rsp+110h] [rbp-40h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v56 = 0LL;
  *(_OWORD *)v58 = 0LL;
  v59 = 0LL;
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
        TcgProperties = RaidGetTcgProperties(a1, v58);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
          {
            LOBYTE(v12) = (__int64)v6->MdlAddress & 1;
            TcgProperties = RaidDeassignTcgLockingObject(
                              a1,
                              HIDWORD(v6->MdlAddress),
                              v12,
                              v6->Flags,
                              (__int64)(&v6->Flags + 1),
                              v58);
          }
          else
          {
            TcgProperties = -1073741637;
          }
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
      v53 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v56);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_140171467 & 2) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5080);
        v16 = v14 + 5064;
        v17 = *(_DWORD *)(v14 + 56);
        v18 = (const wchar_t *)&unk_140151214;
        if ( v15 )
          v18 = v15;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          v6->Flags,
          LODWORD(v6->MdlAddress),
          a1 + 242,
          v17,
          v13,
          SBYTE1(v53),
          SBYTE2(v53),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v56 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v18,
          "TcgDeassignLockingObject",
          v58,
          TcgProperties,
          (char)v6->MdlAddress,
          v6->Flags,
          HIDWORD(v6->MdlAddress),
          0,
          0);
      }
    }
  }
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v19 )
    goto LABEL_94;
  v57 = 0LL;
  IoGetActivityIdIrp(Irp, &v57);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_94;
    v23 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
        LODWORD(v44) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v20, (__int64)CurrentStackLocation, &v57, Irp, v44, pszDest);
      }
      goto LABEL_94;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_94;
    v23 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v44) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v57, Irp, v44);
    goto LABEL_94;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_94;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v25 = 0;
  v26 = 0;
  v51 = 0;
  v27 = 0LL;
  v50 = 0;
  v28 = 0;
  v29 = 0;
  v30 = *(unsigned __int8 *)(SecurityContext + 2);
  v31 = 0;
  if ( (_BYTE)v30 != 40 )
  {
    v25 = *(_BYTE *)(SecurityContext + 72);
    v27 = *(_BYTE **)(SecurityContext + 32);
    v28 = *(_BYTE *)(SecurityContext + 11);
    v26 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_68;
  }
  v30 = *(_DWORD *)(SecurityContext + 20);
  v32 = 0LL;
  v52 = 0;
  if ( v30 )
    goto LABEL_94;
  v33 = *(_DWORD *)(SecurityContext + 56);
  v20 = 0LL;
  v54 = 0;
  v55 = v33;
  if ( !v33 )
    goto LABEL_65;
  v34 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v56 = SecurityContext + 120;
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_58:
    v20 = (unsigned int)(v20 + 1);
    v34 = (unsigned int *)(v56 + 4);
    v54 = v20;
    *(_QWORD *)&v56 = v56 + 4;
    if ( (unsigned int)v20 >= v33 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v35 + SecurityContext) != 64 )
  {
    v20 = (unsigned int)(*(_DWORD *)(v35 + SecurityContext) - 65);
    if ( *(_DWORD *)(v35 + SecurityContext) == 65 )
    {
      v20 = v35 + 56;
      if ( v35 + 56 <= v36 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v35 + SecurityContext + 10) )
          v32 = (char *)(v35 + SecurityContext + 24);
        v26 = *(_BYTE *)(v35 + SecurityContext + 8);
        v27 = *(_BYTE **)(v35 + SecurityContext + 16);
        v28 = *(_BYTE *)(v35 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v35 + SecurityContext) == 66 )
    {
      v20 = v35 + 40;
      if ( v35 + 40 <= v36 )
      {
        if ( *(_DWORD *)(v35 + SecurityContext + 12) )
          v32 = (char *)(v35 + SecurityContext + 32);
        v27 = *(_BYTE **)(v35 + SecurityContext + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_56:
    if ( v52 )
      goto LABEL_64;
    LODWORD(v20) = v54;
    v33 = v55;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v35 + SecurityContext + 10) )
    v32 = (char *)(v35 + SecurityContext + 24);
  v27 = *(_BYTE **)(v35 + SecurityContext + 16);
LABEL_63:
  v28 = *(_BYTE *)(v35 + SecurityContext + 9);
  v26 = *(_BYTE *)(v35 + SecurityContext + 8);
LABEL_64:
  v30 = 0;
  v31 = 0;
LABEL_65:
  if ( !v32 )
  {
LABEL_68:
    v37 = TcgProperties;
    if ( !v30 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v25 = *v32;
  v37 = TcgProperties;
LABEL_69:
  if ( ((v25 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v27 || !v28 )
      goto LABEL_89;
    v38 = 0;
    v20 = (unsigned __int64)&v27[v28];
    v39 = v27 + 8;
    if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v39 <= v20 )
      {
        v38 = 1;
        v29 = v27[1] & 0xF;
        v31 = v27[3];
        v51 = v27[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v39 <= v20 )
      {
        v29 = v27[2] & 0xF;
        v40 = v28;
        if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
          v40 = (unsigned __int8)v27[7] + 8;
        v20 = (unsigned __int64)(v27 + 13);
        v41 = (unsigned __int64)&v27[v40];
        if ( (unsigned __int64)(v27 + 13) > v41 )
          v51 = 0;
        else
          v51 = v27[12];
        if ( (unsigned __int64)(v27 + 14) > v41 )
          v50 = 0;
        else
          v50 = *(_BYTE *)v20;
        v38 = 1;
      }
      v31 = v50;
    }
    if ( v38 )
    {
      LOBYTE(v2) = v51;
      TcgProperties = v37;
      v42 = v31;
    }
    else
    {
LABEL_89:
      v29 = 0;
      v42 = 0;
    }
    LOBYTE(v49) = v42;
    LOBYTE(v48) = v2;
    LOBYTE(v47) = v29;
    LOBYTE(v46) = v26;
    LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v44) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v20, SecurityContext, &v57, Irp, v44, pszDest, v46, v47, v48, v49, Irp);
  }
LABEL_94:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
