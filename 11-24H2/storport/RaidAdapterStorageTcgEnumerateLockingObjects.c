/*
 * XREFs of RaidAdapterStorageTcgEnumerateLockingObjects @ 0x14007C7A8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidFillTcgLockingObjects @ 0x14008C304 (RaidFillTcgLockingObjects.c)
 *     RaidGetTcgLockingObjects @ 0x14008CDB4 (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAdapterStorageTcgEnumerateLockingObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // edi
  __int64 v4; // rax
  void *v6; // rcx
  char v8; // r12
  int TcgProperties; // r14d
  __int64 v10; // rcx
  _DWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  const wchar_t *v15; // rcx
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v21; // rdx
  char v22; // r12
  char v23; // r11
  _BYTE *v24; // r8
  unsigned __int8 v25; // r10
  char v26; // bl
  int v27; // eax
  char v28; // r13
  char *v29; // r15
  unsigned int v30; // r9d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  int v34; // r15d
  char v35; // r9
  _BYTE *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  void *v40; // [rsp+20h] [rbp-130h]
  __int64 v41; // [rsp+28h] [rbp-128h]
  __int64 v42; // [rsp+30h] [rbp-120h]
  __int64 v43; // [rsp+38h] [rbp-118h]
  __int64 v44; // [rsp+40h] [rbp-110h]
  __int64 v45; // [rsp+48h] [rbp-108h]
  char v46; // [rsp+D0h] [rbp-80h]
  char v47; // [rsp+D1h] [rbp-7Fh]
  char v48; // [rsp+D1h] [rbp-7Fh]
  char v49; // [rsp+D2h] [rbp-7Eh]
  int v50; // [rsp+D4h] [rbp-7Ch]
  int v51[2]; // [rsp+D8h] [rbp-78h] BYREF
  int v52[2]; // [rsp+E0h] [rbp-70h] BYREF
  unsigned __int64 v53; // [rsp+E8h] [rbp-68h]
  __int64 v54; // [rsp+F0h] [rbp-60h]
  __int64 v55; // [rsp+F8h] [rbp-58h]
  __int64 v56; // [rsp+100h] [rbp-50h]
  __int128 v57; // [rsp+108h] [rbp-48h] BYREF
  GUID v58; // [rsp+118h] [rbp-38h] BYREF
  __int128 v59; // [rsp+128h] [rbp-28h] BYREF
  _OWORD v60[2]; // [rsp+138h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = 0LL;
  *(_QWORD *)v51 = v4;
  *(_QWORD *)v52 = 0LL;
  v47 = 0;
  v8 = 0;
  v53 = 0LL;
  v56 = 0LL;
  v54 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  memset(v60, 0, sizeof(v60));
  if ( v2 && *(_DWORD *)(v4 + 16) >= 0x20u && *(_WORD *)v2 == 1 && *(_DWORD *)(v2 + 4) == 32 )
  {
    if ( *(_DWORD *)(v4 + 8) < 0x10u )
    {
      TcgProperties = -1073741789;
      goto LABEL_20;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      v6 = *(void **)v52;
      TcgProperties = -2147483631;
      goto LABEL_20;
    }
    v10 = *(unsigned int *)(v2 + 12);
    v11 = *(_DWORD **)(a2 + 24);
    v47 = 1;
    v53 = *(unsigned int *)(v2 + 8);
    v56 = v10;
    if ( (v53 & 1) != 0 )
    {
      v55 = *(_QWORD *)(v2 + 16);
      v54 = *(_QWORD *)(v2 + 24);
    }
    else
    {
      v55 = *(unsigned int *)(v2 + 16);
      v54 = 0LL;
    }
    TcgProperties = RaidGetTcgProperties(a1, v60);
    if ( TcgProperties < 0 )
      goto LABEL_18;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6064) + 53LL) )
    {
      TcgProperties = RaidGetTcgLockingObjects(a1, v52, v60);
      if ( TcgProperties < 0 )
      {
LABEL_18:
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
        v6 = *(void **)v52;
        v8 = v55;
        goto LABEL_20;
      }
      v13 = *(_QWORD *)(a1 + 6064);
      v51[0] = *(_DWORD *)(*(_QWORD *)v51 + 8LL);
      RaidFillTcgLockingObjects(v13, v52[0], v2, (int)v51, v11);
      v12 = (unsigned int)v51[0];
    }
    else
    {
      memset_0(v11, 0, *(unsigned int *)(*(_QWORD *)v51 + 8LL));
      v12 = 16LL;
      *(_WORD *)v11 = 1;
      v11[1] = 16;
    }
    *(_QWORD *)(a2 + 56) = v12;
    goto LABEL_18;
  }
  TcgProperties = -1073741811;
LABEL_20:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x43546152u);
  if ( TcgProperties < 0 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( v47 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v57);
      if ( (byte_140171467 & 2) != 0 )
      {
        v15 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(a1 + 5080) )
          v15 = *(const wchar_t **)(a1 + 5080);
        McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
          (__int64)v15,
          a1 + 5064,
          v14,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v59,
          a1 + 5064,
          *((const wchar_t **)&v57 + 1),
          byte_140151064,
          byte_140151064,
          byte_140151064,
          v15,
          "TcgEnumerateLockingObjects",
          (const char *)v60,
          TcgProperties,
          v53,
          v56,
          v8,
          v54,
          0);
      }
    }
  }
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgProperties;
  if ( v16 )
    goto LABEL_97;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_97;
    v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_96;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_97;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v3 = *v19;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v17, v18, &v58, a2, v40, v41);
      }
      goto LABEL_97;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_97;
    v20 = &EventPnpRequestComplete;
LABEL_96:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v17, v20, &v58, a2, v40);
    goto LABEL_97;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_97;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0;
  v48 = 0;
  v24 = 0LL;
  v46 = 0;
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
    goto LABEL_71;
  }
  v27 = *(_DWORD *)(v21 + 20);
  v29 = 0LL;
  v51[0] = v27;
  v49 = 0;
  if ( v27 )
    goto LABEL_97;
  v30 = *(_DWORD *)(v21 + 56);
  v17 = 0LL;
  v50 = 0;
  v52[0] = v30;
  if ( !v30 )
    goto LABEL_68;
  v31 = (unsigned int *)(v21 + 120);
  v53 = v21 + 120;
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_61:
    v17 = (unsigned int)(v17 + 1);
    v31 = (unsigned int *)(v53 + 4);
    v50 = v17;
    v53 += 4LL;
    if ( (unsigned int)v17 >= v30 )
      goto LABEL_67;
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
        goto LABEL_66;
      }
    }
    goto LABEL_59;
  }
  v17 = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_59:
    if ( v49 )
      goto LABEL_67;
    LODWORD(v17) = v50;
    v30 = v52[0];
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v32 + v21 + 10) )
    v29 = (char *)(v32 + v21 + 24);
  v24 = *(_BYTE **)(v32 + v21 + 16);
LABEL_66:
  v25 = *(_BYTE *)(v32 + v21 + 9);
  v23 = *(_BYTE *)(v32 + v21 + 8);
LABEL_67:
  v27 = v51[0];
  v28 = 0;
LABEL_68:
  if ( !v29 )
  {
LABEL_71:
    v34 = TcgProperties;
    if ( !v27 )
      goto LABEL_72;
    goto LABEL_97;
  }
  v22 = *v29;
  v34 = TcgProperties;
LABEL_72:
  if ( ((v22 - 8) & 0x5D) == 0 )
  {
    v35 = *(_BYTE *)(v21 + 3);
    if ( v35 == 1 || !v24 || !v25 )
      goto LABEL_92;
    LOBYTE(v21) = 0;
    v17 = (unsigned __int64)&v24[v25];
    v36 = v24 + 8;
    if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v36 <= v17 )
      {
        LOBYTE(v21) = 1;
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
        v21 = (unsigned __int64)&v24[v37];
        if ( (unsigned __int64)(v24 + 13) > v21 )
          v48 = 0;
        else
          v48 = v24[12];
        if ( (unsigned __int64)(v24 + 14) > v21 )
          v46 = 0;
        else
          v46 = *(_BYTE *)v17;
        LOBYTE(v21) = 1;
      }
      v28 = v46;
    }
    if ( (_BYTE)v21 )
    {
      LOBYTE(v3) = v48;
      TcgProperties = v34;
      v38 = v28;
    }
    else
    {
LABEL_92:
      v26 = 0;
      v38 = 0;
    }
    LOBYTE(v45) = v38;
    LOBYTE(v44) = v3;
    LOBYTE(v43) = v26;
    LOBYTE(v42) = v23;
    LOBYTE(v41) = v35;
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v58, a2, v40, v41, v42, v43, v44, v45, a2);
  }
LABEL_97:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgProperties;
}
