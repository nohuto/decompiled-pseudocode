/*
 * XREFs of RaidAdapterStorageTcgResetState @ 0x14007DE48
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
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

__int64 __fastcall RaidAdapterStorageTcgResetState(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // r15d
  __int64 v6; // r8
  const wchar_t *v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r12
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bl
  char v18; // r11
  char v19; // r13
  char *v20; // r11
  unsigned int v21; // r8d
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  __int64 v31; // [rsp+20h] [rbp-130h]
  __int64 v32; // [rsp+28h] [rbp-128h]
  __int64 v33; // [rsp+30h] [rbp-120h]
  __int64 v34; // [rsp+38h] [rbp-118h]
  __int64 v35; // [rsp+40h] [rbp-110h]
  __int64 v36; // [rsp+48h] [rbp-108h]
  char v37; // [rsp+D0h] [rbp-80h]
  char v38; // [rsp+D1h] [rbp-7Fh]
  unsigned int v39; // [rsp+D4h] [rbp-7Ch]
  int v40; // [rsp+D8h] [rbp-78h]
  __int128 v41; // [rsp+E0h] [rbp-70h] BYREF
  GUID v42; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+100h] [rbp-50h] BYREF
  char pszDest[16]; // [rsp+110h] [rbp-40h] BYREF
  __int128 v45; // [rsp+120h] [rbp-30h]

  v43 = 0LL;
  v41 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v45 = 0LL;
  v4 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    v5 = -2147483631;
  }
  else
  {
    v5 = TcglibTPerReset(*(_QWORD *)(a1 + 6056));
    if ( v5 < 0 )
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibTPerReset");
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v5 < 0 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v41);
    if ( (byte_140171467 & 2) != 0 )
    {
      v7 = (const wchar_t *)&unk_140151214;
      if ( *(_QWORD *)(a1 + 5080) )
        v7 = *(const wchar_t **)(a1 + 5080);
      McTemplateK0quuujjzssszssdxxxxxxxx_EtwWriteTransfer(
        (__int64)v7,
        a1 + 5064,
        v6,
        *(_DWORD *)(a1 + 56),
        RaidNullAddress,
        SBYTE1(RaidNullAddress),
        SBYTE2(RaidNullAddress),
        (__int64)&v43,
        a1 + 5064,
        *((const wchar_t **)&v41 + 1),
        byte_140151064,
        byte_140151064,
        byte_140151064,
        v7,
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
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v8 )
    goto LABEL_77;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_77;
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_76;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_77;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v4 = *v11;
        LODWORD(v32) = *(_DWORD *)(a2 + 48);
        LODWORD(v31) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v42, a2, v31, v32);
      }
      goto LABEL_77;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_77;
    v12 = &EventPnpRequestComplete;
LABEL_76:
    LODWORD(v31) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v42, a2, v31);
    goto LABEL_77;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_77;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v37 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_53;
    goto LABEL_77;
  }
  v20 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_77;
  v9 = 0LL;
  v40 = 0;
  v39 = *(_DWORD *)(v13 + 56);
  if ( !v39 )
    goto LABEL_50;
  v21 = *(_DWORD *)(v13 + 56);
  v22 = (unsigned int *)(v13 + 120);
  *(_QWORD *)&v41 = v13 + 120;
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_44:
    v9 = (unsigned int)(v9 + 1);
    v22 = (unsigned int *)(v41 + 4);
    v40 = v9;
    *(_QWORD *)&v41 = v41 + 4;
    if ( (unsigned int)v9 >= v21 )
      goto LABEL_50;
  }
  if ( *(_DWORD *)(v23 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v23 + v13) - 65);
    if ( *(_DWORD *)(v23 + v13) == 65 )
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v24 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v13) == 66 )
    {
      v9 = v23 + 40;
      if ( v23 + 40 <= v24 )
      {
        if ( *(_DWORD *)(v23 + v13 + 12) )
          v20 = (char *)(v23 + v13 + 32);
        v15 = *(_BYTE **)(v23 + v13 + 24);
        goto LABEL_49;
      }
    }
    goto LABEL_42;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v24 )
  {
LABEL_42:
    if ( v38 )
      goto LABEL_50;
    LODWORD(v9) = v40;
    v21 = v39;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_49:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_50:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_53:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v13 + 3);
      if ( v26 == 1 || !v15 || !v16 )
        goto LABEL_72;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v37 = 0;
          else
            v37 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v37;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v4) = v18;
        v29 = v19;
      }
      else
      {
LABEL_72:
        v17 = 0;
        v29 = 0;
      }
      LOBYTE(v36) = v29;
      LOBYTE(v35) = v4;
      LOBYTE(v34) = v17;
      LOBYTE(v33) = v14;
      LOBYTE(v32) = v26;
      LODWORD(v31) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v42, a2, v31, v32, v33, v34, v35, v36, a2);
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v5;
}
