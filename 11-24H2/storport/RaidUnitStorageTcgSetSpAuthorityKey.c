/*
 * XREFs of RaidUnitStorageTcgSetSpAuthorityKey @ 0x140084368
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     RaidSetTcgSpAuthorityKey @ 0x14008E83C (RaidSetTcgSpAuthorityKey.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetSpAuthorityKey(__int64 a1, PIRP Irp)
{
  int v2; // r12d
  _IRP *MasterIrp; // rdx
  _IRP *v6; // rdi
  char v7; // si
  unsigned int Options; // ecx
  unsigned int v9; // eax
  unsigned int IrpCount; // edx
  unsigned int v11; // eax
  int v12; // ebx
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rsi
  const wchar_t *v17; // r15
  int v18; // r9d
  bool v19; // zf
  unsigned __int64 v20; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 SecurityContext; // rdx
  char v25; // r14
  char v26; // di
  _BYTE *v27; // r8
  unsigned __int8 v28; // r10
  char v29; // r11
  int v30; // eax
  char v31; // r15
  char *v32; // rsi
  unsigned int v33; // r9d
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  int v37; // esi
  char v38; // r9
  _BYTE *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  char v42; // al
  __int64 v44; // [rsp+20h] [rbp-130h]
  __int64 v45; // [rsp+28h] [rbp-128h]
  __int64 v46; // [rsp+30h] [rbp-120h]
  NTSTRSAFE_PSTR pszDest; // [rsp+38h] [rbp-118h]
  __int64 v48; // [rsp+40h] [rbp-110h]
  __int64 v49; // [rsp+48h] [rbp-108h]
  char v50; // [rsp+D0h] [rbp-80h]
  char v51; // [rsp+D1h] [rbp-7Fh]
  int TcgProperties; // [rsp+D4h] [rbp-7Ch]
  char v53; // [rsp+D8h] [rbp-78h]
  int v54; // [rsp+DCh] [rbp-74h]
  int v55; // [rsp+DCh] [rbp-74h]
  unsigned int v56; // [rsp+E0h] [rbp-70h]
  __int128 v57; // [rsp+E8h] [rbp-68h] BYREF
  GUID v58; // [rsp+F8h] [rbp-58h] BYREF
  char v59[16]; // [rsp+108h] [rbp-48h] BYREF
  __int128 v60; // [rsp+118h] [rbp-38h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v57 = 0LL;
  *(_OWORD *)v59 = 0LL;
  v60 = 0LL;
  if ( !MasterIrp )
    goto LABEL_15;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x20 )
    goto LABEL_15;
  v6 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_15;
  v9 = *(&MasterIrp->Flags + 1);
  if ( v9 > 0x20 )
    goto LABEL_15;
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount > 0x20 )
    goto LABEL_15;
  v11 = IrpCount + v9 + 28;
  if ( v11 < 0x20 )
    v11 = 32;
  if ( *(_DWORD *)(&v6->Size + 1) != v11 || Options < v11 )
  {
LABEL_15:
    v12 = -1073741811;
    goto LABEL_16;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v12 = -2147483631;
LABEL_16:
    TcgProperties = v12;
    goto LABEL_17;
  }
  v7 = 1;
  TcgProperties = RaidGetTcgProperties(a1, v59);
  v12 = TcgProperties;
  if ( TcgProperties >= 0 )
  {
    v12 = RaidSetTcgSpAuthorityKey(
            a1,
            HIDWORD(v6->MdlAddress),
            v6->Flags,
            *(&v6->Flags + 1),
            (__int64)&v6->AssociatedIrp.SystemBuffer + 4,
            v6->AssociatedIrp.IrpCount,
            (__int64)&v6->AssociatedIrp.SystemBuffer + *(&v6->Flags + 1) + 4,
            v59);
    TcgProperties = v12;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
LABEL_17:
  Irp->IoStatus.Information = 0LL;
  if ( v12 < 0 )
  {
    if ( v7 )
    {
      v54 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v57);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_140171467 & 2) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5080);
        v16 = v14 + 5064;
        v17 = (const wchar_t *)&unk_140151214;
        v18 = *(_DWORD *)(v14 + 56);
        if ( v15 )
          v17 = v15;
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          *(&v6->Flags + 1),
          (int)v6->Flags,
          SHIDWORD(v6->MdlAddress),
          v18,
          v13,
          SBYTE1(v54),
          SBYTE2(v54),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v57 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v17,
          "TcgSetSpAuthorityKey",
          v59,
          TcgProperties,
          HIDWORD(v6->MdlAddress),
          v6->Flags,
          *(&v6->Flags + 1),
          v6->AssociatedIrp.IrpCount,
          0);
        v12 = TcgProperties;
      }
    }
  }
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v12;
  if ( v19 )
    goto LABEL_92;
  v58 = 0LL;
  IoGetActivityIdIrp(Irp, &v58);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_92;
    v23 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_91;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_92;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v45) = Irp->IoStatus.Status;
        LODWORD(v44) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v20, (__int64)CurrentStackLocation, &v58, Irp, v44, v45);
      }
      goto LABEL_92;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_92;
    v23 = &EventPnpRequestComplete;
LABEL_91:
    LODWORD(v44) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v58, Irp, v44);
    goto LABEL_92;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_92;
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
    goto LABEL_66;
  }
  v30 = *(_DWORD *)(SecurityContext + 20);
  v32 = 0LL;
  v53 = 0;
  if ( v30 )
    goto LABEL_92;
  v33 = *(_DWORD *)(SecurityContext + 56);
  v20 = 0LL;
  v55 = 0;
  v56 = v33;
  if ( !v33 )
    goto LABEL_63;
  v34 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v57 = SecurityContext + 120;
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_56:
    v20 = (unsigned int)(v20 + 1);
    v34 = (unsigned int *)(v57 + 4);
    v55 = v20;
    *(_QWORD *)&v57 = v57 + 4;
    if ( (unsigned int)v20 >= v33 )
      goto LABEL_62;
  }
  if ( *(_DWORD *)(v35 + SecurityContext) != 64 )
  {
    v20 = (unsigned int)(*(_DWORD *)(v35 + SecurityContext) - 65);
    if ( *(_DWORD *)(v35 + SecurityContext) == 65 )
    {
      v20 = v35 + 56;
      if ( v35 + 56 <= v36 )
      {
        v53 = 1;
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
        goto LABEL_61;
      }
    }
    goto LABEL_54;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_54:
    if ( v53 )
      goto LABEL_62;
    LODWORD(v20) = v55;
    v33 = v56;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v35 + SecurityContext + 10) )
    v32 = (char *)(v35 + SecurityContext + 24);
  v27 = *(_BYTE **)(v35 + SecurityContext + 16);
LABEL_61:
  v28 = *(_BYTE *)(v35 + SecurityContext + 9);
  v26 = *(_BYTE *)(v35 + SecurityContext + 8);
LABEL_62:
  v30 = 0;
  v31 = 0;
LABEL_63:
  if ( !v32 )
  {
LABEL_66:
    v37 = v12;
    if ( !v30 )
      goto LABEL_67;
    goto LABEL_92;
  }
  v25 = *v32;
  v37 = v12;
LABEL_67:
  if ( ((v25 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v27 || !v28 )
      goto LABEL_87;
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
      v12 = v37;
      v42 = v31;
    }
    else
    {
LABEL_87:
      v29 = 0;
      v42 = 0;
    }
    LOBYTE(v49) = v42;
    LOBYTE(v48) = v2;
    LOBYTE(pszDest) = v29;
    LOBYTE(v46) = v26;
    LOBYTE(v45) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v44) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v20, SecurityContext, &v58, Irp, v44, v45, v46, pszDest, v48, v49, Irp);
  }
LABEL_92:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v12;
}
