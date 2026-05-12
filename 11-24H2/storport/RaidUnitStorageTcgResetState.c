/*
 * XREFs of RaidUnitStorageTcgResetState @ 0x14008277C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer @ 0x14007B330 (McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer.c)
 *     TcglibTPerReset @ 0x14013D1E4 (TcglibTPerReset.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitStorageTcgResetState(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // r15d
  char v6; // r11
  __int64 v7; // r9
  const wchar_t *v8; // rax
  __int64 v9; // r8
  int v10; // r9d
  const wchar_t *v11; // rbx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int64 v17; // rdx
  char v18; // r12
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bl
  char v22; // r11
  char v23; // r13
  char *v24; // r11
  unsigned int v25; // r8d
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  __int64 v35; // [rsp+20h] [rbp-130h]
  __int64 v36; // [rsp+28h] [rbp-128h]
  __int64 v37; // [rsp+30h] [rbp-120h]
  __int64 v38; // [rsp+38h] [rbp-118h]
  __int64 v39; // [rsp+40h] [rbp-110h]
  __int64 v40; // [rsp+48h] [rbp-108h]
  char v41; // [rsp+D0h] [rbp-80h]
  char v42; // [rsp+D1h] [rbp-7Fh]
  int v43; // [rsp+D4h] [rbp-7Ch]
  unsigned int v44; // [rsp+D4h] [rbp-7Ch]
  int v45; // [rsp+D8h] [rbp-78h]
  __int128 v46; // [rsp+E0h] [rbp-70h] BYREF
  GUID v47; // [rsp+F0h] [rbp-60h] BYREF
  char pszDest[16]; // [rsp+100h] [rbp-50h] BYREF
  __int128 v49; // [rsp+110h] [rbp-40h]

  v46 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v49 = 0LL;
  v4 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v5 = -2147483631;
  }
  else
  {
    v5 = TcglibTPerReset(*(_QWORD *)(a1 + 3584));
    if ( v5 < 0 )
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibTPerReset");
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v5 < 0 )
  {
    v43 = *(_DWORD *)(a1 + 104);
    RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v46);
    v7 = *(_QWORD *)(a1 + 24);
    if ( (byte_140171467 & 2) != 0 )
    {
      v8 = *(const wchar_t **)(v7 + 5080);
      v9 = v7 + 5064;
      v10 = *(_DWORD *)(v7 + 56);
      v11 = (const wchar_t *)&unk_140151214;
      if ( v8 )
        v11 = v8;
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        v9,
        v10,
        v6,
        SBYTE1(v43),
        SBYTE2(v43),
        a1 + 2104,
        v9,
        *((const wchar_t **)&v46 + 1),
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        v11,
        "TcgResetState",
        pszDest,
        v5,
        0,
        0,
        0,
        0,
        0);
    }
  }
  v12 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v12 )
    goto LABEL_77;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_77;
    v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_76;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_77;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v4 = *v15;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        LODWORD(v35) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v47, a2, v35, v36);
      }
      goto LABEL_77;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_77;
    v16 = &EventPnpRequestComplete;
LABEL_76:
    LODWORD(v35) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v47, a2, v35);
    goto LABEL_77;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_77;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v41 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_53;
    goto LABEL_77;
  }
  v24 = 0LL;
  v42 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_77;
  v13 = 0LL;
  v45 = 0;
  v44 = *(_DWORD *)(v17 + 56);
  if ( !v44 )
    goto LABEL_50;
  v25 = *(_DWORD *)(v17 + 56);
  v26 = (unsigned int *)(v17 + 120);
  *(_QWORD *)&v46 = v17 + 120;
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_44:
    v13 = (unsigned int)(v13 + 1);
    v26 = (unsigned int *)(v46 + 4);
    v45 = v13;
    *(_QWORD *)&v46 = v46 + 4;
    if ( (unsigned int)v13 >= v25 )
      goto LABEL_50;
  }
  if ( *(_DWORD *)(v27 + v17) != 64 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v27 + v17) - 65);
    if ( *(_DWORD *)(v27 + v17) == 65 )
    {
      v13 = v27 + 56;
      if ( v27 + 56 <= v28 )
      {
        v42 = 1;
        if ( *(_BYTE *)(v27 + v17 + 10) )
          v24 = (char *)(v27 + v17 + 24);
        v18 = *(_BYTE *)(v27 + v17 + 8);
        v19 = *(_BYTE **)(v27 + v17 + 16);
        v20 = *(_BYTE *)(v27 + v17 + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + v17) == 66 )
    {
      v13 = v27 + 40;
      if ( v27 + 40 <= v28 )
      {
        if ( *(_DWORD *)(v27 + v17 + 12) )
          v24 = (char *)(v27 + v17 + 32);
        v19 = *(_BYTE **)(v27 + v17 + 24);
        goto LABEL_49;
      }
    }
    goto LABEL_42;
  }
  v13 = v27 + 40;
  if ( v27 + 40 > v28 )
  {
LABEL_42:
    if ( v42 )
      goto LABEL_50;
    LODWORD(v13) = v45;
    v25 = v44;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(v27 + v17 + 10) )
    v24 = (char *)(v27 + v17 + 24);
  v19 = *(_BYTE **)(v27 + v17 + 16);
LABEL_49:
  v20 = *(_BYTE *)(v27 + v17 + 9);
  v18 = *(_BYTE *)(v27 + v17 + 8);
LABEL_50:
  if ( v24 )
  {
    v29 = *v24;
    v22 = 0;
LABEL_53:
    LOBYTE(v13) = v29 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v17 + 3);
      if ( v30 == 1 || !v19 || !v20 )
        goto LABEL_72;
      LOBYTE(v17) = 0;
      v13 = (unsigned __int64)&v19[v20];
      v31 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          LOBYTE(v17) = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v32 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v32 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v17 = (unsigned __int64)&v19[v32];
          if ( (unsigned __int64)(v19 + 13) > v17 )
            v41 = 0;
          else
            v41 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v17 )
            v23 = *(_BYTE *)v13;
          LOBYTE(v17) = 1;
        }
        v22 = v41;
      }
      if ( (_BYTE)v17 )
      {
        LOBYTE(v4) = v22;
        v33 = v23;
      }
      else
      {
LABEL_72:
        v21 = 0;
        v33 = 0;
      }
      LOBYTE(v40) = v33;
      LOBYTE(v39) = v4;
      LOBYTE(v38) = v21;
      LOBYTE(v37) = v18;
      LOBYTE(v36) = v30;
      LODWORD(v35) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, &v47, a2, v35, v36, v37, v38, v39, v40, a2);
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v5;
}
