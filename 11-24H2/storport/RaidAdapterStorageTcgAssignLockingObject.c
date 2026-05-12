/*
 * XREFs of RaidAdapterStorageTcgAssignLockingObject @ 0x14007BBD0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
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

__int64 __fastcall RaidAdapterStorageTcgAssignLockingObject(__int64 a1, PIRP Irp)
{
  int v2; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v6; // r8
  _IRP *MasterIrp; // r15
  char v8; // r12
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v11; // eax
  int TcgProperties; // esi
  _IRP *v13; // r12
  int v14; // ecx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // r8
  char v18; // r11
  const wchar_t *v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // rcx
  _IO_STACK_LOCATION *v22; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 SecurityContext; // rdx
  char v26; // r12
  char v27; // bl
  _BYTE *v28; // r8
  unsigned __int8 v29; // r10
  char v30; // r11
  int v31; // eax
  char v32; // r13
  char *v33; // r15
  unsigned int v34; // r9d
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  int v38; // r15d
  char v39; // r9
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r9
  char v43; // al
  __int64 v45; // [rsp+20h] [rbp-130h]
  NTSTRSAFE_PSTR pszDest; // [rsp+28h] [rbp-128h]
  __int64 v47; // [rsp+30h] [rbp-120h]
  NTSTRSAFE_PSTR v48; // [rsp+38h] [rbp-118h]
  __int64 v49; // [rsp+40h] [rbp-110h]
  __int64 v50; // [rsp+48h] [rbp-108h]
  char v51; // [rsp+D0h] [rbp-80h]
  char v52; // [rsp+D1h] [rbp-7Fh]
  char v53; // [rsp+D2h] [rbp-7Eh]
  int v54; // [rsp+D8h] [rbp-78h]
  unsigned int v55; // [rsp+E0h] [rbp-70h]
  int MdlAddress; // [rsp+E8h] [rbp-68h]
  __int64 v57; // [rsp+E8h] [rbp-68h]
  _IRP *v58; // [rsp+F0h] [rbp-60h]
  int v59; // [rsp+F8h] [rbp-58h]
  __int128 v60; // [rsp+100h] [rbp-50h] BYREF
  GUID v61; // [rsp+110h] [rbp-40h] BYREF
  __int128 v62; // [rsp+120h] [rbp-30h] BYREF
  char v63[16]; // [rsp+130h] [rbp-20h] BYREF
  __int128 v64; // [rsp+140h] [rbp-10h]

  v2 = 0;
  LOBYTE(MdlAddress) = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v62 = 0LL;
  v6 = 0;
  LOBYTE(v59) = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = 0;
  v60 = 0LL;
  *(_OWORD *)v63 = 0LL;
  v64 = 0LL;
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
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_30;
  }
  v13 = Irp->AssociatedIrp.MasterIrp;
  MdlAddress = (int)MasterIrp->MdlAddress;
  v59 = (int)MasterIrp->ThreadListEntry.Flink;
  if ( (MdlAddress & 1) != 0 )
    v58 = MasterIrp->AssociatedIrp.MasterIrp;
  else
    LOBYTE(v58) = 0;
  TcgProperties = RaidGetTcgProperties(a1, v63);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6064) + 53LL) )
    {
      v14 = (int)MasterIrp->MdlAddress;
      v15 = 1;
      if ( (v14 & 1) != 0 )
      {
        LOBYTE(v15) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v16 = RaidAssignTcgRangeLockingObject(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                (int)MasterIrp->AssociatedIrp.MasterIrp,
                v15,
                (int)MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                (__int64)v13,
                v63);
      }
      else
      {
        if ( (v14 & 2) == 0 )
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
                v63);
      }
      TcgProperties = v16;
      if ( v16 >= 0 )
        Irp->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    TcgProperties = -1073741637;
  }
LABEL_27:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  if ( TcgProperties >= 0 )
    goto LABEL_35;
  v8 = (char)v58;
  v6 = 1;
LABEL_30:
  Irp->IoStatus.Information = 0LL;
  if ( v6 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v60);
    if ( (byte_140171467 & 2) != 0 )
    {
      v19 = (const wchar_t *)&unk_140151214;
      if ( *(_QWORD *)(a1 + 5080) )
        v19 = *(const wchar_t **)(a1 + 5080);
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        (__int64)v19,
        a1 + 5064,
        v17,
        *(_DWORD *)(a1 + 56),
        RaidNullAddress,
        SBYTE1(RaidNullAddress),
        SBYTE2(RaidNullAddress),
        (__int64)&v62,
        a1 + 5064,
        *((const wchar_t **)&v60 + 1),
        byte_140151064,
        byte_140151064,
        byte_140151064,
        v19,
        "TcgAssignLockingObject",
        v63,
        TcgProperties,
        MdlAddress,
        v59,
        v18,
        v8,
        0);
    }
  }
LABEL_35:
  v20 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = TcgProperties;
  if ( v20 )
    goto LABEL_104;
  v61 = 0LL;
  IoGetActivityIdIrp(Irp, &v61);
  v22 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v22->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_104;
    LODWORD(v45) = Irp->IoStatus.Status;
    v24 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_103;
  }
  if ( v22->MajorFunction != 15 )
  {
    if ( v22->MajorFunction != 27 )
      goto LABEL_104;
    if ( v22->MinorFunction == 7 && !v22->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        LODWORD(pszDest) = Irp->IoStatus.Status;
        LODWORD(v45) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v21, (__int64)v22, &v61, Irp, v45, pszDest);
      }
      goto LABEL_104;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_104;
    v24 = &EventPnpRequestComplete;
    LODWORD(v45) = Irp->IoStatus.Status;
LABEL_103:
    McTemplateK0pd_EtwWriteTransfer(v21, v24, &v61, Irp, v45);
    goto LABEL_104;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_104;
  SecurityContext = (__int64)v22->Parameters.Create.SecurityContext;
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
    goto LABEL_78;
  }
  v31 = *(_DWORD *)(SecurityContext + 20);
  v33 = 0LL;
  v53 = 0;
  if ( v31 )
    goto LABEL_104;
  v34 = *(_DWORD *)(SecurityContext + 56);
  v21 = 0LL;
  v54 = 0;
  v55 = v34;
  if ( !v34 )
    goto LABEL_75;
  v35 = (unsigned int *)(SecurityContext + 120);
  v57 = SecurityContext + 120;
  while ( 1 )
  {
    v36 = *v35;
    if ( (unsigned int)v36 >= 0x80 )
    {
      v37 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v36 < (unsigned int)v37 )
        break;
    }
LABEL_68:
    v21 = (unsigned int)(v21 + 1);
    v35 = (unsigned int *)(v57 + 4);
    v54 = v21;
    v57 += 4LL;
    if ( (unsigned int)v21 >= v34 )
      goto LABEL_74;
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
        goto LABEL_73;
      }
    }
    goto LABEL_66;
  }
  v21 = v36 + 40;
  if ( v36 + 40 > v37 )
  {
LABEL_66:
    if ( v53 )
      goto LABEL_74;
    LODWORD(v21) = v54;
    v34 = v55;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(v36 + SecurityContext + 10) )
    v33 = (char *)(v36 + SecurityContext + 24);
  v28 = *(_BYTE **)(v36 + SecurityContext + 16);
LABEL_73:
  v29 = *(_BYTE *)(v36 + SecurityContext + 9);
  v27 = *(_BYTE *)(v36 + SecurityContext + 8);
LABEL_74:
  v31 = 0;
  v32 = 0;
LABEL_75:
  if ( !v33 )
  {
LABEL_78:
    v38 = TcgProperties;
    if ( !v31 )
      goto LABEL_79;
    goto LABEL_104;
  }
  v26 = *v33;
  v38 = TcgProperties;
LABEL_79:
  if ( ((v26 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v28 || !v29 )
      goto LABEL_99;
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
LABEL_99:
      v30 = 0;
      v43 = 0;
    }
    LOBYTE(v50) = v43;
    LOBYTE(v49) = v2;
    LOBYTE(v48) = v30;
    LOBYTE(v47) = v27;
    LOBYTE(pszDest) = *(_BYTE *)(SecurityContext + 3);
    LODWORD(v45) = Irp->IoStatus.Status;
    McTemplateK0pduuuuup_EtwWriteTransfer(v21, SecurityContext, &v61, Irp, v45, pszDest, v47, v48, v49, v50, Irp);
  }
LABEL_104:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)TcgProperties;
}
