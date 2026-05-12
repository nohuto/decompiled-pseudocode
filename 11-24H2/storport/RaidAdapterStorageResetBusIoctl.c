/*
 * XREFs of RaidAdapterStorageResetBusIoctl @ 0x14003E78C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageResetBusIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  char *v5; // rcx
  unsigned __int8 *v6; // rdx
  int *v7; // rax
  __int128 *v8; // r8
  __int128 *v9; // r8
  void *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r15
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // si
  char v16; // r11
  char v17; // r12
  char *v18; // r11
  unsigned int *v19; // r13
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  char v22; // cl
  char v23; // r8
  char *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  int *v27; // rax
  unsigned __int64 v28; // rdx
  char v29; // r15
  _BYTE *v30; // r9
  unsigned __int8 v31; // r10
  char v32; // si
  char v33; // r11
  char v34; // r12
  char *v35; // r11
  unsigned int *v36; // r13
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  char v39; // cl
  char v40; // r8
  char *v41; // rax
  unsigned int v42; // eax
  char v43; // al
  char v45; // [rsp+60h] [rbp-19h]
  char v46; // [rsp+60h] [rbp-19h]
  char v47; // [rsp+61h] [rbp-18h]
  char v48; // [rsp+61h] [rbp-18h]
  int v49; // [rsp+64h] [rbp-15h]
  int v50; // [rsp+64h] [rbp-15h]
  unsigned int v51; // [rsp+68h] [rbp-11h]
  unsigned int v52; // [rsp+68h] [rbp-11h]
  unsigned int v53; // [rsp+6Ch] [rbp-Dh]
  __int128 v54; // [rsp+70h] [rbp-9h] BYREF
  __int128 v55; // [rsp+80h] [rbp+7h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
  {
    LOBYTE(v3) = 0;
    v53 = RaidAdapterResetBus(a1, **(_BYTE **)(a2 + 24));
    v4 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v53;
    if ( v4 )
      goto LABEL_137;
    v55 = 0LL;
    IoGetActivityIdIrp(a2, &v55);
    v6 = *(unsigned __int8 **)(a2 + 184);
    v5 = (char *)((unsigned int)*v6 - 14);
    if ( *v6 != 14 )
    {
      v5 = (char *)((unsigned int)*v6 - 15);
      if ( *v6 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_137;
        v28 = *((_QWORD *)v6 + 1);
        v29 = 0;
        v30 = 0LL;
        v46 = 0;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        if ( *(_BYTE *)(v28 + 2) == 40 )
        {
          v35 = 0LL;
          v48 = 0;
          if ( *(_DWORD *)(v28 + 20) )
            goto LABEL_137;
          LODWORD(v5) = 0;
          v50 = 0;
          v52 = *(_DWORD *)(v28 + 56);
          if ( !v52 )
            goto LABEL_109;
          v36 = (unsigned int *)(v28 + 120);
          while ( 1 )
          {
            v37 = *v36;
            if ( (unsigned int)v37 >= 0x80 )
            {
              v38 = *(unsigned int *)(v28 + 16);
              if ( (unsigned int)v37 < (unsigned int)v38 )
              {
                if ( *(_DWORD *)(v37 + v28) == 64 )
                {
                  LODWORD(v5) = v37 + 40;
                  if ( v37 + 40 <= v38 )
                  {
                    if ( *(_BYTE *)(v37 + v28 + 10) )
                      v35 = (char *)(v37 + v28 + 24);
                    v30 = *(_BYTE **)(v37 + v28 + 16);
LABEL_108:
                    v31 = *(_BYTE *)(v37 + v28 + 9);
                    v29 = *(_BYTE *)(v37 + v28 + 8);
LABEL_109:
                    if ( !v35 )
                      goto LABEL_137;
                    v39 = *v35;
                    v33 = 0;
LABEL_112:
                    LOBYTE(v5) = v39 - 8;
                    if ( ((unsigned __int8)v5 & 0x5D) == 0 )
                    {
                      v40 = *(_BYTE *)(v28 + 3);
                      if ( v40 == 1 || !v30 || !v31 )
                        goto LABEL_131;
                      LOBYTE(v28) = 0;
                      v5 = &v30[v31];
                      v41 = v30 + 8;
                      if ( (unsigned __int8)((*v30 & 0x7F) - 114) <= 1u )
                      {
                        if ( v41 <= v5 )
                        {
                          LOBYTE(v28) = 1;
                          v33 = v30[2];
                          v32 = v30[1] & 0xF;
                          v34 = v30[3];
                        }
                      }
                      else
                      {
                        if ( v41 <= v5 )
                        {
                          v32 = v30[2] & 0xF;
                          v42 = v31;
                          if ( (unsigned int)(unsigned __int8)v30[7] + 8 <= v31 )
                            v42 = (unsigned __int8)v30[7] + 8;
                          v5 = v30 + 13;
                          v28 = (unsigned __int64)&v30[v42];
                          if ( (unsigned __int64)(v30 + 13) > v28 )
                            v46 = 0;
                          else
                            v46 = v30[12];
                          if ( (unsigned __int64)(v30 + 14) <= v28 )
                            v34 = *v5;
                          LOBYTE(v28) = 1;
                        }
                        v33 = v46;
                      }
                      if ( (_BYTE)v28 )
                      {
                        LOBYTE(v3) = v33;
                        v43 = v34;
                      }
                      else
                      {
LABEL_131:
                        v32 = 0;
                        v43 = 0;
                      }
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        (_DWORD)v5,
                        v28,
                        (unsigned int)&v55,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v40,
                        v29,
                        v32,
                        v3,
                        v43,
                        a2);
                    }
                    goto LABEL_137;
                  }
                }
                else
                {
                  LODWORD(v5) = *(_DWORD *)(v37 + v28) - 65;
                  if ( *(_DWORD *)(v37 + v28) == 65 )
                  {
                    LODWORD(v5) = v37 + 56;
                    if ( v37 + 56 <= v38 )
                    {
                      v48 = 1;
                      if ( *(_BYTE *)(v37 + v28 + 10) )
                        v35 = (char *)(v37 + v28 + 24);
                      v29 = *(_BYTE *)(v37 + v28 + 8);
                      v30 = *(_BYTE **)(v37 + v28 + 16);
                      v31 = *(_BYTE *)(v37 + v28 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v37 + v28) == 66 )
                  {
                    LODWORD(v5) = v37 + 40;
                    if ( v37 + 40 <= v38 )
                    {
                      if ( *(_DWORD *)(v37 + v28 + 12) )
                        v35 = (char *)(v37 + v28 + 32);
                      v30 = *(_BYTE **)(v37 + v28 + 24);
                      goto LABEL_108;
                    }
                  }
                }
                if ( v48 )
                  goto LABEL_109;
                LODWORD(v5) = v50;
              }
            }
            LODWORD(v5) = (_DWORD)v5 + 1;
            ++v36;
            v50 = (int)v5;
            if ( (unsigned int)v5 >= v52 )
              goto LABEL_109;
          }
        }
        v39 = *(_BYTE *)(v28 + 72);
        v30 = *(_BYTE **)(v28 + 32);
        v31 = *(_BYTE *)(v28 + 11);
        v29 = *(_BYTE *)(v28 + 4);
        if ( *(_BYTE *)(v28 + 2) )
          goto LABEL_137;
        goto LABEL_112;
      }
      if ( *v6 != 27 )
        goto LABEL_137;
      if ( v6[1] == 7 && !*((_DWORD *)v6 + 2) )
      {
        if ( (byte_140171462 & 0x40) == 0 )
          goto LABEL_137;
        v27 = *(int **)(a2 + 56);
        if ( v27 )
          v3 = *v27;
        v8 = &v55;
        goto LABEL_12;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_137;
      v9 = &v55;
      goto LABEL_15;
    }
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_137;
    v9 = &v55;
LABEL_135:
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_136;
  }
  *(_BYTE *)(a2 + 141) = -84;
  LOBYTE(v3) = 0;
  v53 = -1073741811;
  v4 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v4 )
    goto LABEL_137;
  v54 = 0LL;
  IoGetActivityIdIrp(a2, &v54);
  v6 = *(unsigned __int8 **)(a2 + 184);
  if ( *v6 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_137;
    v9 = &v54;
    goto LABEL_135;
  }
  if ( *v6 != 15 )
  {
    if ( *v6 != 27 )
      goto LABEL_137;
    if ( v6[1] == 7 && !*((_DWORD *)v6 + 2) )
    {
      if ( (byte_140171462 & 0x40) == 0 )
        goto LABEL_137;
      v7 = *(int **)(a2 + 56);
      if ( v7 )
        v3 = *v7;
      v8 = &v54;
LABEL_12:
      McTemplateK0pqd_EtwWriteTransfer((_DWORD)v5, (_DWORD)v6, (_DWORD)v8, a2, v3, *(_DWORD *)(a2 + 48));
      goto LABEL_137;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_137;
    v9 = &v54;
LABEL_15:
    v10 = &EventPnpRequestComplete;
LABEL_136:
    McTemplateK0pd_EtwWriteTransfer(v5, v10, v9, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_137;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_137;
  v11 = *((_QWORD *)v6 + 1);
  v12 = 0;
  v13 = 0LL;
  v45 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_46;
    goto LABEL_137;
  }
  v18 = 0LL;
  v47 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_137;
  LODWORD(v5) = 0;
  v49 = 0;
  v51 = *(_DWORD *)(v11 + 56);
  if ( !v51 )
    goto LABEL_43;
  v19 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_37:
    LODWORD(v5) = (_DWORD)v5 + 1;
    ++v19;
    v49 = (int)v5;
    if ( (unsigned int)v5 >= v51 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v20 + v11) != 64 )
  {
    LODWORD(v5) = *(_DWORD *)(v20 + v11) - 65;
    if ( *(_DWORD *)(v20 + v11) == 65 )
    {
      LODWORD(v5) = v20 + 56;
      if ( v20 + 56 <= v21 )
      {
        v47 = 1;
        if ( *(_BYTE *)(v20 + v11 + 10) )
          v18 = (char *)(v20 + v11 + 24);
        v12 = *(_BYTE *)(v20 + v11 + 8);
        v13 = *(_BYTE **)(v20 + v11 + 16);
        v14 = *(_BYTE *)(v20 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + v11) == 66 )
    {
      LODWORD(v5) = v20 + 40;
      if ( v20 + 40 <= v21 )
      {
        if ( *(_DWORD *)(v20 + v11 + 12) )
          v18 = (char *)(v20 + v11 + 32);
        v13 = *(_BYTE **)(v20 + v11 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_35;
  }
  LODWORD(v5) = v20 + 40;
  if ( v20 + 40 > v21 )
  {
LABEL_35:
    if ( v47 )
      goto LABEL_43;
    LODWORD(v5) = v49;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v20 + v11 + 10) )
    v18 = (char *)(v20 + v11 + 24);
  v13 = *(_BYTE **)(v20 + v11 + 16);
LABEL_42:
  v14 = *(_BYTE *)(v20 + v11 + 9);
  v12 = *(_BYTE *)(v20 + v11 + 8);
LABEL_43:
  if ( v18 )
  {
    v22 = *v18;
    v16 = 0;
LABEL_46:
    LOBYTE(v5) = v22 - 8;
    if ( ((unsigned __int8)v5 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v11 + 3);
      if ( v23 == 1 || !v13 || !v14 )
        goto LABEL_65;
      LOBYTE(v11) = 0;
      v5 = &v13[v14];
      v24 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( v24 <= v5 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( v24 <= v5 )
        {
          v15 = v13[2] & 0xF;
          v25 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v25 = (unsigned __int8)v13[7] + 8;
          v5 = v13 + 13;
          v11 = (unsigned __int64)&v13[v25];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v45 = 0;
          else
            v45 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *v5;
          LOBYTE(v11) = 1;
        }
        v16 = v45;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v3) = v16;
        v26 = v17;
      }
      else
      {
LABEL_65:
        v15 = 0;
        v26 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v5,
        v11,
        (unsigned int)&v54,
        a2,
        *(_DWORD *)(a2 + 48),
        v23,
        v12,
        v15,
        v3,
        v26,
        a2);
    }
  }
LABEL_137:
  IofCompleteRequest((PIRP)a2, 0);
  return v53;
}
