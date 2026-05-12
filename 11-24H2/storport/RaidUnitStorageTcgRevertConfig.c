/*
 * XREFs of RaidUnitStorageTcgRevertConfig @ 0x140082C44
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     RaidRevertTcgConfiguration @ 0x14008DDF0 (RaidRevertTcgConfiguration.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgRevertConfig(__int64 a1, PIRP Irp)
{
  int v2; // r14d
  _IRP *MasterIrp; // rdx
  _IRP *v6; // rbx
  char v7; // si
  unsigned int Options; // ecx
  unsigned int MdlAddress_high; // eax
  unsigned int v10; // eax
  int TcgProperties; // r12d
  int v12; // edx
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rsi
  bool v16; // zf
  unsigned __int64 v17; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 SecurityContext; // rdx
  char v22; // si
  char v23; // r11
  _BYTE *v24; // r8
  unsigned __int8 v25; // r10
  char v26; // bl
  int v27; // eax
  char v28; // r13
  char *v29; // rdi
  unsigned int v30; // r9d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  int v34; // edi
  char v35; // r9
  _BYTE *v36; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // r9
  char v39; // al
  NTSTRSAFE_PSTR pszDest; // [rsp+20h] [rbp-130h]
  __int64 v42; // [rsp+28h] [rbp-128h]
  __int64 v43; // [rsp+30h] [rbp-120h]
  __int64 v44; // [rsp+38h] [rbp-118h]
  __int64 v45; // [rsp+40h] [rbp-110h]
  __int64 v46; // [rsp+48h] [rbp-108h]
  char v47; // [rsp+D0h] [rbp-80h]
  char v48; // [rsp+D1h] [rbp-7Fh]
  char v49; // [rsp+D2h] [rbp-7Eh]
  int v50; // [rsp+D4h] [rbp-7Ch]
  int v51; // [rsp+D8h] [rbp-78h]
  unsigned int v52; // [rsp+DCh] [rbp-74h]
  __int128 v53; // [rsp+E0h] [rbp-70h] BYREF
  GUID v54; // [rsp+F0h] [rbp-60h] BYREF
  char v55[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v56; // [rsp+110h] [rbp-40h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v53 = 0LL;
  *(_OWORD *)v55 = 0LL;
  v56 = 0LL;
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 )
    goto LABEL_14;
  v6 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  if ( MdlAddress_high > 0x20 )
    goto LABEL_14;
  v10 = MdlAddress_high + 16;
  if ( v10 < 0x14 )
    v10 = 20;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v10 && Options >= v10 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
    {
      TcgProperties = -2147483631;
    }
    else
    {
      v7 = 1;
      TcgProperties = RaidGetTcgProperties(a1, v55);
      if ( TcgProperties >= 0 )
      {
        LOBYTE(v12) = (__int64)v6->MdlAddress & 1;
        TcgProperties = RaidRevertTcgConfiguration(a1, v12, HIDWORD(v6->MdlAddress), (int)v6 + 16, v55);
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
      v50 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v53);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_140171467 & 2) != 0 )
      {
        v15 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(v14 + 5080) )
          v15 = *(const wchar_t **)(v14 + 5080);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          LODWORD(v6->MdlAddress),
          a1 + 242,
          a1 + 177,
          *(_DWORD *)(v14 + 56),
          v13,
          SBYTE1(v50),
          SBYTE2(v50),
          a1 + 2104,
          v14 + 5064,
          *((const wchar_t **)&v53 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v15,
          "TcgRevertConfiguration",
          v55,
          TcgProperties,
          (char)v6->MdlAddress,
          HIDWORD(v6->MdlAddress),
          0,
          0,
          0);
      }
    }
  }
  v16 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v16 )
    goto LABEL_90;
  v54 = 0LL;
  IoGetActivityIdIrp(Irp, &v54);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_90;
    v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
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
        LODWORD(v42) = Irp->IoStatus.Status;
        LODWORD(pszDest) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v17, (__int64)CurrentStackLocation, &v54, Irp, pszDest, v42);
      }
      goto LABEL_90;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_90;
    v20 = &EventPnpRequestComplete;
LABEL_89:
    LODWORD(pszDest) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v17, v20, &v54, Irp, pszDest);
    goto LABEL_90;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_90;
  SecurityContext = (__int64)CurrentStackLocation->Parameters.Create.SecurityContext;
  v22 = 0;
  v23 = 0;
  v48 = 0;
  v24 = 0LL;
  v47 = 0;
  v25 = 0;
  v26 = 0;
  v27 = *(unsigned __int8 *)(SecurityContext + 2);
  v28 = 0;
  if ( (_BYTE)v27 != 40 )
  {
    v22 = *(_BYTE *)(SecurityContext + 72);
    v24 = *(_BYTE **)(SecurityContext + 32);
    v25 = *(_BYTE *)(SecurityContext + 11);
    v23 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_64;
  }
  v27 = *(_DWORD *)(SecurityContext + 20);
  v29 = 0LL;
  v49 = 0;
  if ( v27 )
    goto LABEL_90;
  v30 = *(_DWORD *)(SecurityContext + 56);
  v17 = 0LL;
  v51 = 0;
  v52 = v30;
  if ( !v30 )
    goto LABEL_61;
  v31 = (unsigned int *)(SecurityContext + 120);
  *(_QWORD *)&v53 = SecurityContext + 120;
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_54:
    v17 = (unsigned int)(v17 + 1);
    v31 = (unsigned int *)(v53 + 4);
    v51 = v17;
    *(_QWORD *)&v53 = v53 + 4;
    if ( (unsigned int)v17 >= v30 )
      goto LABEL_60;
  }
  if ( *(_DWORD *)(v32 + SecurityContext) != 64 )
  {
    v17 = (unsigned int)(*(_DWORD *)(v32 + SecurityContext) - 65);
    if ( *(_DWORD *)(v32 + SecurityContext) == 65 )
    {
      v17 = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v32 + SecurityContext + 10) )
          v29 = (char *)(v32 + SecurityContext + 24);
        v23 = *(_BYTE *)(v32 + SecurityContext + 8);
        v24 = *(_BYTE **)(v32 + SecurityContext + 16);
        v25 = *(_BYTE *)(v32 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v32 + SecurityContext) == 66 )
    {
      v17 = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( *(_DWORD *)(v32 + SecurityContext + 12) )
          v29 = (char *)(v32 + SecurityContext + 32);
        v24 = *(_BYTE **)(v32 + SecurityContext + 24);
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v17 = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_52:
    if ( v49 )
      goto LABEL_60;
    LODWORD(v17) = v51;
    v30 = v52;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v32 + SecurityContext + 10) )
    v29 = (char *)(v32 + SecurityContext + 24);
  v24 = *(_BYTE **)(v32 + SecurityContext + 16);
LABEL_59:
  v25 = *(_BYTE *)(v32 + SecurityContext + 9);
  v23 = *(_BYTE *)(v32 + SecurityContext + 8);
LABEL_60:
  v27 = 0;
  v28 = 0;
LABEL_61:
  if ( !v29 )
  {
LABEL_64:
    v34 = TcgProperties;
    if ( !v27 )
      goto LABEL_65;
    goto LABEL_90;
  }
  v22 = *v29;
  v34 = TcgProperties;
LABEL_65:
  if ( ((v22 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v24 || !v25 )
      goto LABEL_85;
    v35 = 0;
    v17 = (unsigned __int64)&v24[v25];
    v36 = v24 + 8;
    if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v36 <= v17 )
      {
        v35 = 1;
        v26 = v24[1] & 0xF;
        v28 = v24[3];
        v48 = v24[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v36 <= v17 )
      {
        v26 = v24[2] & 0xF;
        v37 = v25;
        if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
          v37 = (unsigned __int8)v24[7] + 8;
        v17 = (unsigned __int64)(v24 + 13);
        v38 = (unsigned __int64)&v24[v37];
        if ( (unsigned __int64)(v24 + 13) > v38 )
          v48 = 0;
        else
          v48 = v24[12];
        if ( (unsigned __int64)(v24 + 14) > v38 )
          v47 = 0;
        else
          v47 = *(_BYTE *)v17;
        v35 = 1;
      }
      v28 = v47;
    }
    if ( v35 )
    {
      LOBYTE(v2) = v48;
      TcgProperties = v34;
      v39 = v28;
    }
    else
    {
LABEL_85:
      v26 = 0;
      v39 = 0;
    }
    LOBYTE(v46) = v39;
    LOBYTE(v45) = v2;
    LOBYTE(v44) = v26;
    LOBYTE(v43) = v23;
    LOBYTE(v42) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(pszDest) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v17, SecurityContext, &v54, Irp, pszDest, v42, v43, v44, v45, v46, Irp);
  }
LABEL_90:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
