/*
 * XREFs of NvmeNamespaceDeviceEnumeratedIrp @ 0x1401A35F4
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceDeviceEnumeratedIrp(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  NTSTATUS v4; // eax
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // esi
  unsigned __int8 *v8; // rdx
  unsigned __int64 v9; // rcx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int v20; // eax
  unsigned int *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  unsigned int v29; // r14d
  int v30; // ebx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  int *v33; // rax
  const EVENT_DESCRIPTOR *v34; // rdx
  unsigned __int64 v35; // rdx
  char v36; // r15
  _BYTE *v37; // r9
  unsigned __int8 v38; // r10
  char v39; // si
  char v40; // r11
  char v41; // r12
  char *v42; // r11
  unsigned int v43; // eax
  unsigned int *v44; // r13
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  __int64 Type; // [rsp+20h] [rbp-59h]
  __int64 Size; // [rsp+28h] [rbp-51h]
  PVOID Data; // [rsp+30h] [rbp-49h]
  char v56; // [rsp+60h] [rbp-19h]
  char v57; // [rsp+60h] [rbp-19h]
  char v58; // [rsp+61h] [rbp-18h]
  char v59; // [rsp+61h] [rbp-18h]
  NTSTATUS v60; // [rsp+64h] [rbp-15h]
  unsigned int v61; // [rsp+64h] [rbp-15h]
  char v62[4]; // [rsp+68h] [rbp-11h] BYREF
  int v63; // [rsp+6Ch] [rbp-Dh]
  unsigned int v64; // [rsp+70h] [rbp-9h]
  GUID v65; // [rsp+78h] [rbp-1h] BYREF
  GUID v66; // [rsp+88h] [rbp+Fh] BYREF

  if ( (*(_BYTE *)(a1 + 200) & 1) == 0 )
  {
    v30 = 0;
    v6 = StorEtwLoggingEnabled == 0;
    v61 = *(_DWORD *)(a2 + 48);
    v29 = v61;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v61;
    if ( v6 )
      goto LABEL_136;
    v66 = 0LL;
    IoGetActivityIdIrp(a2, &v66);
    v32 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v32 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_136;
        v34 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_136;
        v35 = *(_QWORD *)(v32 + 8);
        v36 = 0;
        v37 = 0LL;
        v57 = 0;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        v41 = 0;
        if ( *(_BYTE *)(v35 + 2) != 40 )
        {
          v47 = *(_BYTE *)(v35 + 72);
          v37 = *(_BYTE **)(v35 + 32);
          v38 = *(_BYTE *)(v35 + 11);
          v36 = *(_BYTE *)(v35 + 4);
          if ( !*(_BYTE *)(v35 + 2) )
            goto LABEL_112;
          goto LABEL_136;
        }
        v42 = 0LL;
        v59 = 0;
        if ( *(_DWORD *)(v35 + 20) )
          goto LABEL_136;
        v43 = *(_DWORD *)(v35 + 56);
        v31 = 0LL;
        v63 = 0;
        v64 = v43;
        if ( !v43 )
          goto LABEL_109;
        v44 = (unsigned int *)(v35 + 120);
        while ( 1 )
        {
          v45 = *v44;
          if ( (unsigned int)v45 >= 0x80 )
          {
            v46 = *(unsigned int *)(v35 + 16);
            if ( (unsigned int)v45 < (unsigned int)v46 )
            {
              if ( *(_DWORD *)(v45 + v35) == 64 )
              {
                v31 = v45 + 40;
                if ( v45 + 40 <= v46 )
                {
                  if ( *(_BYTE *)(v45 + v35 + 10) )
                    v42 = (char *)(v45 + v35 + 24);
                  v37 = *(_BYTE **)(v45 + v35 + 16);
                  goto LABEL_107;
                }
              }
              else
              {
                v31 = (unsigned int)(*(_DWORD *)(v45 + v35) - 65);
                if ( *(_DWORD *)(v45 + v35) == 65 )
                {
                  v31 = v45 + 56;
                  if ( v45 + 56 <= v46 )
                  {
                    v59 = 1;
                    if ( *(_BYTE *)(v45 + v35 + 10) )
                      v42 = (char *)(v45 + v35 + 24);
                    v36 = *(_BYTE *)(v45 + v35 + 8);
                    v37 = *(_BYTE **)(v45 + v35 + 16);
                    v38 = *(_BYTE *)(v45 + v35 + 9);
                  }
                }
                else if ( *(_DWORD *)(v45 + v35) == 66 )
                {
                  v31 = v45 + 40;
                  if ( v45 + 40 <= v46 )
                  {
                    if ( *(_DWORD *)(v45 + v35 + 12) )
                      v42 = (char *)(v45 + v35 + 32);
                    v37 = *(_BYTE **)(v45 + v35 + 24);
LABEL_107:
                    v38 = *(_BYTE *)(v45 + v35 + 9);
                    v36 = *(_BYTE *)(v45 + v35 + 8);
LABEL_108:
                    v29 = v61;
LABEL_109:
                    if ( v42 )
                    {
                      v47 = *v42;
                      v40 = 0;
LABEL_112:
                      LOBYTE(v31) = v47 - 8;
                      if ( (v31 & 0x5D) == 0 )
                      {
                        v48 = *(_BYTE *)(v35 + 3);
                        if ( v48 == 1 || !v37 || !v38 )
                          goto LABEL_131;
                        LOBYTE(v35) = 0;
                        v31 = (unsigned __int64)&v37[v38];
                        v49 = v37 + 8;
                        if ( (unsigned __int8)((*v37 & 0x7F) - 114) <= 1u )
                        {
                          if ( (unsigned __int64)v49 <= v31 )
                          {
                            LOBYTE(v35) = 1;
                            v40 = v37[2];
                            v39 = v37[1] & 0xF;
                            v41 = v37[3];
                          }
                        }
                        else
                        {
                          if ( (unsigned __int64)v49 <= v31 )
                          {
                            v39 = v37[2] & 0xF;
                            v50 = v38;
                            if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
                              v50 = (unsigned __int8)v37[7] + 8;
                            v31 = (unsigned __int64)(v37 + 13);
                            v35 = (unsigned __int64)&v37[v50];
                            if ( (unsigned __int64)(v37 + 13) > v35 )
                              v57 = 0;
                            else
                              v57 = v37[12];
                            if ( (unsigned __int64)(v37 + 14) <= v35 )
                              v41 = *(_BYTE *)v31;
                            LOBYTE(v35) = 1;
                          }
                          v40 = v57;
                        }
                        if ( (_BYTE)v35 )
                        {
                          LOBYTE(v30) = v40;
                          v51 = v41;
                        }
                        else
                        {
LABEL_131:
                          v39 = 0;
                          v51 = 0;
                        }
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v31,
                          v35,
                          &v66,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          v48,
                          v36,
                          v39,
                          v30,
                          v51,
                          a2);
                      }
                    }
                    goto LABEL_136;
                  }
                }
              }
              if ( v59 )
                goto LABEL_108;
              LODWORD(v31) = v63;
            }
          }
          v31 = (unsigned int)(v31 + 1);
          ++v44;
          v63 = v31;
          if ( (unsigned int)v31 >= v64 )
            goto LABEL_108;
        }
      case 0x1B:
        if ( *(_BYTE *)(v32 + 1) == 7 && !*(_DWORD *)(v32 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v33 = *(int **)(a2 + 56);
            if ( v33 )
              v30 = *v33;
            McTemplateK0pqd_EtwWriteTransfer(v31, v32, &v66, a2, v30, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_136;
        }
        if ( (byte_140171462 & 0x20) == 0 )
        {
LABEL_136:
          v7 = v29;
          goto LABEL_137;
        }
        v34 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_136;
    }
    McTemplateK0pd_EtwWriteTransfer(v31, v34, &v66, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_136;
  }
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v62[0] = -1;
  v4 = IoSetDevicePropertyData(v3, &DEVPKEY_Storage_No_Partitions, 0, 0, 0x11u, 1u, v62);
  v5 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v6 = StorEtwLoggingEnabled == 0;
  v7 = v4;
  v60 = v4;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v6 )
    goto LABEL_137;
  v65 = 0LL;
  IoGetActivityIdIrp(a2, &v65);
  v8 = *(unsigned __int8 **)(a2 + 184);
  v9 = (unsigned int)*v8 - 14;
  if ( *v8 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_137;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  v9 = (unsigned int)*v8 - 15;
  if ( *v8 != 15 )
  {
    if ( *v8 != 27 )
      goto LABEL_137;
    if ( v8[1] == 7 && !*((_DWORD *)v8 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v5 = *v10;
        LODWORD(Size) = *(_DWORD *)(a2 + 48);
        LODWORD(Type) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v9, (__int64)v8, &v65, a2, Type, Size);
      }
      goto LABEL_137;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_137;
    v11 = &EventPnpRequestComplete;
LABEL_14:
    LODWORD(Type) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v9, v11, &v65, a2, Type);
    goto LABEL_137;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_137;
  v12 = *((_QWORD *)v8 + 1);
  v13 = 0;
  v14 = 0LL;
  v56 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_45;
    goto LABEL_66;
  }
  v19 = 0LL;
  v58 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_66;
  v20 = *(_DWORD *)(v12 + 56);
  v9 = 0LL;
  v63 = 0;
  v64 = v20;
  if ( !v20 )
    goto LABEL_42;
  v21 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    v9 = (unsigned int)(v9 + 1);
    ++v21;
    v63 = v9;
    if ( (unsigned int)v9 >= v64 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v9 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v58 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v9 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_34;
  }
  v9 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_34:
    if ( v58 )
      goto LABEL_42;
    LODWORD(v9) = v63;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_41:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_42:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_45:
    LOBYTE(v9) = v24 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v12 + 3);
      if ( v25 == 1 || !v14 || !v15 )
        goto LABEL_64;
      LOBYTE(v12) = 0;
      v9 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v9 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v56 = 0;
          else
            v56 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v9;
          LOBYTE(v12) = 1;
        }
        v17 = v56;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v5) = v17;
        v28 = v18;
      }
      else
      {
LABEL_64:
        v16 = 0;
        v28 = 0;
      }
      LOBYTE(Data) = v13;
      LOBYTE(Size) = v25;
      LODWORD(Type) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v12, &v65, a2, Type, Size, Data, v16, v5, v28, a2);
    }
  }
LABEL_66:
  v7 = v60;
LABEL_137:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
