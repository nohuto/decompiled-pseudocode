/*
 * XREFs of RaidUnitStorageTcgQueryCapability @ 0x14008223C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgConfigInformation @ 0x14008C7E8 (RaidGetTcgConfigInformation.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidUnitStorageTcgQueryCapability(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  void *v7; // rbx
  int TcgConfigInformation; // eax
  int v9; // r12d
  char v10; // r11
  __int64 v11; // r9
  const wchar_t *v12; // rax
  __int64 v13; // r10
  int v14; // r9d
  const wchar_t *v15; // rdi
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v21; // rdx
  char v22; // r13
  char v23; // r11
  _BYTE *v24; // r8
  unsigned __int8 v25; // r10
  char v26; // di
  int v27; // eax
  char v28; // r12
  char *v29; // r15
  unsigned int v30; // r9d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r12
  unsigned int v34; // r15d
  char v35; // r9
  _BYTE *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-130h]
  __int64 v41; // [rsp+28h] [rbp-128h]
  __int64 v42; // [rsp+30h] [rbp-120h]
  __int64 v43; // [rsp+38h] [rbp-118h]
  __int64 v44; // [rsp+40h] [rbp-110h]
  __int64 v45; // [rsp+48h] [rbp-108h]
  char v46; // [rsp+D0h] [rbp-80h]
  char v47; // [rsp+D1h] [rbp-7Fh]
  char v48; // [rsp+D2h] [rbp-7Eh]
  int v49; // [rsp+D4h] [rbp-7Ch]
  int v50; // [rsp+D8h] [rbp-78h]
  unsigned int v51; // [rsp+DCh] [rbp-74h]
  __int128 v52; // [rsp+E0h] [rbp-70h] BYREF
  GUID v53; // [rsp+F0h] [rbp-60h] BYREF
  _OWORD v54[2]; // [rsp+100h] [rbp-50h] BYREF

  v2 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v52 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  memset(v54, 0, sizeof(v54));
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)(v5 + 8) >= 0x34u )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
      {
        v6 = -2147483631;
      }
      else
      {
        v7 = *(void **)(a2 + 24);
        memset_0(v7, 0, *(unsigned int *)(v5 + 8));
        TcgConfigInformation = RaidGetTcgConfigInformation(a1, v7, v54);
        v6 = TcgConfigInformation;
        if ( TcgConfigInformation >= 0 )
          *(_QWORD *)(a2 + 56) = 52LL;
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
        v9 = TcgConfigInformation;
        if ( TcgConfigInformation < 0 )
        {
          v49 = *(_DWORD *)(a1 + 104);
          RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v52);
          v11 = *(_QWORD *)(a1 + 24);
          if ( (byte_140171467 & 2) != 0 )
          {
            v12 = *(const wchar_t **)(v11 + 5080);
            v13 = v11 + 5064;
            v14 = *(_DWORD *)(v11 + 56);
            v15 = (const wchar_t *)&unk_140151214;
            if ( v12 )
              v15 = v12;
            McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
              a1 + 242,
              a1 + 177,
              a1 + 168,
              v14,
              v10,
              SBYTE1(v49),
              SBYTE2(v49),
              a1 + 2104,
              v13,
              *((const wchar_t **)&v52 + 1),
              (const char *)(a1 + 168),
              (const char *)(a1 + 177),
              (const char *)(a1 + 242),
              v15,
              "TcgQueryCapabilityConfiguration",
              (const char *)v54,
              v9,
              (*(_BYTE *)(a1 + 507) & 0x40) != 0,
              0,
              0,
              0,
              0);
            v6 = v9;
          }
        }
      }
    }
    else
    {
      v6 = -1073741789;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v16 )
    goto LABEL_83;
  v53 = 0LL;
  IoGetActivityIdIrp(a2, &v53);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_83;
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v2 = *v19;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v17, v18, &v53, a2, v40, v41);
      }
      goto LABEL_83;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_83;
    v20 = &EventPnpRequestComplete;
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
LABEL_82:
    McTemplateK0pd_EtwWriteTransfer(v17, v20, &v53, a2, v40);
    goto LABEL_83;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_83;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0;
  v47 = 0;
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
    goto LABEL_57;
  }
  v27 = *(_DWORD *)(v21 + 20);
  v29 = 0LL;
  v48 = 0;
  if ( v27 )
    goto LABEL_83;
  v30 = *(_DWORD *)(v21 + 56);
  v17 = 0LL;
  v50 = 0;
  v51 = v30;
  if ( !v30 )
    goto LABEL_54;
  v31 = (unsigned int *)(v21 + 120);
  *(_QWORD *)&v52 = v21 + 120;
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_47:
    v17 = (unsigned int)(v17 + 1);
    v31 = (unsigned int *)(v52 + 4);
    v50 = v17;
    *(_QWORD *)&v52 = v52 + 4;
    if ( (unsigned int)v17 >= v30 )
      goto LABEL_53;
  }
  if ( *(_DWORD *)(v32 + v21) != 64 )
  {
    v17 = (unsigned int)(*(_DWORD *)(v32 + v21) - 65);
    if ( *(_DWORD *)(v32 + v21) == 65 )
    {
      v17 = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v48 = 1;
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
        goto LABEL_52;
      }
    }
    goto LABEL_45;
  }
  v17 = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_45:
    if ( v48 )
      goto LABEL_53;
    LODWORD(v17) = v50;
    v30 = v51;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(v32 + v21 + 10) )
    v29 = (char *)(v32 + v21 + 24);
  v24 = *(_BYTE **)(v32 + v21 + 16);
LABEL_52:
  v25 = *(_BYTE *)(v32 + v21 + 9);
  v23 = *(_BYTE *)(v32 + v21 + 8);
LABEL_53:
  v27 = 0;
  v28 = 0;
LABEL_54:
  if ( !v29 )
  {
LABEL_57:
    v34 = v6;
    if ( !v27 )
      goto LABEL_58;
    goto LABEL_83;
  }
  v22 = *v29;
  v34 = v6;
LABEL_58:
  if ( ((v22 - 8) & 0x5D) == 0 )
  {
    v35 = *(_BYTE *)(v21 + 3);
    if ( v35 == 1 || !v24 || !v25 )
      goto LABEL_78;
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
        v47 = v24[2];
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
          v47 = 0;
        else
          v47 = v24[12];
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
      LOBYTE(v2) = v47;
      v6 = v34;
      v38 = v28;
    }
    else
    {
LABEL_78:
      v26 = 0;
      v38 = 0;
    }
    LOBYTE(v45) = v38;
    LOBYTE(v44) = v2;
    LOBYTE(v43) = v26;
    LOBYTE(v42) = v23;
    LOBYTE(v41) = v35;
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v53, a2, v40, v41, v42, v43, v44, v45, a2);
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
