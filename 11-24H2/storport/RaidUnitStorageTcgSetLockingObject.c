/*
 * XREFs of RaidUnitStorageTcgSetLockingObject @ 0x1400831B4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObject @ 0x14008E140 (RaidSetTcgLockingObject.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // r12d
  PIRP v3; // rbx
  _IRP *MasterIrp; // rdx
  _IRP *v6; // rdi
  char v7; // si
  unsigned int Options; // ecx
  unsigned int Information; // eax
  unsigned int v10; // eax
  int TcgProperties; // r13d
  int MdlAddress; // r8d
  char v13; // r11
  __int64 v14; // rsi
  const wchar_t *v15; // r15
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 CurrentStackLocation; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  char v22; // r14
  char v23; // di
  _BYTE *v24; // r8
  unsigned __int8 v25; // r10
  char v26; // r11
  int v27; // eax
  char v28; // r15
  char *v29; // rsi
  unsigned int v30; // r9d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  int v34; // esi
  char v35; // r9
  _BYTE *v36; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // r9
  char v39; // al
  __int64 v41; // [rsp+20h] [rbp-130h]
  __int64 v42; // [rsp+28h] [rbp-128h]
  __int64 v43; // [rsp+30h] [rbp-120h]
  __int64 v44; // [rsp+38h] [rbp-118h]
  int v45[2]; // [rsp+40h] [rbp-110h]
  __int64 v46; // [rsp+48h] [rbp-108h]
  char v47; // [rsp+D0h] [rbp-80h]
  char v48; // [rsp+D1h] [rbp-7Fh]
  char v49; // [rsp+D2h] [rbp-7Eh]
  int v50; // [rsp+D4h] [rbp-7Ch]
  int v51; // [rsp+D8h] [rbp-78h]
  __int64 v52; // [rsp+E0h] [rbp-70h]
  unsigned int v54; // [rsp+E8h] [rbp-68h]
  __int128 v55; // [rsp+F0h] [rbp-60h] BYREF
  GUID v56; // [rsp+100h] [rbp-50h] BYREF
  char pszDest[16]; // [rsp+110h] [rbp-40h] BYREF
  __int128 v58; // [rsp+120h] [rbp-30h]

  v2 = 0;
  v3 = Irp;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0LL;
  v7 = 0;
  v55 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v58 = 0LL;
  if ( !MasterIrp )
    goto LABEL_20;
  Options = v3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_20;
  v6 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_20;
  Information = MasterIrp->IoStatus.Information;
  if ( Information > 0x20 )
    goto LABEL_20;
  v10 = Information + 60;
  if ( v10 < 0x40 )
    v10 = 64;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v10 || Options < v10 )
    goto LABEL_20;
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    TcgProperties = -1073741637;
    goto LABEL_21;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 && MasterIrp->Flags - 1 > 2 )
  {
LABEL_20:
    TcgProperties = -1073741811;
    goto LABEL_21;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    TcgProperties = -2147483631;
  }
  else
  {
    v7 = 1;
    TcgProperties = RaidGetTcgProperties(a1, pszDest);
    if ( TcgProperties >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
      {
        MdlAddress = (int)v6->MdlAddress;
        LOBYTE(MdlAddress) = MdlAddress & 1;
        TcgProperties = RaidSetTcgLockingObject(
                          a1,
                          HIDWORD(v6->MdlAddress),
                          MdlAddress,
                          v6->Flags,
                          ((__int64)v6->MdlAddress & 2) != 0,
                          *((_BYTE *)&v6->Flags + 4),
                          ((__int64)v6->MdlAddress & 4) != 0,
                          (__int64)&v6->Flags + 5,
                          v6->IoStatus.Information,
                          (__int64)&v6->IoStatus.Information + 4,
                          pszDest);
      }
      else
      {
        TcgProperties = -1073741637;
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  }
LABEL_21:
  v3->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v7 )
    {
      v50 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v55);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_140171467 & 2) != 0 )
      {
        v15 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(v14 + 5080) )
          v15 = *(const wchar_t **)(v14 + 5080);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          LODWORD(v6->IoStatus.Information),
          *((unsigned __int8 *)&v6->Flags + 4),
          (int)v6->Flags,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          v13,
          SBYTE1(v50),
          SBYTE2(v50),
          a1 + 2104,
          v14 + 5064,
          *((const wchar_t **)&v55 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v15,
          "TcgSetLockingObject",
          pszDest,
          TcgProperties,
          (char)v6->MdlAddress,
          v6->Flags,
          *((_BYTE *)&v6->Flags + 4),
          v6->IoStatus.Information,
          HIDWORD(v6->MdlAddress));
        v3 = Irp;
      }
    }
  }
  v16 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v3->Tail.CompletionKey + 21) = -84;
  v3->IoStatus.Status = TcgProperties;
  if ( v16 )
    goto LABEL_96;
  v56 = 0LL;
  IoGetActivityIdIrp(v3, &v56);
  CurrentStackLocation = (__int64)v3->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)CurrentStackLocation == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_96;
    v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_95;
  }
  if ( *(_BYTE *)CurrentStackLocation != 15 )
  {
    if ( *(_BYTE *)CurrentStackLocation != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v19 = (int *)v3->IoStatus.Information;
        if ( v19 )
          v2 = *v19;
        LODWORD(v42) = v3->IoStatus.Status;
        LODWORD(v41) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v17, CurrentStackLocation, &v56, v3, v41, v42);
      }
      goto LABEL_96;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_96;
    v20 = &EventPnpRequestComplete;
LABEL_95:
    LODWORD(v41) = v3->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v17, v20, &v56, v3, v41);
    goto LABEL_96;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_96;
  v21 = *(_QWORD *)(CurrentStackLocation + 8);
  v22 = 0;
  v23 = 0;
  v48 = 0;
  v24 = 0LL;
  v47 = 0;
  v25 = 0;
  v26 = 0;
  v27 = *(unsigned __int8 *)(v21 + 2);
  v28 = 0;
  if ( (_BYTE)v27 != 40 )
  {
    v22 = *(_BYTE *)(v21 + 72);
    v24 = *(_BYTE **)(v21 + 32);
    v25 = *(_BYTE *)(v21 + 11);
    v23 = *(_BYTE *)(v21 + 4);
    goto LABEL_70;
  }
  v27 = *(_DWORD *)(v21 + 20);
  v29 = 0LL;
  v49 = 0;
  if ( v27 )
    goto LABEL_96;
  v30 = *(_DWORD *)(v21 + 56);
  v17 = 0LL;
  v51 = 0;
  v54 = v30;
  if ( !v30 )
    goto LABEL_67;
  v31 = (unsigned int *)(v21 + 120);
  v52 = v21 + 120;
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_60:
    v17 = (unsigned int)(v17 + 1);
    v31 = (unsigned int *)(v52 + 4);
    v51 = v17;
    v52 += 4LL;
    if ( (unsigned int)v17 >= v30 )
      goto LABEL_66;
  }
  if ( *(_DWORD *)(v32 + v21) != 64 )
  {
    v17 = (unsigned int)(*(_DWORD *)(v32 + v21) - 65);
    if ( *(_DWORD *)(v32 + v21) == 65 )
    {
      v17 = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v32 + v21 + 10) )
          v29 = (char *)(v32 + v21 + 24);
        v23 = *(_BYTE *)(v32 + v21 + 8);
        v24 = *(_BYTE **)(v32 + v21 + 16);
        v25 = *(_BYTE *)(v32 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v32 + v21) == 66 )
    {
      v17 = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( *(_DWORD *)(v32 + v21 + 12) )
          v29 = (char *)(v32 + v21 + 32);
        v24 = *(_BYTE **)(v32 + v21 + 24);
        goto LABEL_65;
      }
    }
    goto LABEL_58;
  }
  v17 = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_58:
    if ( v49 )
      goto LABEL_66;
    LODWORD(v17) = v51;
    v30 = v54;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v32 + v21 + 10) )
    v29 = (char *)(v32 + v21 + 24);
  v24 = *(_BYTE **)(v32 + v21 + 16);
LABEL_65:
  v25 = *(_BYTE *)(v32 + v21 + 9);
  v23 = *(_BYTE *)(v32 + v21 + 8);
LABEL_66:
  v27 = 0;
  v28 = 0;
LABEL_67:
  if ( !v29 )
  {
LABEL_70:
    v34 = TcgProperties;
    if ( !v27 )
      goto LABEL_71;
    goto LABEL_96;
  }
  v22 = *v29;
  v34 = TcgProperties;
LABEL_71:
  if ( ((v22 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v21 + 3) == 1 || !v24 || !v25 )
      goto LABEL_91;
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
LABEL_91:
      v26 = 0;
      v39 = 0;
    }
    LOBYTE(v46) = v39;
    LOBYTE(v45[0]) = v2;
    LOBYTE(v44) = v26;
    LOBYTE(v43) = v23;
    LOBYTE(v42) = *(_BYTE *)(v21 + 3);
    LODWORD(v41) = v3->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v56, v3, v41, v42, v43, v44, *(_QWORD *)v45, v46, v3);
  }
LABEL_96:
  IofCompleteRequest(v3, 0);
  return (unsigned int)TcgProperties;
}
