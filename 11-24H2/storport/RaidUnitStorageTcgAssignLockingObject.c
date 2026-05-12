/*
 * XREFs of RaidUnitStorageTcgAssignLockingObject @ 0x140080484
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgAssignLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v6; // r13
  _IRP *MasterIrp; // rbx
  char v8; // r12
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v11; // eax
  int TcgProperties; // esi
  _IRP *v13; // r12
  int v14; // r9d
  int v15; // ecx
  int v16; // eax
  char v17; // r11
  __int64 v18; // r9
  const wchar_t *v19; // rax
  __int64 v20; // r8
  int v21; // r9d
  const wchar_t *v22; // rbx
  bool v23; // zf
  unsigned __int64 v24; // rcx
  _IO_STACK_LOCATION *v25; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v27; // rdx
  __int64 SecurityContext; // rdx
  char v29; // r12
  char v30; // bl
  _BYTE *v31; // r8
  unsigned __int8 v32; // r10
  char v33; // r11
  int v34; // eax
  char v35; // r13
  char *v36; // r15
  unsigned int v37; // r9d
  unsigned int *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  int v41; // r15d
  char v42; // r9
  _BYTE *v43; // rax
  unsigned int v44; // eax
  unsigned __int64 v45; // r9
  char v46; // al
  __int64 v48; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v50; // [rsp+30h] [rbp-120h]
  NTSTRSAFE_PSTR v51; // [rsp+38h] [rbp-118h]
  __int64 v52; // [rsp+40h] [rbp-110h]
  __int64 v53; // [rsp+48h] [rbp-108h]
  char v54; // [rsp+D0h] [rbp-80h]
  char v55; // [rsp+D1h] [rbp-7Fh]
  char v56; // [rsp+D2h] [rbp-7Eh]
  __int64 v57; // [rsp+D8h] [rbp-78h]
  int v58; // [rsp+D8h] [rbp-78h]
  _IRP *v59; // [rsp+E0h] [rbp-70h]
  int v60; // [rsp+E0h] [rbp-70h]
  unsigned int v61; // [rsp+E8h] [rbp-68h]
  int MdlAddress; // [rsp+F0h] [rbp-60h]
  __int64 v63; // [rsp+F0h] [rbp-60h]
  int v64; // [rsp+F8h] [rbp-58h]
  __int128 v65; // [rsp+100h] [rbp-50h] BYREF
  GUID v66; // [rsp+110h] [rbp-40h] BYREF
  char v67[16]; // [rsp+120h] [rbp-30h] BYREF
  __int128 v68; // [rsp+130h] [rbp-20h]

  v2 = 0;
  LOBYTE(MdlAddress) = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  LOBYTE(v64) = 0;
  v65 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  LOBYTE(v59) = 0;
  v8 = 0;
  *(_OWORD *)v67 = 0LL;
  v68 = 0LL;
  if ( !MasterIrp )
    goto LABEL_29;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x28 )
    goto LABEL_29;
  if ( MasterIrp->Type != 1 )
    goto LABEL_29;
  Flink = (unsigned int)MasterIrp->ThreadListEntry.Flink;
  if ( Flink > 0x20 )
    goto LABEL_29;
  v11 = Flink + 36;
  if ( v11 < 0x28 )
    v11 = 40;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v11 || Options < v11 || ((__int64)MasterIrp->MdlAddress & 6) == 2 )
  {
LABEL_29:
    TcgProperties = -1073741811;
    goto LABEL_30;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x40 )
  {
    TcgProperties = -1073741789;
    goto LABEL_30;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_30;
  }
  v6 = 1;
  v13 = Irp->AssociatedIrp.MasterIrp;
  MdlAddress = (int)MasterIrp->MdlAddress;
  v64 = (int)MasterIrp->ThreadListEntry.Flink;
  if ( (MdlAddress & 1) != 0 )
  {
    v57 = *(_QWORD *)&MasterIrp->Flags;
    v59 = MasterIrp->AssociatedIrp.MasterIrp;
  }
  else
  {
    LODWORD(v57) = MasterIrp->Flags;
    LOBYTE(v59) = 0;
  }
  TcgProperties = RaidGetTcgProperties(a1, v67);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
    {
      v15 = (int)MasterIrp->MdlAddress;
      if ( (v15 & 1) != 0 )
      {
        LOBYTE(v14) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v16 = RaidAssignTcgRangeLockingObject(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                (int)MasterIrp->AssociatedIrp.MasterIrp,
                v14,
                (int)MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                (__int64)v13,
                v67);
      }
      else
      {
        if ( (v15 & 2) == 0 )
        {
          TcgProperties = -1073741811;
          goto LABEL_27;
        }
        v16 = RaidAssignTcgNamespaceLockingObject(
                a1,
                MasterIrp->Flags,
                (int)MasterIrp->ThreadListEntry.Flink,
                (int)MasterIrp + 36,
                (__int64)v13,
                v67);
      }
      TcgProperties = v16;
      if ( v16 >= 0 )
        Irp->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    TcgProperties = -1073741637;
  }
LABEL_27:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  if ( TcgProperties >= 0 )
    goto LABEL_35;
  v8 = v57;
LABEL_30:
  Irp->IoStatus.Information = 0LL;
  if ( v6 )
  {
    v58 = *(_DWORD *)(a1 + 104);
    RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v65);
    v18 = *(_QWORD *)(a1 + 24);
    if ( (byte_140171467 & 2) != 0 )
    {
      v19 = *(const wchar_t **)(v18 + 5080);
      v20 = v18 + 5064;
      v21 = *(_DWORD *)(v18 + 56);
      v22 = (const wchar_t *)&unk_140151214;
      if ( v19 )
        v22 = v19;
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        v20,
        v21,
        v17,
        SBYTE1(v58),
        SBYTE2(v58),
        a1 + 2104,
        v20,
        *((const wchar_t **)&v65 + 1),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v22,
        "TcgAssignLockingObject",
        v67,
        TcgProperties,
        MdlAddress,
        v64,
        v8,
        (char)v59,
        0);
    }
  }
LABEL_35:
  v23 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v23 )
    goto LABEL_104;
  v66 = 0LL;
  IoGetActivityIdIrp(Irp, &v66);
  v25 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v25->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_104;
    LODWORD(v48) = Irp->IoStatus.Status;
    v27 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_103;
  }
  if ( v25->MajorFunction != 15 )
  {
    if ( v25->MajorFunction != 27 )
      goto LABEL_104;
    if ( v25->MinorFunction == 7 && !v25->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(pszDest) = Irp->IoStatus.Status;
        LODWORD(v48) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v24, (__int64)v25, &v66, Irp, v48, pszDest);
      }
      goto LABEL_104;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_104;
    v27 = &EventPnpRequestComplete;
    LODWORD(v48) = Irp->IoStatus.Status;
LABEL_103:
    McTemplateK0pd_EtwWriteTransfer(v24, v27, &v66, Irp, v48);
    goto LABEL_104;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_104;
  SecurityContext = (__int64)v25->Parameters.Create.SecurityContext;
  v29 = 0;
  v30 = 0;
  v55 = 0;
  v31 = 0LL;
  v54 = 0;
  v32 = 0;
  v33 = 0;
  v34 = *(unsigned __int8 *)(SecurityContext + 2);
  v35 = 0;
  if ( (_BYTE)v34 != 40 )
  {
    v29 = *(_BYTE *)(SecurityContext + 72);
    v31 = *(_BYTE **)(SecurityContext + 32);
    v32 = *(_BYTE *)(SecurityContext + 11);
    v30 = *(_BYTE *)(SecurityContext + 4);
    goto LABEL_78;
  }
  v34 = *(_DWORD *)(SecurityContext + 20);
  v36 = 0LL;
  v56 = 0;
  if ( v34 )
    goto LABEL_104;
  v37 = *(_DWORD *)(SecurityContext + 56);
  v24 = 0LL;
  v60 = 0;
  v61 = v37;
  if ( !v37 )
    goto LABEL_75;
  v38 = (unsigned int *)(SecurityContext + 120);
  v63 = SecurityContext + 120;
  while ( 1 )
  {
    v39 = *v38;
    if ( (unsigned int)v39 >= 0x80 )
    {
      v40 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v39 < (unsigned int)v40 )
        break;
    }
LABEL_68:
    v24 = (unsigned int)(v24 + 1);
    v38 = (unsigned int *)(v63 + 4);
    v60 = v24;
    v63 += 4LL;
    if ( (unsigned int)v24 >= v37 )
      goto LABEL_74;
  }
  if ( *(_DWORD *)(v39 + SecurityContext) != 64 )
  {
    v24 = (unsigned int)(*(_DWORD *)(v39 + SecurityContext) - 65);
    if ( *(_DWORD *)(v39 + SecurityContext) == 65 )
    {
      v24 = v39 + 56;
      if ( v39 + 56 <= v40 )
      {
        v56 = 1;
        if ( *(_BYTE *)(v39 + SecurityContext + 10) )
          v36 = (char *)(v39 + SecurityContext + 24);
        v30 = *(_BYTE *)(v39 + SecurityContext + 8);
        v31 = *(_BYTE **)(v39 + SecurityContext + 16);
        v32 = *(_BYTE *)(v39 + SecurityContext + 9);
      }
    }
    else if ( *(_DWORD *)(v39 + SecurityContext) == 66 )
    {
      v24 = v39 + 40;
      if ( v39 + 40 <= v40 )
      {
        if ( *(_DWORD *)(v39 + SecurityContext + 12) )
          v36 = (char *)(v39 + SecurityContext + 32);
        v31 = *(_BYTE **)(v39 + SecurityContext + 24);
        goto LABEL_73;
      }
    }
    goto LABEL_66;
  }
  v24 = v39 + 40;
  if ( v39 + 40 > v40 )
  {
LABEL_66:
    if ( v56 )
      goto LABEL_74;
    LODWORD(v24) = v60;
    v37 = v61;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(v39 + SecurityContext + 10) )
    v36 = (char *)(v39 + SecurityContext + 24);
  v31 = *(_BYTE **)(v39 + SecurityContext + 16);
LABEL_73:
  v32 = *(_BYTE *)(v39 + SecurityContext + 9);
  v30 = *(_BYTE *)(v39 + SecurityContext + 8);
LABEL_74:
  v34 = 0;
  v35 = 0;
LABEL_75:
  if ( !v36 )
  {
LABEL_78:
    v41 = TcgProperties;
    if ( !v34 )
      goto LABEL_79;
    goto LABEL_104;
  }
  v29 = *v36;
  v41 = TcgProperties;
LABEL_79:
  if ( ((v29 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v31 || !v32 )
      goto LABEL_99;
    v42 = 0;
    v24 = (unsigned __int64)&v31[v32];
    v43 = v31 + 8;
    if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v43 <= v24 )
      {
        v42 = 1;
        v33 = v31[1] & 0xF;
        v35 = v31[3];
        v55 = v31[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v43 <= v24 )
      {
        v33 = v31[2] & 0xF;
        v44 = v32;
        if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
          v44 = (unsigned __int8)v31[7] + 8;
        v24 = (unsigned __int64)(v31 + 13);
        v45 = (unsigned __int64)&v31[v44];
        if ( (unsigned __int64)(v31 + 13) > v45 )
          v55 = 0;
        else
          v55 = v31[12];
        if ( (unsigned __int64)(v31 + 14) > v45 )
          v54 = 0;
        else
          v54 = *(_BYTE *)v24;
        v42 = 1;
      }
      v35 = v54;
    }
    if ( v42 )
    {
      LOBYTE(v2) = v55;
      TcgProperties = v41;
      v46 = v35;
    }
    else
    {
LABEL_99:
      v33 = 0;
      v46 = 0;
    }
    LOBYTE(v53) = v46;
    LOBYTE(v52) = v2;
    LOBYTE(v51) = v33;
    LOBYTE(v50) = v30;
    LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v48) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v24, SecurityContext, &v66, Irp, v48, pszDest, v50, v51, v52, v53, Irp);
  }
LABEL_104:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
