/*
 * XREFs of RaUnitFlushSrb @ 0x140005750
 * Callers:
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitFlushSrb(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  int v9; // edx
  char *v10; // rcx
  char v11; // al
  unsigned __int64 v13; // r14
  unsigned int v14; // ebp
  int v15; // r8d
  __int64 v16; // rcx
  int *v17; // rax
  int v18; // ecx
  __int64 v19; // r8
  unsigned __int8 v20; // r9
  char v21; // r11
  char v22; // r12
  char v23; // r14
  char v24; // si
  _BYTE *v25; // rdx
  unsigned __int8 *v26; // r10
  unsigned int v27; // ecx
  unsigned int *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  int v31; // ecx
  int v32; // ecx
  char *v33; // rcx
  char v34; // r10
  char v35; // r8
  char *v36; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // r8
  int v39; // [rsp+64h] [rbp-54h]
  __int128 v40; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_DWORD **)(a1 + 24);
  if ( *v2 == 1094997074 )
  {
    v5 = (__int64)v2 + 467;
  }
  else if ( *v2 == 1314275652 )
  {
    v5 = (__int64)v2 + 259;
  }
  else
  {
    v5 = 91LL;
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)v5 )
  {
    *(_BYTE *)(v6 + 3) |= 1u;
    *(_BYTE *)(v7 + 3) = 0;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      v13 = *(unsigned int *)(v7 + 20);
      v14 = *(_DWORD *)(v7 + 24);
    }
    else
    {
      v14 = *(_DWORD *)(v7 + 12);
      v13 = *(unsigned __int8 *)(v7 + 2);
    }
    if ( (qword_140170460 & 0x20) != 0 )
      DbgLogRequest(
        *(_QWORD *)(a1 + 24),
        3,
        a2,
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
        0LL,
        0LL,
        0LL);
    v15 = (v14 >> 17) & 4 | 2;
    if ( (v14 & 0x10) == 0 )
      v15 = (v14 >> 17) & 4;
    if ( (v14 & 0x102) != 0x102 && (v14 & 0x80010) == 0 )
    {
      if ( (unsigned int)v13 > 0x20 || (v16 = 0x1000D0000LL, !_bittest64(&v16, v13)) )
        v15 |= 1u;
    }
    RaidStartIoPacket(a1, a2, v15);
    return 259LL;
  }
  else
  {
    v8 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v7 + 3) = 1;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v8 )
      goto LABEL_7;
    v40 = 0LL;
    IoGetActivityIdIrp(a2, &v40);
    v10 = *(char **)(a2 + 184);
    v11 = *v10;
    if ( *v10 != 15 )
    {
      if ( v11 == 14 )
      {
        if ( (byte_140171462 & 8) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v10, &EventNonReadWriteRequestComplete, &v40, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( v11 == 27 )
      {
        if ( v10[1] == 7 && !*((_DWORD *)v10 + 2) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v17 = *(int **)(a2 + 56);
            if ( v17 )
              v18 = *v17;
            else
              v18 = 0;
            McTemplateK0pqd_EtwWriteTransfer(v18, v9, (unsigned int)&v40, a2, v18, *(_DWORD *)(a2 + 48));
          }
        }
        else if ( (byte_140171462 & 0x20) != 0 )
        {
          McTemplateK0pd_EtwWriteTransfer(v10, &EventPnpRequestComplete, &v40, a2, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_7;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_7;
    v19 = *((_QWORD *)v10 + 1);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0LL;
    if ( *(_BYTE *)(v19 + 2) == 40 )
    {
      v26 = 0LL;
      if ( *(_DWORD *)(v19 + 20) )
        goto LABEL_7;
      v39 = 0;
      if ( !*(_DWORD *)(v19 + 56) )
        goto LABEL_55;
      v27 = *(_DWORD *)(v19 + 56);
      v28 = (unsigned int *)(v19 + 120);
      while ( 1 )
      {
        v29 = *v28;
        if ( (unsigned int)v29 >= 0x80 )
        {
          v30 = *(unsigned int *)(v19 + 16);
          if ( (unsigned int)v29 < (unsigned int)v30 )
          {
            v31 = *(_DWORD *)(v29 + v19);
            if ( v31 == 64 )
            {
              if ( v29 + 40 <= v30 )
              {
                if ( !*(_BYTE *)(v29 + v19 + 10) )
                  goto LABEL_53;
LABEL_52:
                v26 = (unsigned __int8 *)(v29 + v19 + 24);
LABEL_53:
                v25 = *(_BYTE **)(v29 + v19 + 16);
                goto LABEL_54;
              }
            }
            else
            {
              v32 = v31 - 65;
              if ( v32 )
              {
                if ( v32 == 1 && v29 + 40 <= v30 )
                {
                  if ( *(_DWORD *)(v29 + v19 + 12) )
                    v26 = (unsigned __int8 *)(v29 + v19 + 32);
                  v25 = *(_BYTE **)(v29 + v19 + 24);
LABEL_54:
                  v22 = *(_BYTE *)(v29 + v19 + 8);
                  v20 = *(_BYTE *)(v29 + v19 + 9);
LABEL_55:
                  if ( v26 )
                  {
                    LODWORD(v33) = *v26;
                    goto LABEL_64;
                  }
                  goto LABEL_7;
                }
              }
              else if ( v29 + 56 <= v30 )
              {
                if ( *(_BYTE *)(v29 + v19 + 10) )
                  goto LABEL_52;
                goto LABEL_53;
              }
            }
            v27 = *(_DWORD *)(v19 + 56);
          }
        }
        ++v28;
        if ( ++v39 >= v27 )
          goto LABEL_55;
      }
    }
    LODWORD(v33) = *(unsigned __int8 *)(v19 + 72);
    v25 = *(_BYTE **)(v19 + 32);
    v20 = *(_BYTE *)(v19 + 11);
    v22 = *(_BYTE *)(v19 + 4);
    if ( *(_BYTE *)(v19 + 2) )
      goto LABEL_7;
LABEL_64:
    LOBYTE(v33) = (_BYTE)v33 - 8;
    if ( ((unsigned __int8)v33 & 0x5D) == 0 )
    {
      v34 = *(_BYTE *)(v19 + 3);
      if ( v34 == 1 || !v25 || !v20 )
        goto LABEL_80;
      v35 = 0;
      v33 = &v25[v20];
      v36 = v25 + 8;
      if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
      {
        if ( v36 > v33 )
          goto LABEL_79;
        v23 = v25[2];
        v21 = v25[1] & 0xF;
        v24 = v25[3];
      }
      else
      {
        if ( v36 > v33 )
          goto LABEL_79;
        v21 = v25[2] & 0xF;
        v37 = v20;
        if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v20 )
          v37 = (unsigned __int8)v25[7] + 8;
        v33 = v25 + 13;
        v38 = (unsigned __int64)&v25[v37];
        if ( (unsigned __int64)(v25 + 13) <= v38 )
          v23 = v25[12];
        if ( (unsigned __int64)(v25 + 14) <= v38 )
          v24 = *v33;
      }
      v35 = 1;
LABEL_79:
      if ( v35 )
      {
LABEL_81:
        McTemplateK0pduuuuup_EtwWriteTransfer(
          (_DWORD)v33,
          (_DWORD)v25,
          (unsigned int)&v40,
          a2,
          *(_DWORD *)(a2 + 48),
          v34,
          v22,
          v21,
          v23,
          v24,
          a2);
        goto LABEL_7;
      }
LABEL_80:
      v24 = 0;
      v23 = 0;
      v21 = 0;
      goto LABEL_81;
    }
LABEL_7:
    IofCompleteRequest((PIRP)a2, 0);
    return 0LL;
  }
}
