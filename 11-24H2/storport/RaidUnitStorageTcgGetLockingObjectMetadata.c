/*
 * XREFs of RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140081C48
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x14008CBA4 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgGetLockingObjectMetadata(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // r8
  char v7; // r12
  int v8; // r13d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int TcgProperties; // esi
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // r8
  int v17; // r9d
  const wchar_t *v18; // rbx
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // r12
  char v26; // bl
  _BYTE *v27; // r8
  unsigned __int8 v28; // r10
  char v29; // r11
  int v30; // eax
  char v31; // r13
  char *v32; // r15
  unsigned int v33; // r9d
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // r13
  int v37; // r15d
  char v38; // r9
  _BYTE *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  char v42; // al
  __int64 v44; // [rsp+20h] [rbp-130h]
  __int64 v45; // [rsp+28h] [rbp-128h]
  __int64 v46; // [rsp+30h] [rbp-120h]
  __int64 v47; // [rsp+38h] [rbp-118h]
  __int64 v48; // [rsp+40h] [rbp-110h]
  __int64 v49; // [rsp+48h] [rbp-108h]
  char v50; // [rsp+D0h] [rbp-80h]
  char v51; // [rsp+D1h] [rbp-7Fh]
  char v52; // [rsp+D2h] [rbp-7Eh]
  int v53; // [rsp+D4h] [rbp-7Ch]
  int v54; // [rsp+D8h] [rbp-78h]
  int v55; // [rsp+D8h] [rbp-78h]
  unsigned int v56; // [rsp+E0h] [rbp-70h]
  int v57; // [rsp+E8h] [rbp-68h]
  __int64 v58; // [rsp+E8h] [rbp-68h]
  int v59; // [rsp+F0h] [rbp-60h]
  __int128 v60; // [rsp+F8h] [rbp-58h] BYREF
  GUID v61; // [rsp+108h] [rbp-48h] BYREF
  _OWORD v62[2]; // [rsp+118h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  LOBYTE(v57) = 0;
  LOBYTE(v59) = 0;
  LOBYTE(v54) = 0;
  v7 = 0;
  LOBYTE(v8) = 0;
  v60 = 0LL;
  memset(v62, 0, sizeof(v62));
  if ( !v2 )
    goto LABEL_22;
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 < 0x1C )
    goto LABEL_22;
  if ( *(_WORD *)v2 != 1 )
    goto LABEL_22;
  v10 = *(_DWORD *)(v2 + 20);
  if ( v10 > 0x20 )
    goto LABEL_22;
  v11 = *(_DWORD *)(v2 + 16) + v10 + 24;
  if ( v11 < 0x1C )
    v11 = 28;
  if ( *(_DWORD *)(v2 + 4) != v11 || v9 < v11 )
  {
LABEL_22:
    TcgProperties = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v4 + 8) < v11 )
  {
    TcgProperties = -1073741789;
LABEL_23:
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( v7 )
    {
      v53 = *(_DWORD *)(a1 + 104);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v60);
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
          a1 + 177,
          a1 + 168,
          v16,
          v17,
          v13,
          SBYTE1(v53),
          SBYTE2(v53),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v60 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v18,
          "TcgGetLockingObjectMetadata",
          (const char *)v62,
          TcgProperties,
          v8,
          v57,
          v59,
          v54,
          0);
      }
    }
    goto LABEL_28;
  }
  if ( !*(_DWORD *)(v2 + 12) )
  {
    TcgProperties = -1073741637;
    goto LABEL_23;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_23;
  }
  v8 = *(_DWORD *)(v2 + 8);
  v57 = *(_DWORD *)(v2 + 16);
  v7 = 1;
  v59 = *(_DWORD *)(v2 + 20);
  v54 = *(_DWORD *)(v2 + 12);
  TcgProperties = RaidGetTcgProperties(a1, v62);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 53LL) )
    {
      TcgProperties = RaidGetTcgLockingObjectMetadata(
                        a1,
                        *(unsigned int *)(v2 + 12),
                        *(unsigned int *)(v2 + 16),
                        *(unsigned int *)(v2 + 20) + v2 + 24,
                        *(_DWORD *)(v2 + 20),
                        v2 + 24,
                        v62);
      if ( TcgProperties >= 0 )
        *(_QWORD *)(a2 + 56) = *(unsigned int *)(v2 + 4);
    }
    else
    {
      TcgProperties = -1073741637;
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  if ( TcgProperties < 0 )
    goto LABEL_23;
LABEL_28:
  v19 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TcgProperties;
  if ( v19 )
    goto LABEL_97;
  v61 = 0LL;
  IoGetActivityIdIrp(a2, &v61);
  v21 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_97;
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    v23 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_96;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_97;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v22 = *(int **)(a2 + 56);
        if ( v22 )
          v3 = *v22;
        LODWORD(v45) = *(_DWORD *)(a2 + 48);
        LODWORD(v44) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v20, v21, &v61, a2, v44, v45);
      }
      goto LABEL_97;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_97;
    v23 = &EventPnpRequestComplete;
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
LABEL_96:
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v61, a2, v44);
    goto LABEL_97;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_97;
  v24 = *(_QWORD *)(v21 + 8);
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
    goto LABEL_71;
  }
  v30 = *(_DWORD *)(v24 + 20);
  v32 = 0LL;
  v52 = 0;
  if ( v30 )
    goto LABEL_97;
  v33 = *(_DWORD *)(v24 + 56);
  v20 = 0LL;
  v55 = 0;
  v56 = v33;
  if ( !v33 )
    goto LABEL_68;
  v34 = (unsigned int *)(v24 + 120);
  v58 = v24 + 120;
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_61:
    v20 = (unsigned int)(v20 + 1);
    v34 = (unsigned int *)(v58 + 4);
    v55 = v20;
    v58 += 4LL;
    if ( (unsigned int)v20 >= v33 )
      goto LABEL_67;
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
        goto LABEL_66;
      }
    }
    goto LABEL_59;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_59:
    if ( v52 )
      goto LABEL_67;
    LODWORD(v20) = v55;
    v33 = v56;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v35 + v24 + 10) )
    v32 = (char *)(v35 + v24 + 24);
  v27 = *(_BYTE **)(v35 + v24 + 16);
LABEL_66:
  v28 = *(_BYTE *)(v35 + v24 + 9);
  v26 = *(_BYTE *)(v35 + v24 + 8);
LABEL_67:
  v30 = 0;
  v31 = 0;
LABEL_68:
  if ( !v32 )
  {
LABEL_71:
    v37 = TcgProperties;
    if ( !v30 )
      goto LABEL_72;
    goto LABEL_97;
  }
  v25 = *v32;
  v37 = TcgProperties;
LABEL_72:
  if ( ((v25 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v24 + 3) == 1 || !v27 || !v28 )
      goto LABEL_92;
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
      LOBYTE(v3) = v51;
      TcgProperties = v37;
      v42 = v31;
    }
    else
    {
LABEL_92:
      v29 = 0;
      v42 = 0;
    }
    LOBYTE(v49) = v42;
    LOBYTE(v48) = v3;
    LOBYTE(v47) = v29;
    LOBYTE(v46) = v26;
    LOBYTE(v45) = *(_BYTE *)(v24 + 3);
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    McTemplateK0pduuuuup_EtwWriteTransfer(v20, v24, &v61, a2, v44, v45, v46, v47, v48, v49, a2);
  }
LABEL_97:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TcgProperties;
}
