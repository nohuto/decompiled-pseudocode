/*
 * XREFs of RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1400837CC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x14008E3CC (RaidSetTcgLockingObjectAuthKey.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetLockingObjectAuthKey(__int64 a1, PIRP Irp)
{
  int v2; // r12d
  _IRP *MasterIrp; // rcx
  PIRP v5; // rbx
  _IRP *v6; // rdi
  char v7; // si
  unsigned int Options; // edx
  unsigned int Flags; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int TcgProperties; // r13d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rsi
  const wchar_t *v17; // r15
  int v18; // r9d
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
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
  NTSTRSAFE_PSTR pszDest; // [rsp+30h] [rbp-120h]
  __int64 v47; // [rsp+38h] [rbp-118h]
  __int64 v48; // [rsp+40h] [rbp-110h]
  __int64 v49; // [rsp+48h] [rbp-108h]
  char v50; // [rsp+D0h] [rbp-80h]
  char v51; // [rsp+D1h] [rbp-7Fh]
  char v52; // [rsp+D2h] [rbp-7Eh]
  int v53; // [rsp+D4h] [rbp-7Ch]
  int v54; // [rsp+D8h] [rbp-78h]
  __int64 v56; // [rsp+E0h] [rbp-70h]
  unsigned int v57; // [rsp+E8h] [rbp-68h]
  __int128 v58; // [rsp+F0h] [rbp-60h] BYREF
  GUID v59; // [rsp+100h] [rbp-50h] BYREF
  char v60[16]; // [rsp+110h] [rbp-40h] BYREF
  __int128 v61; // [rsp+120h] [rbp-30h]

  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = Irp;
  v6 = 0LL;
  v7 = 0;
  v58 = 0LL;
  *(_OWORD *)v60 = 0LL;
  v61 = 0LL;
  if ( !MasterIrp )
    goto LABEL_19;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_19;
  v6 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_19;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_19;
  v10 = *(&MasterIrp->Flags + 1);
  if ( v10 > 0x20 )
    goto LABEL_19;
  v11 = v10 + Flags + 24;
  if ( v11 < 0x1C )
    v11 = 28;
  if ( *(_DWORD *)(&v6->Size + 1) == v11 && Options >= v11 )
  {
    if ( HIDWORD(v6->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
      {
        TcgProperties = -2147483631;
      }
      else
      {
        v7 = 1;
        TcgProperties = RaidGetTcgProperties(a1, v60);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
            TcgProperties = RaidSetTcgLockingObjectAuthKey(
                              a1,
                              HIDWORD(v6->MdlAddress),
                              v6->Flags,
                              (int)v6 + 24,
                              *(&v6->Flags + 1),
                              (__int64)&v6->AssociatedIrp + v6->Flags,
                              v60);
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
LABEL_19:
    TcgProperties = -1073741811;
  }
  v5->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v7 )
    {
      v53 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v58);
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
          v6->Flags,
          LODWORD(v6->MdlAddress),
          v18,
          v13,
          SBYTE1(v53),
          SBYTE2(v53),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v58 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v17,
          "TcgSetLockingObjectAuthKey",
          v60,
          TcgProperties,
          (char)v6->MdlAddress,
          v6->Flags,
          *(&v6->Flags + 1),
          HIDWORD(v6->MdlAddress),
          0);
        v5 = Irp;
      }
    }
  }
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v5->Tail.CompletionKey + 21) = -84;
  v5->IoStatus.Status = TcgProperties;
  if ( v19 )
    goto LABEL_95;
  v59 = 0LL;
  IoGetActivityIdIrp(v5, &v59);
  CurrentStackLocation = (__int64)v5->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)CurrentStackLocation == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_95;
    v23 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_94;
  }
  if ( *(_BYTE *)CurrentStackLocation != 15 )
  {
    if ( *(_BYTE *)CurrentStackLocation != 27 )
      goto LABEL_95;
    if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)v5->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(v45) = v5->IoStatus.Status;
        LODWORD(v44) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v20, CurrentStackLocation, &v59, v5, v44, v45);
      }
      goto LABEL_95;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_95;
    v23 = &EventPnpRequestComplete;
LABEL_94:
    LODWORD(v44) = v5->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v59, v5, v44);
    goto LABEL_95;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_95;
  v24 = *(_QWORD *)(CurrentStackLocation + 8);
  v25 = 0;
  v26 = 0;
  v51 = 0;
  v27 = 0LL;
  v50 = 0;
  v28 = 0;
  v29 = 0;
  v30 = *(unsigned __int8 *)(v24 + 2);
  v31 = 0;
  if ( (_BYTE)v30 != 40 )
  {
    v25 = *(_BYTE *)(v24 + 72);
    v27 = *(_BYTE **)(v24 + 32);
    v28 = *(_BYTE *)(v24 + 11);
    v26 = *(_BYTE *)(v24 + 4);
    goto LABEL_69;
  }
  v30 = *(_DWORD *)(v24 + 20);
  v32 = 0LL;
  v52 = 0;
  if ( v30 )
    goto LABEL_95;
  v33 = *(_DWORD *)(v24 + 56);
  v20 = 0LL;
  v54 = 0;
  v57 = v33;
  if ( !v33 )
    goto LABEL_66;
  v34 = (unsigned int *)(v24 + 120);
  v56 = v24 + 120;
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_59:
    v20 = (unsigned int)(v20 + 1);
    v34 = (unsigned int *)(v56 + 4);
    v54 = v20;
    v56 += 4LL;
    if ( (unsigned int)v20 >= v33 )
      goto LABEL_65;
  }
  if ( *(_DWORD *)(v35 + v24) != 64 )
  {
    v20 = (unsigned int)(*(_DWORD *)(v35 + v24) - 65);
    if ( *(_DWORD *)(v35 + v24) == 65 )
    {
      v20 = v35 + 56;
      if ( v35 + 56 <= v36 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v35 + v24 + 10) )
          v32 = (char *)(v35 + v24 + 24);
        v26 = *(_BYTE *)(v35 + v24 + 8);
        v27 = *(_BYTE **)(v35 + v24 + 16);
        v28 = *(_BYTE *)(v35 + v24 + 9);
      }
    }
    else if ( *(_DWORD *)(v35 + v24) == 66 )
    {
      v20 = v35 + 40;
      if ( v35 + 40 <= v36 )
      {
        if ( *(_DWORD *)(v35 + v24 + 12) )
          v32 = (char *)(v35 + v24 + 32);
        v27 = *(_BYTE **)(v35 + v24 + 24);
        goto LABEL_64;
      }
    }
    goto LABEL_57;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_57:
    if ( v52 )
      goto LABEL_65;
    LODWORD(v20) = v54;
    v33 = v57;
    goto LABEL_59;
  }
  if ( *(_BYTE *)(v35 + v24 + 10) )
    v32 = (char *)(v35 + v24 + 24);
  v27 = *(_BYTE **)(v35 + v24 + 16);
LABEL_64:
  v28 = *(_BYTE *)(v35 + v24 + 9);
  v26 = *(_BYTE *)(v35 + v24 + 8);
LABEL_65:
  v30 = 0;
  v31 = 0;
LABEL_66:
  if ( !v32 )
  {
LABEL_69:
    v37 = TcgProperties;
    if ( !v30 )
      goto LABEL_70;
    goto LABEL_95;
  }
  v25 = *v32;
  v37 = TcgProperties;
LABEL_70:
  if ( ((v25 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v24 + 3) == 1 || !v27 || !v28 )
      goto LABEL_90;
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
LABEL_90:
      v29 = 0;
      v42 = 0;
    }
    LOBYTE(v49) = v42;
    LOBYTE(v48) = v2;
    LOBYTE(v47) = v29;
    LOBYTE(pszDest) = v26;
    LOBYTE(v45) = *(_BYTE *)(v24 + 3);
    LODWORD(v44) = v5->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v20, v24, &v59, v5, v44, v45, pszDest, v47, v48, v49, v5);
  }
LABEL_95:
  IofCompleteRequest(v5, 0);
  return (unsigned int)TcgProperties;
}
