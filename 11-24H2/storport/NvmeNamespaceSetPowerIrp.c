/*
 * XREFs of NvmeNamespaceSetPowerIrp @ 0x1401354D8
 * Callers:
 *     NvmeNamespacePowerIrp @ 0x140106734 (NvmeNamespacePowerIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespacePreProcessSetDevicePowerIrp @ 0x140134628 (NvmeNamespacePreProcessSetDevicePowerIrp.c)
 *     NvmeNamespaceProcessSetDevicePowerIrp @ 0x14013476C (NvmeNamespaceProcessSetDevicePowerIrp.c)
 *     NvmeNamespaceSetSystemPowerIrp @ 0x140135BF8 (NvmeNamespaceSetSystemPowerIrp.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceSetPowerIrp(struct _SLIST_ENTRY *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // r8d
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // r15d
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r13
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // r14
  char v19; // r12
  char v20; // r11
  char *v21; // r11
  unsigned int v22; // r8d
  unsigned int *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  char v31; // si
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  unsigned __int64 v37; // rdx
  char v38; // r12
  _BYTE *v39; // r9
  unsigned __int8 v40; // r10
  char v41; // r11
  char v42; // r14
  char v43; // r13
  char *v44; // r14
  unsigned int v45; // r8d
  unsigned int *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r15
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  char v53; // al
  char v55; // [rsp+60h] [rbp-9h]
  char v56; // [rsp+60h] [rbp-9h]
  char v57; // [rsp+61h] [rbp-8h]
  char v58; // [rsp+62h] [rbp-7h]
  char v59; // [rsp+62h] [rbp-7h]
  int v60; // [rsp+64h] [rbp-5h]
  int v61; // [rsp+68h] [rbp-1h]
  unsigned __int64 v62; // [rsp+70h] [rbp+7h]
  unsigned __int64 v63; // [rsp+70h] [rbp+7h]
  GUID v64; // [rsp+78h] [rbp+Fh] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = *(_DWORD *)(v4 + 16);
  v7 = *(_DWORD *)(v4 + 24);
  if ( !v6 )
  {
    if ( v7 > 6 )
    {
      v8 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v8 )
        goto LABEL_144;
      v64 = 0LL;
      IoGetActivityIdIrp(a2, &v64);
      v34 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v34 )
      {
        case 0xE:
          if ( (byte_140171462 & 8) == 0 )
            goto LABEL_144;
          v36 = &EventNonReadWriteRequestComplete;
          break;
        case 0xF:
          if ( byte_140171461 >= 0 )
            goto LABEL_144;
          v37 = *(_QWORD *)(v34 + 8);
          v38 = 0;
          v39 = 0LL;
          v56 = 0;
          v40 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          if ( *(_BYTE *)(v37 + 2) != 40 )
          {
            v49 = *(_BYTE *)(v37 + 72);
            v39 = *(_BYTE **)(v37 + 32);
            v40 = *(_BYTE *)(v37 + 11);
            v38 = *(_BYTE *)(v37 + 4);
            if ( !*(_BYTE *)(v37 + 2) )
              goto LABEL_120;
            goto LABEL_144;
          }
          v44 = 0LL;
          v59 = 0;
          if ( *(_DWORD *)(v37 + 20) )
            goto LABEL_144;
          v33 = 0LL;
          v60 = 0;
          if ( !*(_DWORD *)(v37 + 56) )
            goto LABEL_117;
          v45 = *(_DWORD *)(v37 + 56);
          v46 = (unsigned int *)(v37 + 120);
          v63 = v37 + 120;
          while ( 1 )
          {
            v47 = *v46;
            if ( (unsigned int)v47 >= 0x80 )
            {
              v48 = *(unsigned int *)(v37 + 16);
              if ( (unsigned int)v47 < (unsigned int)v48 )
              {
                if ( *(_DWORD *)(v47 + v37) == 64 )
                {
                  v33 = v47 + 40;
                  if ( v47 + 40 <= v48 )
                  {
                    if ( *(_BYTE *)(v47 + v37 + 10) )
                      v44 = (char *)(v47 + v37 + 24);
                    v39 = *(_BYTE **)(v47 + v37 + 16);
LABEL_116:
                    v40 = *(_BYTE *)(v47 + v37 + 9);
                    v38 = *(_BYTE *)(v47 + v37 + 8);
LABEL_117:
                    if ( v44 )
                    {
                      v49 = *v44;
                      v42 = 0;
LABEL_120:
                      LOBYTE(v33) = v49 - 8;
                      if ( (v33 & 0x5D) == 0 )
                      {
                        v50 = *(_BYTE *)(v37 + 3);
                        if ( v50 == 1 || !v39 || !v40 )
                          goto LABEL_139;
                        LOBYTE(v37) = 0;
                        v33 = (unsigned __int64)&v39[v40];
                        v51 = v39 + 8;
                        if ( (unsigned __int8)((*v39 & 0x7F) - 114) <= 1u )
                        {
                          if ( (unsigned __int64)v51 <= v33 )
                          {
                            LOBYTE(v37) = 1;
                            v42 = v39[2];
                            v41 = v39[1] & 0xF;
                            v43 = v39[3];
                          }
                        }
                        else
                        {
                          if ( (unsigned __int64)v51 <= v33 )
                          {
                            v41 = v39[2] & 0xF;
                            v52 = v40;
                            if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
                              v52 = (unsigned __int8)v39[7] + 8;
                            v33 = (unsigned __int64)(v39 + 13);
                            v37 = (unsigned __int64)&v39[v52];
                            if ( (unsigned __int64)(v39 + 13) > v37 )
                              v56 = 0;
                            else
                              v56 = v39[12];
                            if ( (unsigned __int64)(v39 + 14) <= v37 )
                              v43 = *(_BYTE *)v33;
                            LOBYTE(v37) = 1;
                          }
                          v42 = v56;
                        }
                        if ( (_BYTE)v37 )
                        {
                          LOBYTE(v3) = v42;
                          v53 = v43;
                        }
                        else
                        {
LABEL_139:
                          v41 = 0;
                          v53 = 0;
                        }
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v33,
                          v37,
                          &v64,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          v50,
                          v38,
                          v41,
                          v3,
                          v53,
                          a2);
                      }
                    }
                    goto LABEL_144;
                  }
                }
                else
                {
                  v33 = (unsigned int)(*(_DWORD *)(v47 + v37) - 65);
                  if ( *(_DWORD *)(v47 + v37) == 65 )
                  {
                    v33 = v47 + 56;
                    if ( v47 + 56 <= v48 )
                    {
                      v59 = 1;
                      if ( *(_BYTE *)(v47 + v37 + 10) )
                        v44 = (char *)(v47 + v37 + 24);
                      v38 = *(_BYTE *)(v47 + v37 + 8);
                      v39 = *(_BYTE **)(v47 + v37 + 16);
                      v40 = *(_BYTE *)(v47 + v37 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v47 + v37) == 66 )
                  {
                    v33 = v47 + 40;
                    if ( v47 + 40 <= v48 )
                    {
                      if ( *(_DWORD *)(v47 + v37 + 12) )
                        v44 = (char *)(v47 + v37 + 32);
                      v39 = *(_BYTE **)(v47 + v37 + 24);
                      goto LABEL_116;
                    }
                  }
                }
                if ( v59 )
                  goto LABEL_117;
                LODWORD(v33) = v60;
                v45 = *(_DWORD *)(v37 + 56);
              }
            }
            v33 = (unsigned int)(v33 + 1);
            v46 = (unsigned int *)(v63 + 4);
            v60 = v33;
            v63 += 4LL;
            if ( (unsigned int)v33 >= v45 )
              goto LABEL_117;
          }
        case 0x1B:
          if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
          {
            if ( (byte_140171462 & 0x40) != 0 )
            {
              v35 = *(int **)(a2 + 56);
              if ( v35 )
                v3 = *v35;
              McTemplateK0pqd_EtwWriteTransfer(v33, v34, &v64, a2, v3, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_144;
          }
          if ( (byte_140171462 & 0x20) == 0 )
          {
LABEL_144:
            IofCompleteRequest((PIRP)a2, 0);
            return 0LL;
          }
          v36 = &EventPnpRequestComplete;
          break;
        default:
          goto LABEL_144;
      }
      McTemplateK0pd_EtwWriteTransfer(v33, v36, &v64, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_144;
    }
    return (unsigned int)NvmeNamespaceSetSystemPowerIrp(a1, a2);
  }
  if ( v6 == 1 )
  {
    if ( *((_DWORD *)&a1[8].Next[4].Next + 2) != 4 || (v31 = 1, v7 != 1) )
      v31 = 0;
    v9 = 259;
    if ( (unsigned int)NvmeNamespacePreProcessSetDevicePowerIrp(a1, a2, v31) == 259 )
      return v9;
    return (unsigned int)NvmeNamespaceProcessSetDevicePowerIrp((__int64)a1, a2, v31);
  }
  v8 = StorEtwLoggingEnabled == 0;
  v9 = -1073741823;
  *(_DWORD *)(a2 + 48) = -1073741823;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v8 )
    goto LABEL_71;
  v64 = 0LL;
  IoGetActivityIdIrp(a2, &v64);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_71;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v3 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v64, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_71;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_71;
    v13 = &EventPnpRequestComplete;
LABEL_70:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v64, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_71;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_71;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v57 = 0;
  v17 = 0;
  v55 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_46;
    goto LABEL_71;
  }
  v21 = 0LL;
  v58 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_71;
  v10 = 0LL;
  v61 = 0;
  if ( !*(_DWORD *)(v14 + 56) )
    goto LABEL_43;
  v22 = *(_DWORD *)(v14 + 56);
  v23 = (unsigned int *)(v14 + 120);
  v62 = v14 + 120;
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v24 < (unsigned int)v25 )
        break;
    }
LABEL_36:
    v10 = (unsigned int)(v10 + 1);
    v23 = (unsigned int *)(v62 + 4);
    v61 = v10;
    v62 += 4LL;
    if ( (unsigned int)v10 >= v22 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v24 + v14) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v24 + v14) - 65);
    if ( *(_DWORD *)(v24 + v14) == 65 )
    {
      v10 = v24 + 56;
      if ( v24 + 56 <= v25 )
      {
        v58 = 1;
        if ( *(_BYTE *)(v24 + v14 + 10) )
          v21 = (char *)(v24 + v14 + 24);
        v15 = *(_BYTE *)(v24 + v14 + 8);
        v16 = *(_BYTE **)(v24 + v14 + 16);
        v17 = *(_BYTE *)(v24 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v24 + v14) == 66 )
    {
      v10 = v24 + 40;
      if ( v24 + 40 <= v25 )
      {
        if ( *(_DWORD *)(v24 + v14 + 12) )
          v21 = (char *)(v24 + v14 + 32);
        v16 = *(_BYTE **)(v24 + v14 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_34;
  }
  v10 = v24 + 40;
  if ( v24 + 40 > v25 )
  {
LABEL_34:
    if ( v58 )
      goto LABEL_42;
    LODWORD(v10) = v61;
    v22 = *(_DWORD *)(v14 + 56);
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v24 + v14 + 10) )
    v21 = (char *)(v24 + v14 + 24);
  v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_41:
  v17 = *(_BYTE *)(v24 + v14 + 9);
  v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_42:
  v19 = 0;
LABEL_43:
  if ( v21 )
  {
    v26 = *v21;
    v20 = 0;
LABEL_46:
    LOBYTE(v10) = v26 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v14 + 3);
      if ( v27 == 1 || !v16 || !v17 )
        goto LABEL_66;
      LOBYTE(v14) = 0;
      v10 = (unsigned __int64)&v16[v17];
      v28 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v29 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v29 = (unsigned __int8)v16[7] + 8;
          v10 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v29];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v57 = 0;
          else
            v57 = v16[12];
          if ( (unsigned __int64)(v16 + 14) > v14 )
            v55 = 0;
          else
            v55 = *(_BYTE *)v10;
          LOBYTE(v14) = 1;
        }
        v20 = v55;
        v19 = v57;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v3) = v19;
        v30 = v20;
      }
      else
      {
LABEL_66:
        v18 = 0;
        v30 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v64, a2, *(_DWORD *)(a2 + 48), v27, v15, v18, v3, v30, a2);
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
