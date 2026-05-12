/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1401B5FE8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     PortPassThroughExBasicValidation @ 0x140042A00 (PortPassThroughExBasicValidation.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x140056884 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v6; // r13
  char v7; // bp
  char v8; // r14
  char v9; // r15
  char v10; // si
  __int64 v11; // rcx
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  const EVENT_DESCRIPTOR *v16; // rdx
  int *v17; // rax
  char v18; // r8
  _BYTE *v19; // rax
  char v20; // si
  unsigned int v21; // eax
  unsigned __int64 v22; // r8
  char v23; // r12
  char v24; // r15
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // r14
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char *v31; // r11
  unsigned int *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rbp
  char v35; // cl
  __int64 v36; // [rsp+20h] [rbp-B8h]
  __int64 v37; // [rsp+28h] [rbp-B0h]
  __int64 v38; // [rsp+30h] [rbp-A8h]
  char v39; // [rsp+60h] [rbp-78h]
  int v40; // [rsp+64h] [rbp-74h]
  unsigned int v41; // [rsp+68h] [rbp-70h]
  GUID v42; // [rsp+70h] [rbp-68h] BYREF
  GUID v43; // [rsp+80h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v43 = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v43);
    if ( (byte_140171463 & 1) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        &EventPassThrough,
        &v43,
        a2,
        **(unsigned __int8 **)(a2 + 184),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL));
  }
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(_BYTE *)(a1 + 106);
  v8 = *(_BYTE *)(a1 + 105);
  v9 = *(_BYTE *)(a1 + 104);
  if ( ((*(_DWORD *)(v6 + 24) - 315460) & 0xFFFFFFFB) != 0 )
  {
    v10 = 0;
    if ( *(_DWORD *)(v6 + 16) < (IoIs32bitProcess((PIRP)a2) != 0 ? 44 : 56) )
      goto LABEL_14;
  }
  else
  {
    v10 = 1;
    if ( (int)PortPassThroughExBasicValidation((IRP *)a2) < 0 )
      goto LABEL_14;
  }
  v11 = *(_QWORD *)(a2 + 24);
  if ( v10 )
  {
    v26 = v11 + *(unsigned int *)(v11 + 24);
    if ( *(_WORD *)v26 <= 1u && *(_DWORD *)(v11 + 12) >= 0xCu )
    {
      *(_DWORD *)v26 = 1;
      *(_DWORD *)(v26 + 4) = 4;
      *(_BYTE *)(v26 + 8) = v9;
      *(_BYTE *)(v26 + 9) = v8;
      *(_BYTE *)(v26 + 10) = v7;
      *(_BYTE *)(v26 + 11) = 0;
      goto LABEL_10;
    }
LABEL_14:
    v13 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741808;
    if ( v13 )
      goto LABEL_18;
    v42 = 0LL;
    IoGetActivityIdIrp(a2, &v42);
    v15 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v15 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_18;
        v14 = *(unsigned int *)(a2 + 48);
        v16 = &EventNonReadWriteRequestComplete;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_18;
        v27 = *(_QWORD *)(v15 + 8);
        v28 = 0;
        v29 = 0LL;
        v30 = 0;
        v20 = 0;
        v23 = 0;
        v24 = 0;
        if ( *(_BYTE *)(v27 + 2) == 40 )
        {
          v31 = 0LL;
          v39 = 0;
          if ( *(_DWORD *)(v27 + 20) )
            goto LABEL_18;
          v14 = 0LL;
          v40 = 0;
          v41 = *(_DWORD *)(v27 + 56);
          if ( !v41 )
            goto LABEL_77;
          v32 = (unsigned int *)(v27 + 120);
          while ( 1 )
          {
            v33 = *v32;
            if ( (unsigned int)v33 >= 0x80 )
            {
              v34 = *(unsigned int *)(v27 + 16);
              if ( (unsigned int)v33 < (unsigned int)v34 )
              {
                if ( *(_DWORD *)(v33 + v27) == 64 )
                {
                  v14 = v33 + 40;
                  if ( v33 + 40 <= v34 )
                  {
                    if ( *(_BYTE *)(v33 + v27 + 10) )
                      v31 = (char *)(v33 + v27 + 24);
                    v29 = *(_BYTE **)(v33 + v27 + 16);
LABEL_76:
                    v30 = *(_BYTE *)(v33 + v27 + 9);
                    v28 = *(_BYTE *)(v33 + v27 + 8);
LABEL_77:
                    if ( v31 )
                    {
                      v35 = *v31;
                      goto LABEL_80;
                    }
                    goto LABEL_18;
                  }
                }
                else
                {
                  v14 = (unsigned int)(*(_DWORD *)(v33 + v27) - 65);
                  if ( *(_DWORD *)(v33 + v27) == 65 )
                  {
                    v14 = v33 + 56;
                    if ( v33 + 56 <= v34 )
                    {
                      v39 = 1;
                      if ( *(_BYTE *)(v33 + v27 + 10) )
                        v31 = (char *)(v33 + v27 + 24);
                      v28 = *(_BYTE *)(v33 + v27 + 8);
                      v29 = *(_BYTE **)(v33 + v27 + 16);
                      v30 = *(_BYTE *)(v33 + v27 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v33 + v27) == 66 )
                  {
                    v14 = v33 + 40;
                    if ( v33 + 40 <= v34 )
                    {
                      if ( *(_DWORD *)(v33 + v27 + 12) )
                        v31 = (char *)(v33 + v27 + 32);
                      v29 = *(_BYTE **)(v33 + v27 + 24);
                      goto LABEL_76;
                    }
                  }
                }
                if ( v39 )
                  goto LABEL_77;
                LODWORD(v14) = v40;
              }
            }
            v14 = (unsigned int)(v14 + 1);
            ++v32;
            v40 = v14;
            if ( (unsigned int)v14 >= v41 )
              goto LABEL_77;
          }
        }
        v35 = *(_BYTE *)(v27 + 72);
        v29 = *(_BYTE **)(v27 + 32);
        v30 = *(_BYTE *)(v27 + 11);
        v28 = *(_BYTE *)(v27 + 4);
        if ( *(_BYTE *)(v27 + 2) )
          goto LABEL_18;
LABEL_80:
        LOBYTE(v14) = v35 - 8;
        if ( (v14 & 0x5D) != 0 )
        {
LABEL_18:
          IofCompleteRequest((PIRP)a2, 0);
          return -1073741808;
        }
        if ( *(_BYTE *)(v27 + 3) == 1 || !v29 || !v30 )
          goto LABEL_43;
        v18 = 0;
        v14 = (unsigned __int64)&v29[v30];
        v19 = v29 + 8;
        if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
        {
          if ( (unsigned __int64)v19 > v14 )
          {
LABEL_41:
            if ( v18 )
            {
              LOBYTE(v3) = v23;
              v25 = v24;
LABEL_44:
              LOBYTE(v38) = v28;
              LOBYTE(v37) = *(_BYTE *)(v27 + 3);
              LODWORD(v36) = *(_DWORD *)(a2 + 48);
              McTemplateK0pduuuuup_EtwWriteTransfer(v14, v27, &v42, a2, v36, v37, v38, v20, v3, v25, a2);
              goto LABEL_18;
            }
LABEL_43:
            v20 = 0;
            v25 = 0;
            goto LABEL_44;
          }
          v23 = v29[2];
          v20 = v29[1] & 0xF;
          v24 = v29[3];
        }
        else
        {
          if ( (unsigned __int64)v19 > v14 )
            goto LABEL_41;
          v20 = v29[2] & 0xF;
          v21 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v21 = (unsigned __int8)v29[7] + 8;
          v14 = (unsigned __int64)(v29 + 13);
          v22 = (unsigned __int64)&v29[v21];
          if ( (unsigned __int64)(v29 + 13) <= v22 )
            v23 = v29[12];
          if ( (unsigned __int64)(v29 + 14) <= v22 )
            v24 = *(_BYTE *)v14;
        }
        v18 = 1;
        goto LABEL_41;
      case 0x1B:
        if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v17 = *(int **)(a2 + 56);
            if ( v17 )
              v3 = *v17;
            LODWORD(v37) = *(_DWORD *)(a2 + 48);
            LODWORD(v36) = v3;
            McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v42, a2, v36, v37);
          }
          goto LABEL_18;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_18;
        v16 = &EventPnpRequestComplete;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_18;
    }
    McTemplateK0pd_EtwWriteTransfer(v14, v16, &v42, a2, v36);
    goto LABEL_18;
  }
  *(_BYTE *)(v11 + 3) = v9;
  *(_BYTE *)(v11 + 4) = v8;
  *(_BYTE *)(v11 + 5) = v7;
LABEL_10:
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140171462 & 8) != 0 )
    {
      LODWORD(v36) = 0;
      McTemplateK0pd_EtwWriteTransfer(0LL, &EventNonReadWriteRequestComplete, &v43, a2, v36);
    }
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), (PIRP)a2);
}
