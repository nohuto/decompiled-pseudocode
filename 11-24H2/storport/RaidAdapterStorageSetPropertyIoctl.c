/*
 * XREFs of RaidAdapterStorageSetPropertyIoctl @ 0x14006484C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006651C (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageSetPropertyIoctl(__int64 a1, __int64 a2)
{
  int *v4; // rdx
  unsigned int v5; // r14d
  int v6; // ecx
  int v7; // edx
  int v8; // ebx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // r11
  char v18; // si
  char v19; // r12
  int v20; // eax
  char *v21; // rsi
  unsigned int *v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  const EVENT_DESCRIPTOR *v25; // rdx
  int *v26; // rax
  unsigned int *v27; // r13
  unsigned __int64 v28; // r14
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  char v35; // [rsp+60h] [rbp-9h]
  char v36; // [rsp+61h] [rbp-8h]
  char v37; // [rsp+61h] [rbp-8h]
  int v38; // [rsp+64h] [rbp-5h]
  int v39; // [rsp+68h] [rbp-1h]
  int v40; // [rsp+68h] [rbp-1h]
  unsigned __int64 v41; // [rsp+70h] [rbp+7h] BYREF
  GUID v42; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(int **)(a2 + 24);
  v5 = -1073741811;
  v38 = -1073741811;
  v41 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v41 >= 8 )
  {
    v6 = *v4;
    if ( *v4 == 49 || v6 == 67 )
    {
      v7 = v4[1];
      v8 = 0;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v5 = 0;
          v38 = 0;
        }
        else
        {
          v5 = -1073741808;
          *(_QWORD *)(a2 + 56) = 0LL;
          v38 = -1073741808;
        }
      }
      else if ( v6 == 49 || v6 == 67 )
      {
        v5 = RaidSetStorageAdapterProtocolSpecificProperty(a1, a2, &v41);
        *(_QWORD *)(a2 + 56) = v41;
        v38 = v5;
      }
      v9 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v5;
      if ( v9 )
        goto LABEL_102;
      v42 = 0LL;
      IoGetActivityIdIrp(a2, &v42);
      v11 = *(unsigned __int8 **)(a2 + 184);
      if ( *v11 != 14 )
      {
        v12 = *v11 - 15;
        if ( *v11 == 15 )
        {
          if ( byte_140171461 >= 0 )
            goto LABEL_102;
          v13 = *((_QWORD *)v11 + 1);
          v14 = 0;
          v15 = 0LL;
          v35 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          v20 = *(unsigned __int8 *)(v13 + 2);
          if ( (_BYTE)v20 == 40 )
          {
            v21 = 0LL;
            v36 = 0;
            if ( !*(_DWORD *)(v13 + 20) )
            {
              v10 = 0LL;
              v39 = 0;
              LODWORD(v41) = *(_DWORD *)(v13 + 56);
              if ( (_DWORD)v41 )
              {
                v22 = (unsigned int *)(v13 + 120);
                while ( 1 )
                {
                  v23 = *v22;
                  if ( (unsigned int)v23 >= 0x80 )
                  {
                    v24 = *(unsigned int *)(v13 + 16);
                    if ( (unsigned int)v23 < (unsigned int)v24 )
                    {
                      if ( *(_DWORD *)(v23 + v13) == 64 )
                      {
                        v10 = v23 + 40;
                        if ( v23 + 40 <= v24 )
                          goto LABEL_70;
                      }
                      else
                      {
                        v10 = (unsigned int)(*(_DWORD *)(v23 + v13) - 65);
                        if ( *(_DWORD *)(v23 + v13) == 65 )
                        {
                          v10 = v23 + 56;
                          if ( v23 + 56 <= v24 )
                          {
                            v36 = 1;
                            if ( *(_BYTE *)(v23 + v13 + 10) )
                              v21 = (char *)(v23 + v13 + 24);
                            v14 = *(_BYTE *)(v23 + v13 + 8);
                            v15 = *(_BYTE **)(v23 + v13 + 16);
                            v16 = *(_BYTE *)(v23 + v13 + 9);
                          }
                        }
                        else if ( *(_DWORD *)(v23 + v13) == 66 )
                        {
                          v10 = v23 + 40;
                          if ( v23 + 40 <= v24 )
                            goto LABEL_25;
                        }
                      }
                      if ( v36 )
                        goto LABEL_74;
                      LODWORD(v10) = v39;
                    }
                  }
                  v10 = (unsigned int)(v10 + 1);
                  ++v22;
                  v39 = v10;
                  if ( (unsigned int)v10 >= (unsigned int)v41 )
                    goto LABEL_74;
                }
              }
              goto LABEL_75;
            }
            goto LABEL_102;
          }
          goto LABEL_77;
        }
        goto LABEL_42;
      }
LABEL_99:
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_102;
      v25 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_101;
    }
  }
  v8 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v9 = StorEtwLoggingEnabled == 0;
  v5 = -1073741808;
  *(_QWORD *)(a2 + 56) = 0LL;
  v38 = -1073741808;
  *(_DWORD *)(a2 + 48) = -1073741808;
  if ( v9 )
    goto LABEL_102;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v11 = *(unsigned __int8 **)(a2 + 184);
  if ( *v11 == 14 )
    goto LABEL_99;
  v12 = *v11 - 15;
  if ( *v11 != 15 )
  {
LABEL_42:
    if ( v12 != 12 )
      goto LABEL_102;
    if ( v11[1] == 7 && !*((_DWORD *)v11 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v26 = *(int **)(a2 + 56);
        if ( v26 )
          v8 = *v26;
        McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, &v42, a2, v8, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_102;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_102;
    v25 = &EventPnpRequestComplete;
LABEL_101:
    McTemplateK0pd_EtwWriteTransfer(v10, v25, &v42, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_102;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_102;
  v13 = *((_QWORD *)v11 + 1);
  v14 = 0;
  v15 = 0LL;
  v35 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = *(unsigned __int8 *)(v13 + 2);
  if ( (_BYTE)v20 != 40 )
  {
LABEL_77:
    v29 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !v20 )
      goto LABEL_78;
    goto LABEL_102;
  }
  v21 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_102;
  v10 = 0LL;
  v40 = 0;
  LODWORD(v41) = *(_DWORD *)(v13 + 56);
  if ( !(_DWORD)v41 )
    goto LABEL_75;
  v27 = (unsigned int *)(v13 + 120);
  while ( 1 )
  {
    v23 = *v27;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v28 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v23 < (unsigned int)v28 )
        break;
    }
LABEL_68:
    v10 = (unsigned int)(v10 + 1);
    ++v27;
    v40 = v10;
    if ( (unsigned int)v10 >= (unsigned int)v41 )
      goto LABEL_74;
  }
  if ( *(_DWORD *)(v23 + v13) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v23 + v13) - 65);
    if ( *(_DWORD *)(v23 + v13) == 65 )
    {
      v10 = v23 + 56;
      if ( v23 + 56 <= v28 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v21 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v13) == 66 )
    {
      v10 = v23 + 40;
      if ( v23 + 40 <= v28 )
      {
LABEL_25:
        if ( *(_DWORD *)(v23 + v13 + 12) )
          v21 = (char *)(v23 + v13 + 32);
        v15 = *(_BYTE **)(v23 + v13 + 24);
        goto LABEL_73;
      }
    }
    goto LABEL_66;
  }
  v10 = v23 + 40;
  if ( v23 + 40 > v28 )
  {
LABEL_66:
    if ( v37 )
      goto LABEL_74;
    LODWORD(v10) = v40;
    goto LABEL_68;
  }
LABEL_70:
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v21 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_73:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_74:
  v5 = v38;
LABEL_75:
  if ( v21 )
  {
    v29 = *v21;
    v18 = 0;
LABEL_78:
    LOBYTE(v10) = v29 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v13 + 3);
      if ( v30 == 1 || !v15 || !v16 )
        goto LABEL_97;
      LOBYTE(v13) = 0;
      v10 = (unsigned __int64)&v15[v16];
      v31 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v10 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v10 )
        {
          v17 = v15[2] & 0xF;
          v32 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v32 = (unsigned __int8)v15[7] + 8;
          v10 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v32];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v35 = 0;
          else
            v35 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v10;
          LOBYTE(v13) = 1;
        }
        v18 = v35;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v8) = v18;
        v33 = v19;
      }
      else
      {
LABEL_97:
        v17 = 0;
        v33 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v13, &v42, a2, *(_DWORD *)(a2 + 48), v30, v14, v17, v8, v33, a2);
    }
  }
LABEL_102:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
