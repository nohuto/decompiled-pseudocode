/*
 * XREFs of NvmeNamespaceSetLedState @ 0x1401A92B0
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeNamespaceSetLedState(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rdx
  __int64 v6; // rax
  unsigned int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rdx
  char v13; // r12
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r14
  char v17; // r11
  char v18; // r13
  int v19; // eax
  char *v20; // r11
  unsigned int v21; // r15d
  unsigned __int64 v22; // rsi
  __int64 v23; // r8
  int v24; // ecx
  const EVENT_DESCRIPTOR *v25; // rdx
  int *v27; // rax
  unsigned int v28; // r15d
  unsigned __int64 v29; // rsi
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  int v36; // [rsp+20h] [rbp-60h]
  char v37; // [rsp+60h] [rbp-20h]
  char v38; // [rsp+61h] [rbp-1Fh]
  char v39; // [rsp+61h] [rbp-1Fh]
  unsigned int v40; // [rsp+64h] [rbp-1Ch]
  unsigned int v41; // [rsp+64h] [rbp-1Ch]
  GUID v42; // [rsp+68h] [rbp-18h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v6 + 16) >= 0x10u && *v4 == 16 && v4[1] >= 0x10u )
  {
    v7 = v4[2];
    if ( (v7 & 0x3FF) != 0 )
    {
      if ( RtlNumberOfSetBitsUlongPtr(v7) == 1 )
      {
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) += 72LL;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
      }
      v8 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v8 )
        goto LABEL_96;
      v42 = 0LL;
      IoGetActivityIdIrp(a2, &v42);
      v10 = *(unsigned __int8 **)(a2 + 184);
      if ( *v10 != 14 )
      {
        v11 = *v10 - 15;
        if ( *v10 == 15 )
        {
          if ( byte_140171461 >= 0 )
            goto LABEL_96;
          v12 = *((_QWORD *)v10 + 1);
          v13 = 0;
          v14 = 0LL;
          v37 = 0;
          v15 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = *(unsigned __int8 *)(v12 + 2);
          if ( (_BYTE)v19 == 40 )
          {
            v20 = 0LL;
            v38 = 0;
            if ( !*(_DWORD *)(v12 + 20) )
            {
              v21 = 0;
              v40 = *(_DWORD *)(v12 + 56);
              if ( v40 )
              {
                while ( 1 )
                {
                  v9 = *(unsigned int *)(v12 + 4LL * v21 + 120);
                  if ( (unsigned int)v9 >= 0x80 )
                  {
                    v22 = *(unsigned int *)(v12 + 16);
                    if ( (unsigned int)v9 < (unsigned int)v22 )
                    {
                      v23 = (unsigned int)v9;
                      v24 = *(_DWORD *)(v9 + v12) - 64;
                      if ( v24 )
                      {
                        v9 = (unsigned int)(v24 - 1);
                        if ( (_DWORD)v9 )
                        {
                          if ( (_DWORD)v9 == 1 )
                          {
                            v9 = v23 + 40;
                            if ( v23 + 40 <= v22 )
                              goto LABEL_19;
                          }
                        }
                        else
                        {
                          v9 = v23 + 56;
                          if ( v23 + 56 <= v22 )
                          {
                            v38 = 1;
                            if ( *(_BYTE *)(v23 + v12 + 10) )
                              v20 = (char *)(v23 + v12 + 24);
                            v13 = *(_BYTE *)(v23 + v12 + 8);
                            v14 = *(_BYTE **)(v23 + v12 + 16);
                            v15 = *(_BYTE *)(v23 + v12 + 9);
                          }
                        }
                      }
                      else
                      {
                        v9 = v23 + 40;
                        if ( v23 + 40 <= v22 )
                          goto LABEL_64;
                      }
                      if ( v38 )
                        goto LABEL_68;
                    }
                  }
                  if ( ++v21 >= v40 )
                    goto LABEL_68;
                }
              }
              goto LABEL_68;
            }
            goto LABEL_96;
          }
          goto LABEL_70;
        }
        goto LABEL_38;
      }
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_96;
      v36 = *(_DWORD *)(a2 + 48);
LABEL_94:
      v25 = &EventNonReadWriteRequestComplete;
      goto LABEL_95;
    }
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v8 )
    goto LABEL_96;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v10 = *(unsigned __int8 **)(a2 + 184);
  if ( *v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_96;
    v36 = *(_DWORD *)(a2 + 48);
    goto LABEL_94;
  }
  v11 = *v10 - 15;
  if ( *v10 != 15 )
  {
LABEL_38:
    if ( v11 != 12 )
      goto LABEL_96;
    if ( v10[1] == 7 && !*((_DWORD *)v10 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v27 = *(int **)(a2 + 56);
        if ( v27 )
          v3 = *v27;
        McTemplateK0pqd_EtwWriteTransfer(v9, (__int64)v10, &v42, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_96;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_96;
    v25 = &EventPnpRequestComplete;
    v36 = *(_DWORD *)(a2 + 48);
LABEL_95:
    McTemplateK0pd_EtwWriteTransfer(v9, v25, &v42, a2, v36);
    goto LABEL_96;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_96;
  v12 = *((_QWORD *)v10 + 1);
  v13 = 0;
  v14 = 0LL;
  v37 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = *(unsigned __int8 *)(v12 + 2);
  if ( (_BYTE)v19 != 40 )
  {
LABEL_70:
    v31 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !v19 )
      goto LABEL_71;
    goto LABEL_96;
  }
  v20 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_96;
  v28 = 0;
  v41 = *(_DWORD *)(v12 + 56);
  if ( !v41 )
    goto LABEL_68;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v12 + 4LL * v28 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v29 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v9 < (unsigned int)v29 )
        break;
    }
LABEL_62:
    if ( ++v28 >= v41 )
      goto LABEL_68;
  }
  v23 = (unsigned int)v9;
  v30 = *(_DWORD *)(v9 + v12) - 64;
  if ( v30 )
  {
    v9 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v23 + 40;
        if ( v23 + 40 <= v29 )
        {
LABEL_19:
          if ( *(_DWORD *)(v23 + v12 + 12) )
            v20 = (char *)(v23 + v12 + 32);
          v14 = *(_BYTE **)(v23 + v12 + 24);
          goto LABEL_67;
        }
      }
    }
    else
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v29 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v20 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    goto LABEL_61;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v29 )
  {
LABEL_61:
    if ( v39 )
      goto LABEL_68;
    goto LABEL_62;
  }
LABEL_64:
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v20 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_67:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_68:
  if ( v20 )
  {
    v31 = *v20;
    v17 = 0;
LABEL_71:
    LOBYTE(v9) = v31 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v12 + 3);
      if ( v32 == 1 || !v14 || !v15 )
        goto LABEL_90;
      LOBYTE(v12) = 0;
      v9 = (unsigned __int64)&v14[v15];
      v33 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v9 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v9 )
        {
          v16 = v14[2] & 0xF;
          v34 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v34 = (unsigned __int8)v14[7] + 8;
          v9 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v34];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v37 = 0;
          else
            v37 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v9;
          LOBYTE(v12) = 1;
        }
        v17 = v37;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v3) = v17;
        v35 = v18;
      }
      else
      {
LABEL_90:
        v16 = 0;
        v35 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v12, &v42, a2, *(_DWORD *)(a2 + 48), v32, v13, v16, v3, v35, a2);
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return -1073741811;
}
